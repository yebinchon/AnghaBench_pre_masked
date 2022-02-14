
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(fz_context *VAR_1, fz_stream *VAR_2, const char *VAR_3)
{
 while (*VAR_3)
 {
  int VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4 == VAR_0 || VAR_4 != *VAR_3++)
   return 1;
  (void)FUNC_1(VAR_1, VAR_2);
 }
 return 0;
}
