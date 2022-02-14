
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_data {int hit_nul; int is_printable; int line_no; } ;
typedef enum binary_printer_ops { ____Placeholder_binary_printer_ops } binary_printer_ops ;
typedef int FILE ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static int FUNC_2(enum binary_printer_ops VAR_0,
          unsigned int VAR_1,
          void *VAR_2, FILE *VAR_3)
{
 unsigned char VAR_4 = (unsigned char)VAR_1;
 struct printer_data *VAR_5 = VAR_2;
 int VAR_6 = 0;

 switch (VAR_0) {
 case 134:
  VAR_6 += FUNC_0(VAR_3, "\n");
  break;
 case 132:
  VAR_6 += FUNC_0(VAR_3, "%17s", !VAR_5->line_no ? "BPF output:" :
              "           ");
  break;
 case 137:
  VAR_6 += FUNC_0(VAR_3, " %04x:", VAR_1);
  break;
 case 130:
  VAR_6 += FUNC_0(VAR_3, " %02x", VAR_1);
  break;
 case 129:
  VAR_6 += FUNC_0(VAR_3, "   ");
  break;
 case 128:
  VAR_6 += FUNC_0(VAR_3, "  ");
  break;
 case 136:
  if (VAR_5->hit_nul && VAR_4)
   VAR_5->is_printable = 0;

  if (!FUNC_1(VAR_4)) {
   VAR_6 += FUNC_0(VAR_3, "%c", '.');

   if (!VAR_5->is_printable)
    break;

   if (VAR_4 == '\0')
    VAR_5->hit_nul = 1;
   else
    VAR_5->is_printable = 0;
  } else {
   VAR_6 += FUNC_0(VAR_3, "%c", VAR_4);
  }
  break;
 case 135:
  VAR_6 += FUNC_0(VAR_3, " ");
  break;
 case 131:
  VAR_6 += FUNC_0(VAR_3, "\n");
  VAR_5->line_no++;
  break;
 case 133:
 default:
  break;
 }

 return VAR_6;
}
