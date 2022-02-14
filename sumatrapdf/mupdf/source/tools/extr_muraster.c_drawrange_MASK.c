
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (int *,char const*,int*,int*,int) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, fz_document *VAR_1, const char *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1);

 while ((VAR_2 = FUNC_2(VAR_0, VAR_2, &VAR_4, &VAR_5, VAR_6)))
 {
  if (VAR_4 < VAR_5)
   for (VAR_3 = VAR_4; VAR_3 <= VAR_5; VAR_3++)
    FUNC_0(VAR_0, VAR_1, VAR_3);
  else
   for (VAR_3 = VAR_4; VAR_3 >= VAR_5; VAR_3--)
    FUNC_0(VAR_0, VAR_1, VAR_3);
 }
}
