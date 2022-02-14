
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rhashtable_compare_arg {scalar_t__ key; } ;
struct TYPE_4__ {scalar_t__ v64; } ;
struct TYPE_5__ {TYPE_1__ locator_match; } ;
struct TYPE_6__ {TYPE_2__ ip; } ;
struct ila_map {TYPE_3__ xp; } ;
typedef scalar_t__ __be64 ;



__attribute__((used)) static int FUNC_0(struct rhashtable_compare_arg *VAR_0,
       const void *VAR_1)
{
 const struct ila_map *VAR_2 = VAR_1;

 return (VAR_2->xp.ip.locator_match.v64 != *(__be64 *)VAR_0->key);
}
