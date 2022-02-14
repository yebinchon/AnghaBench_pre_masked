
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ trnc; } ;
typedef TYPE_1__ gbtree_vinfo ;
typedef int bytea ;
struct TYPE_7__ {int upper; int lower; } ;
typedef TYPE_2__ GBT_VARKEY_R ;


 scalar_t__ FUNC_0 (int ,int const*,TYPE_1__ const*) ;

__attribute__((used)) static bool
FUNC_1(const GBT_VARKEY_R *VAR_0, const bytea *VAR_1, const gbtree_vinfo *VAR_2)
{
 return (VAR_2->trnc && (
       FUNC_0(VAR_0->lower, VAR_1, VAR_2) ||
       FUNC_0(VAR_0->upper, VAR_1, VAR_2)
       ));
}
