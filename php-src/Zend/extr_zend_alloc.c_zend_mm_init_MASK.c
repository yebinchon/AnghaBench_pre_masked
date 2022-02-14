
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int chunks_count; int peak_chunks_count; double avg_chunks_count; size_t limit; int * huge_list; int * storage; int use_custom_heap; scalar_t__ overflow; scalar_t__ peak; scalar_t__ size; void* real_peak; void* real_size; scalar_t__ last_chunks_delete_count; scalar_t__ last_chunks_delete_boundary; scalar_t__ cached_chunks_count; int * cached_chunks; TYPE_2__* main_chunk; } ;
typedef TYPE_1__ zend_mm_heap ;
struct TYPE_5__ {int free_tail; int* free_map; int * map; scalar_t__ num; scalar_t__ free_pages; struct TYPE_5__* prev; struct TYPE_5__* next; TYPE_1__* heap; TYPE_1__ heap_slot; } ;
typedef TYPE_2__ zend_mm_chunk ;


 scalar_t__ FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int,char*) ;
 int VAR_5 ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (void*,void*) ;

__attribute__((used)) static zend_mm_heap *FUNC_7(void)
{
 zend_mm_chunk *VAR_6 = (zend_mm_chunk*)FUNC_6(VAR_0, VAR_0);
 zend_mm_heap *VAR_7;

 if (FUNC_0(VAR_6 == ((void*)0))) {







  return ((void*)0);
 }
 VAR_7 = &VAR_6->heap_slot;
 VAR_6->heap = VAR_7;
 VAR_6->next = VAR_6;
 VAR_6->prev = VAR_6;
 VAR_6->free_pages = VAR_3 - VAR_2;
 VAR_6->free_tail = VAR_2;
 VAR_6->num = 0;
 VAR_6->free_map[0] = (FUNC_2(1) << VAR_2) - 1;
 VAR_6->map[0] = FUNC_1(VAR_2);
 VAR_7->main_chunk = VAR_6;
 VAR_7->cached_chunks = ((void*)0);
 VAR_7->chunks_count = 1;
 VAR_7->peak_chunks_count = 1;
 VAR_7->cached_chunks_count = 0;
 VAR_7->avg_chunks_count = 1.0;
 VAR_7->last_chunks_delete_boundary = 0;
 VAR_7->last_chunks_delete_count = 0;
 VAR_7->huge_list = ((void*)0);
 return VAR_7;
}
