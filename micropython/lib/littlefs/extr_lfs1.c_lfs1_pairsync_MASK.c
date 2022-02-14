
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ lfs1_block_t ;



__attribute__((used)) static inline bool FUNC_0(
        const lfs1_block_t VAR_0[2],
        const lfs1_block_t VAR_1[2]) {
    return (VAR_0[0] == VAR_1[0] && VAR_0[1] == VAR_1[1]) ||
           (VAR_0[0] == VAR_1[1] && VAR_0[1] == VAR_1[0]);
}
