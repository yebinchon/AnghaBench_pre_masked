
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int gpending; int gdelta; } ;
typedef TYPE_1__ lfs2_t ;
typedef int lfs2_block_t ;


 int FUNC_0 (int *,int *,int ,int const*) ;

__attribute__((used)) static void FUNC_1(lfs2_t *VAR_0,
        uint16_t VAR_1, const lfs2_block_t VAR_2[2]) {
    FUNC_0(&VAR_0->gdelta, &VAR_0->gpending, VAR_1, VAR_2);
    FUNC_0(&VAR_0->gpending, &VAR_0->gpending, VAR_1, VAR_2);
}
