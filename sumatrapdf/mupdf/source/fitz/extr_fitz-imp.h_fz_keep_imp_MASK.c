
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static inline void *
FUNC_4(fz_context *VAR_1, void *VAR_2, int *VAR_3)
{
 if (VAR_2)
 {
  (void)FUNC_0(VAR_3);
  FUNC_2(VAR_1, VAR_0);
  if (*VAR_3 > 0)
  {
   (void)FUNC_1(VAR_2);
   ++*VAR_3;
  }
  FUNC_3(VAR_1, VAR_0);
 }
 return VAR_2;
}
