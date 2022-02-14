
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_font ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int*,char const*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static float
FUNC_4(fz_context *VAR_1, fz_font *VAR_2, const char *VAR_3)
{
 float VAR_4 = 0;
 while (*VAR_3)
 {
  int VAR_5, VAR_6;
  VAR_3 += FUNC_1(&VAR_5, VAR_3);
  VAR_5 = FUNC_3(VAR_5);
  if (VAR_5 < 0) VAR_5 = VAR_0;
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_5);
  VAR_4 += FUNC_0(VAR_1, VAR_2, VAR_6, 0);
 }
 return VAR_4;
}
