
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int16_t ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static inline int
FUNC_4(fz_context *VAR_1, void *VAR_2, int16_t *VAR_3)
{
 if (VAR_2)
 {
  int VAR_4;
  (void)FUNC_0(VAR_3);
  FUNC_2(VAR_1, VAR_0);
  if (*VAR_3 > 0)
  {
   (void)FUNC_1(VAR_2);
   VAR_4 = --*VAR_3 == 0;
  }
  else
   VAR_4 = 0;
  FUNC_3(VAR_1, VAR_0);
  return VAR_4;
 }
 return 0;
}
