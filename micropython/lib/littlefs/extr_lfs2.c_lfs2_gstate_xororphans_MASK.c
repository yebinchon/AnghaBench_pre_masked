
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lfs2_gstate {int tag; } ;


 int FUNC_0 (int,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct lfs2_gstate *VAR_0,
        const struct lfs2_gstate *VAR_1, bool VAR_2) {
    VAR_0->tag ^= FUNC_0(0x800, 0, 0) & (VAR_1->tag ^ ((uint32_t)VAR_2 << 31));
}
