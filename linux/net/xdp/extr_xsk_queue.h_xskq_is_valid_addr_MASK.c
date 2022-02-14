
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct xsk_queue {scalar_t__ size; int invalid_descs; } ;



__attribute__((used)) static inline bool FUNC_0(struct xsk_queue *VAR_0, u64 VAR_1)
{
 if (VAR_1 >= VAR_0->size) {
  VAR_0->invalid_descs++;
  return 0;
 }

 return 1;
}
