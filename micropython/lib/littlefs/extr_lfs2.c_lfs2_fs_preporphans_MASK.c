
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int tag; } ;
struct TYPE_6__ {TYPE_2__ gpending; TYPE_2__ gdelta; } ;
typedef TYPE_1__ lfs2_t ;
typedef scalar_t__ int8_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(lfs2_t *VAR_0, int8_t VAR_1) {
    VAR_0->gpending.tag += VAR_1;
    FUNC_1(&VAR_0->gdelta, &VAR_0->gpending,
            FUNC_0(&VAR_0->gpending));
    FUNC_1(&VAR_0->gpending, &VAR_0->gpending,
            FUNC_0(&VAR_0->gpending));
}
