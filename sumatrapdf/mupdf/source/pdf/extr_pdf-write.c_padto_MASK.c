
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,char) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, fz_output *VAR_1, int64_t VAR_2)
{
 int64_t VAR_3 = FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_3 <= VAR_2);
 while (VAR_3 < VAR_2)
 {
  FUNC_2(VAR_0, VAR_1, '\n');
  VAR_3++;
 }
}
