
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rd_id; TYPE_1__* rd_rel; } ;
struct TYPE_5__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static inline bool
FUNC_1(Relation VAR_2)
{
 return !(VAR_2->rd_id < VAR_0 ||
    FUNC_0(VAR_2) ||
    VAR_2->rd_rel->relkind == VAR_1);
}
