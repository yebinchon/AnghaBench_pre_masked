
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfs2_gstate {int pair; int tag; } ;
typedef int lfs2_block_t ;


 scalar_t__ FUNC_0 (int ,int const*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct lfs2_gstate *VAR_0,
        const lfs2_block_t *VAR_1) {
    return FUNC_1(VAR_0->tag) && FUNC_0(VAR_0->pair, VAR_1) == 0;
}
