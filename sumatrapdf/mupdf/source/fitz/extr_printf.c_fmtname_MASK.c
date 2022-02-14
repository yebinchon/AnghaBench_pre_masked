
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmtbuf {int dummy; } ;
typedef size_t c ;


 int FUNC_0 (struct fmtbuf*,int) ;

__attribute__((used)) static void FUNC_1(struct fmtbuf *VAR_0, const char *VAR_1)
{
 int VAR_2;
 FUNC_0(VAR_0, '/');
 while ((VAR_2 = *VAR_1++) != 0) {
  if (VAR_2 <= 32 || VAR_2 == '/' || VAR_2 == '#') {
   FUNC_0(VAR_0, '#');
   FUNC_0(VAR_0, "0123456789ABCDEF"[(VAR_2>>4)&15]);
   FUNC_0(VAR_0, "0123456789ABCDEF"[(VAR_2)&15]);
  } else {
   FUNC_0(VAR_0, VAR_2);
  }
 }
}
