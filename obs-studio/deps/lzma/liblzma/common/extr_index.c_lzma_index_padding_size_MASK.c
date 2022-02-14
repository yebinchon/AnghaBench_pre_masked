
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int index_list_size; int record_count; } ;
typedef TYPE_1__ lzma_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;

extern uint32_t
FUNC_2(const lzma_index *VAR_0)
{
 return (FUNC_0(4) - FUNC_1(
   VAR_0->record_count, VAR_0->index_list_size)) & 3;
}
