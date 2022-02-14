
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, fz_stream *VAR_2)
{
 int VAR_3;
 do {
  VAR_3 = FUNC_2(VAR_1, VAR_2);
 } while ((VAR_3 <= 32) && (FUNC_1(VAR_3)));
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_1, VAR_2);
}
