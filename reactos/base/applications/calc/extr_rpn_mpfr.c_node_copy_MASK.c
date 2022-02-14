
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mf; } ;
struct TYPE_6__ {int operation; TYPE_1__ number; } ;
typedef TYPE_2__ calc_node_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(calc_node_t *VAR_1, calc_node_t *VAR_2)
{
    FUNC_0(VAR_1->number.mf, VAR_2->number.mf, VAR_0);
    VAR_1->operation = VAR_2->operation;
}
