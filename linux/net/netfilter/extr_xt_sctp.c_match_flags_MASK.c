
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;
struct xt_sctp_flag_info {scalar_t__ chunktype; scalar_t__ flag_mask; scalar_t__ flag; } ;



__attribute__((used)) static bool
FUNC_0(const struct xt_sctp_flag_info *VAR_0,
     const int VAR_1,
     u_int8_t VAR_2,
     u_int8_t VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  if (VAR_0[VAR_4].chunktype == VAR_2)
   return (VAR_3 & VAR_0[VAR_4].flag_mask) == VAR_0[VAR_4].flag;

 return 1;
}
