
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AllocateDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int *,int) ;

__attribute__((used)) static bool
FUNC_5(void)
{
 AllocateDesc *VAR_7;
 int VAR_8;


 if (VAR_6 < VAR_4)
  return 1;







 if (VAR_3 == ((void*)0))
 {
  VAR_8 = VAR_2 / 2;
  VAR_7 = (AllocateDesc *) FUNC_3(VAR_8 * sizeof(AllocateDesc));

  if (VAR_7 == ((void*)0))
   FUNC_0(VAR_1,
     (FUNC_1(VAR_0),
      FUNC_2("out of memory")));
  VAR_3 = VAR_7;
  VAR_4 = VAR_8;
  return 1;
 }
 VAR_8 = VAR_5 / 2;
 if (VAR_8 > VAR_4)
 {
  VAR_7 = (AllocateDesc *) FUNC_4(VAR_3,
           VAR_8 * sizeof(AllocateDesc));

  if (VAR_7 == ((void*)0))
   return 0;
  VAR_3 = VAR_7;
  VAR_4 = VAR_8;
  return 1;
 }


 return 0;
}
