
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lfs2_gstate {void** pair; void* tag; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(struct lfs2_gstate *VAR_0) {
    VAR_0->tag = FUNC_0(VAR_0->tag);
    VAR_0->pair[0] = FUNC_0(VAR_0->pair[0]);
    VAR_0->pair[1] = FUNC_0(VAR_0->pair[1]);
}
