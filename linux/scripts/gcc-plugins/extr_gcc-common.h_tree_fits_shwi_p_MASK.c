
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const_tree ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static inline bool FUNC_5(const_tree VAR_2)
{
 if (VAR_2 == VAR_1 || FUNC_0(VAR_2) != VAR_0)
  return 0;

 if (FUNC_1(VAR_2) == 0 && (HOST_WIDE_INT)FUNC_2(VAR_2) >= 0)
  return 1;

 if (FUNC_1(VAR_2) == -1 && (HOST_WIDE_INT)FUNC_2(VAR_2) < 0 && !FUNC_4(FUNC_3(VAR_2)))
  return 1;

 return 0;
}
