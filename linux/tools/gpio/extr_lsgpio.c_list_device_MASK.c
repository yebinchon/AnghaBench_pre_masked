
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioline_info {char* name; char* label; int lines; int line_offset; char* consumer; scalar_t__ flags; } ;
struct gpiochip_info {char* name; char* label; int lines; int line_offset; char* consumer; scalar_t__ flags; } ;
typedef int linfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,int ,struct gpioline_info*) ;
 int FUNC_5 (struct gpioline_info*,int ,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_9(const char *VAR_6)
{
 struct gpiochip_info VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_10 = FUNC_0(&VAR_8, "/dev/%s", VAR_6);
 if (VAR_10 < 0)
  return -VAR_0;

 VAR_9 = FUNC_6(VAR_8, 0);
 if (VAR_9 == -1) {
  VAR_10 = -VAR_3;
  FUNC_2(VAR_4, "Failed to open %s\n", VAR_8);
  goto exit_close_error;
 }


 VAR_10 = FUNC_4(VAR_9, VAR_1, &VAR_7);
 if (VAR_10 == -1) {
  VAR_10 = -VAR_3;
  FUNC_7("Failed to issue CHIPINFO IOCTL\n");
  goto exit_close_error;
 }
 FUNC_2(VAR_5, "GPIO chip: %s, \"%s\", %u GPIO lines\n",
  VAR_7.name, VAR_7.label, VAR_7.lines);


 for (VAR_11 = 0; VAR_11 < VAR_7.lines; VAR_11++) {
  struct gpioline_info VAR_12;

  FUNC_5(&VAR_12, 0, sizeof(VAR_12));
  VAR_12.line_offset = VAR_11;

  VAR_10 = FUNC_4(VAR_9, VAR_2, &VAR_12);
  if (VAR_10 == -1) {
   VAR_10 = -VAR_3;
   FUNC_7("Failed to issue LINEINFO IOCTL\n");
   goto exit_close_error;
  }
  FUNC_2(VAR_5, "\tline %2d:", VAR_12.line_offset);
  if (VAR_12.name[0])
   FUNC_2(VAR_5, " \"%s\"", VAR_12.name);
  else
   FUNC_2(VAR_5, " unnamed");
  if (VAR_12.consumer[0])
   FUNC_2(VAR_5, " \"%s\"", VAR_12.consumer);
  else
   FUNC_2(VAR_5, " unused");
  if (VAR_12.flags) {
   FUNC_2(VAR_5, " [");
   FUNC_8(VAR_12.flags);
   FUNC_2(VAR_5, "]");
  }
  FUNC_2(VAR_5, "\n");

 }

exit_close_error:
 if (FUNC_1(VAR_9) == -1)
  FUNC_7("Failed to close GPIO character device file");
 FUNC_3(VAR_8);
 return VAR_10;
}
