
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmtbuf {int dummy; } ;
typedef size_t c ;


 int FUNC_0 (struct fmtbuf*,int) ;

__attribute__((used)) static void FUNC_1(struct fmtbuf *VAR_0, const char *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 FUNC_0(VAR_0, VAR_2);
 while ((VAR_4 = *VAR_1++) != 0) {
  switch (VAR_4) {
  default:
   if (VAR_4 < 32 || VAR_4 > 127) {
    FUNC_0(VAR_0, '\\');
    if (VAR_2 == '(')
    {
     FUNC_0(VAR_0, '0' + ((VAR_4 >> 6) & 7));
     FUNC_0(VAR_0, '0' + ((VAR_4 >> 3) & 7));
     FUNC_0(VAR_0, '0' + ((VAR_4) & 7));
    }
    else
    {
     FUNC_0(VAR_0, 'x');
     FUNC_0(VAR_0, "0123456789ABCDEF"[(VAR_4>>4)&15]);
     FUNC_0(VAR_0, "0123456789ABCDEF"[(VAR_4)&15]);
    }
   } else {
    if (VAR_4 == VAR_2 || VAR_4 == VAR_3)
     FUNC_0(VAR_0, '\\');
    FUNC_0(VAR_0, VAR_4);
   }
   break;
  case '\\': FUNC_0(VAR_0, '\\'); FUNC_0(VAR_0, '\\'); break;
  case '\b': FUNC_0(VAR_0, '\\'); FUNC_0(VAR_0, 'b'); break;
  case '\f': FUNC_0(VAR_0, '\\'); FUNC_0(VAR_0, 'f'); break;
  case '\n': FUNC_0(VAR_0, '\\'); FUNC_0(VAR_0, 'n'); break;
  case '\r': FUNC_0(VAR_0, '\\'); FUNC_0(VAR_0, 'r'); break;
  case '\t': FUNC_0(VAR_0, '\\'); FUNC_0(VAR_0, 't'); break;
  }
 }
 FUNC_0(VAR_0, VAR_3);
}
