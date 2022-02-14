
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Snapshot ;
typedef int Relation ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline bool
FUNC_4(Relation VAR_2, Snapshot VAR_3)
{

 if (VAR_1 == VAR_0)
  return 0;
 if (!FUNC_0(VAR_3))
  return 0;
 if (FUNC_3(VAR_1))
 {
  FUNC_2(0, 1);
  return 0;
 }


 if (!FUNC_1(VAR_2))
  return 0;

 return 1;
}
