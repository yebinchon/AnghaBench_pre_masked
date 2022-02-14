
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tcp_sack_block {void* end_seq; void* start_seq; } ;


 scalar_t__ FUNC_0 (void*,void*) ;
 scalar_t__ FUNC_1 (void*,void*) ;

__attribute__((used)) static inline bool FUNC_2(struct tcp_sack_block *VAR_0, u32 VAR_1,
      u32 VAR_2)
{
 if (!FUNC_0(VAR_1, VAR_0->end_seq) && !FUNC_0(VAR_0->start_seq, VAR_2)) {
  if (FUNC_1(VAR_1, VAR_0->start_seq))
   VAR_0->start_seq = VAR_1;
  if (FUNC_0(VAR_2, VAR_0->end_seq))
   VAR_0->end_seq = VAR_2;
  return 1;
 }
 return 0;
}
