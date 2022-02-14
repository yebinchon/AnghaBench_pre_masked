
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ pos; } ;
struct TYPE_7__ {scalar_t__ pos; } ;
struct TYPE_6__ {scalar_t__ pos; } ;
struct TYPE_9__ {int seed; TYPE_3__ roundTrip; TYPE_2__ compressed; TYPE_1__ data; int dstream; int level; int cstreamHC; int cstream; } ;
typedef TYPE_4__ state_t ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_4(state_t* VAR_2, uint32_t VAR_3)
{
    VAR_2->level = FUNC_0(&VAR_3, VAR_1, VAR_0);
    FUNC_2(VAR_2->cstream);
    FUNC_1(VAR_2->cstreamHC, VAR_2->level);
    FUNC_3(VAR_2->dstream, ((void*)0), 0);
    VAR_2->data.pos = 0;
    VAR_2->compressed.pos = 0;
    VAR_2->roundTrip.pos = 0;
    VAR_2->seed = VAR_3;
}
