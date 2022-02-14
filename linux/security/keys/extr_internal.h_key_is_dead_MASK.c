
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time64_t ;
struct key {int flags; scalar_t__ expiry; TYPE_1__* domain_tag; } ;
struct TYPE_2__ {scalar_t__ removed; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline bool FUNC_0(const struct key *VAR_2, time64_t VAR_3)
{
 return
  VAR_2->flags & ((1 << VAR_0) |
         (1 << VAR_1)) ||
  (VAR_2->expiry > 0 && VAR_2->expiry <= VAR_3) ||
  VAR_2->domain_tag->removed;
}
