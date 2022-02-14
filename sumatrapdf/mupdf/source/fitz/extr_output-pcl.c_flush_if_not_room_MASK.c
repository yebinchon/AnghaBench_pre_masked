
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,unsigned char const*,int) ;
 int FUNC_1 (int *,int *,char*,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, fz_output *VAR_1, const unsigned char *VAR_2, int *VAR_3, int VAR_4)
{
 if (VAR_4 + *VAR_3 >= 32767)
 {

  FUNC_1(VAR_0, VAR_1, "\033*b%dW", *VAR_3);
  FUNC_0(VAR_0, VAR_1, VAR_2, *VAR_3);
  *VAR_3 = 0;
 }
}
