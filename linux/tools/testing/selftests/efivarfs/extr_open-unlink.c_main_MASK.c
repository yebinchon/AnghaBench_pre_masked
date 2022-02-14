
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char const*,int,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (char const*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (int,char*,int) ;

int FUNC_9(int VAR_6, char **VAR_7)
{
 const char *VAR_8;
 char VAR_9[5];
 int VAR_10, VAR_11;

 if (VAR_6 < 2) {
  FUNC_1(VAR_5, "usage: %s <path>\n", VAR_7[0]);
  return VAR_0;
 }

 VAR_8 = VAR_7[1];





 *(uint32_t *)VAR_9 = 0x7;
 VAR_9[4] = 0;


 VAR_10 = FUNC_3(VAR_8, VAR_4 | VAR_2, 0600);
 if (VAR_10 < 0) {
  FUNC_4("open(O_WRONLY)");
  return VAR_0;
 }

 VAR_11 = FUNC_8(VAR_10, VAR_9, sizeof(VAR_9));
 if (VAR_11 != sizeof(VAR_9)) {
  FUNC_4("write");
  return VAR_0;
 }

 FUNC_0(VAR_10);

 VAR_11 = FUNC_2(VAR_8);
 if (VAR_11 < 0) {
  FUNC_4("ioctl(FS_IOC_GETFLAGS)");
  return VAR_0;
 } else if (VAR_11) {
  VAR_11 = FUNC_6(VAR_8, 0);
  if (VAR_11 < 0) {
   FUNC_4("ioctl(FS_IOC_SETFLAGS)");
   return VAR_0;
  }
 }

 VAR_10 = FUNC_3(VAR_8, VAR_3);
 if (VAR_10 < 0) {
  FUNC_4("open");
  return VAR_0;
 }

 if (FUNC_7(VAR_8) < 0) {
  FUNC_4("unlink");
  return VAR_0;
 }

 VAR_11 = FUNC_5(VAR_10, VAR_9, sizeof(VAR_9));
 if (VAR_11 > 0) {
  FUNC_1(VAR_5, "reading from an unlinked variable "
    "shouldn't be possible\n");
  return VAR_0;
 }

 return VAR_1;
}
