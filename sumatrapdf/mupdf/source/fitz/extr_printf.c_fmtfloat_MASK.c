
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmtbuf {int dummy; } ;


 float VAR_0 ;
 int FUNC_0 (struct fmtbuf*,char) ;
 int FUNC_1 (float,char*,int*) ;
 scalar_t__ FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float) ;
 scalar_t__ FUNC_4 (float) ;

__attribute__((used)) static void FUNC_5(struct fmtbuf *VAR_1, float VAR_2)
{
 char VAR_3[40], *VAR_4 = VAR_3;
 int VAR_5, VAR_6, VAR_7;

 if (FUNC_3(VAR_2)) VAR_2 = 0;
 if (FUNC_2(VAR_2)) VAR_2 = VAR_2 < 0 ? -VAR_0 : VAR_0;

 if (FUNC_4(VAR_2))
  FUNC_0(VAR_1, '-');

 if (VAR_2 == 0)
 {
  FUNC_0(VAR_1, '0');
  return;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, &VAR_5);
 VAR_7 = VAR_5 + VAR_6;

 if (VAR_7 <= 0)
 {
  FUNC_0(VAR_1, '.');
  while (VAR_7++ < 0)
   FUNC_0(VAR_1, '0');
  while (VAR_6-- > 0)
   FUNC_0(VAR_1, *VAR_4++);
 }

 else
 {
  while (VAR_6-- > 0)
  {
   FUNC_0(VAR_1, *VAR_4++);
   if (--VAR_7 == 0 && VAR_6 > 0)
    FUNC_0(VAR_1, '.');
  }
  while (VAR_7-- > 0)
   FUNC_0(VAR_1, '0');
 }
}
