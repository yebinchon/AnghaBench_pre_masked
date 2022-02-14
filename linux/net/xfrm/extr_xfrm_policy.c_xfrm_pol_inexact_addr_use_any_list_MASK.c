
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfrm_address_t ;
typedef scalar_t__ u8 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int const*,int) ;

__attribute__((used)) static bool FUNC_1(const xfrm_address_t *VAR_4,
            int VAR_5, u8 VAR_6)
{
 if (FUNC_0(VAR_4, VAR_5))
  return 1;

 if (VAR_5 == VAR_1 && VAR_6 < VAR_3)
  return 1;

 if (VAR_5 == VAR_0 && VAR_6 < VAR_2)
  return 1;

 return 0;
}
