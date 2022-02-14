
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dl_bw {int bw; int total_bw; } ;



__attribute__((used)) static inline
bool FUNC_0(struct dl_bw *VAR_0, int VAR_1, u64 VAR_2, u64 VAR_3)
{
 return VAR_0->bw != -1 &&
        VAR_0->bw * VAR_1 < VAR_0->total_bw - VAR_2 + VAR_3;
}
