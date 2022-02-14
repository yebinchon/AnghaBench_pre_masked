
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ startup_blockio_weight; scalar_t__ blockio_weight; } ;
typedef int ManagerState ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint64_t FUNC_1(CGroupContext *VAR_4, ManagerState VAR_5) {
        if (FUNC_0(VAR_5, VAR_3, VAR_2) &&
            VAR_4->startup_blockio_weight != VAR_1)
                return VAR_4->startup_blockio_weight;
        else if (VAR_4->blockio_weight != VAR_1)
                return VAR_4->blockio_weight;
        else
                return VAR_0;
}
