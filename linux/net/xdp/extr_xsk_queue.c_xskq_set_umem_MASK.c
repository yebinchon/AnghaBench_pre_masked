
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct xsk_queue {void* chunk_mask; void* size; } ;



void FUNC_0(struct xsk_queue *VAR_0, u64 VAR_1, u64 VAR_2)
{
 if (!VAR_0)
  return;

 VAR_0->size = VAR_1;
 VAR_0->chunk_mask = VAR_2;
}
