
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time64_t ;
struct key {int expiry; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;

int FUNC_2(const struct key *VAR_6)
{
 unsigned long VAR_7 = FUNC_0(VAR_6->flags);
 time64_t VAR_8 = FUNC_0(VAR_6->expiry);

 if (VAR_7 & (1 << VAR_4))
  return -VAR_2;


 if (VAR_7 & ((1 << VAR_5) |
       (1 << VAR_3)))
  return -VAR_1;


 if (VAR_8) {
  if (FUNC_1() >= VAR_8)
   return -VAR_0;
 }

 return 0;
}
