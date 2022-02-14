
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Rune ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 Rune VAR_3, VAR_4;
 int VAR_5;
 while (VAR_2--) {
  if (!*VAR_0) return -1;
  if (!*VAR_1) return 1;
  VAR_0 += FUNC_1(&VAR_3, VAR_0);
  VAR_1 += FUNC_1(&VAR_4, VAR_1);
  VAR_5 = FUNC_0(VAR_3) - FUNC_0(VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
