
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct dl_bw {int total_bw; } ;
typedef int s32 ;


 int FUNC_0 (struct dl_bw*,int) ;

__attribute__((used)) static inline
void FUNC_1(struct dl_bw *VAR_0, u64 VAR_1, int VAR_2)
{
 VAR_0->total_bw += VAR_1;
 FUNC_0(VAR_0, -((s32)VAR_1 / VAR_2));
}
