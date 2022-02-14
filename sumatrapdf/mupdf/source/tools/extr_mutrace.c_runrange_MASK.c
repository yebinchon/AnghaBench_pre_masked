
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;
typedef int fz_context ;


 char* FUNC_0 (int *,char const*,int*,int*,int) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, fz_document *VAR_1, int VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 while ((VAR_3 = FUNC_0(VAR_0, VAR_3, &VAR_4, &VAR_5, VAR_2)))
 {
  if (VAR_4 < VAR_5)
   for (VAR_6 = VAR_4; VAR_6 <= VAR_5; ++VAR_6)
    FUNC_1(VAR_0, VAR_1, VAR_6);
  else
   for (VAR_6 = VAR_4; VAR_6 >= VAR_5; --VAR_6)
    FUNC_1(VAR_0, VAR_1, VAR_6);
 }
}
