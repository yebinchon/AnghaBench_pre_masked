
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; } ;
union perf_event {TYPE_1__ header; } ;
typedef enum binary_printer_ops { ____Placeholder_binary_printer_ops } binary_printer_ops ;
typedef int FILE ;
 char* VAR_0 ;
 int FUNC_0 (int *,char const*,char*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (unsigned char) ;

__attribute__((used)) static int FUNC_3(enum binary_printer_ops VAR_1,
          unsigned int VAR_2, void *VAR_3, FILE *VAR_4)
{
 const char *VAR_5 = VAR_0;
 union perf_event *VAR_6 = (union perf_event *)VAR_3;
 unsigned char VAR_7 = (unsigned char)VAR_2;
 int VAR_8 = 0;

 switch (VAR_1) {
 case 134:
  VAR_8 += FUNC_1(VAR_4, ".");
  VAR_8 += FUNC_0(VAR_4, VAR_5, "\n. ... raw event: size %d bytes\n",
      VAR_6->header.size);
  break;
 case 132:
  VAR_8 += FUNC_1(VAR_4, ".");
  break;
 case 137:
  VAR_8 += FUNC_0(VAR_4, VAR_5, "  %04x: ", VAR_2);
  break;
 case 130:
  VAR_8 += FUNC_0(VAR_4, VAR_5, " %02x", VAR_2);
  break;
 case 129:
  VAR_8 += FUNC_0(VAR_4, VAR_5, "   ");
  break;
 case 128:
  VAR_8 += FUNC_0(VAR_4, VAR_5, "  ");
  break;
 case 136:
  VAR_8 += FUNC_0(VAR_4, VAR_5, "%c",
         FUNC_2(VAR_7) ? VAR_7 : '.');
  break;
 case 135:
  VAR_8 += FUNC_0(VAR_4, VAR_5, " ");
  break;
 case 131:
  VAR_8 += FUNC_0(VAR_4, VAR_5, "\n");
  break;
 case 133:
  VAR_8 += FUNC_1(VAR_4, "\n");
  break;
 default:
  break;
 }

 return VAR_8;
}
