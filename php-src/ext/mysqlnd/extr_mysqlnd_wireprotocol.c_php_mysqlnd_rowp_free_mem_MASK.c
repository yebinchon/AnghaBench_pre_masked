
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int (* free_chunk ) (TYPE_3__*,int *) ;} ;
struct TYPE_4__ {int * ptr; } ;
struct TYPE_5__ {TYPE_1__ row_buffer; TYPE_3__* result_set_memory_pool; } ;
typedef TYPE_2__ MYSQLND_PACKET_ROW ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int *) ;

__attribute__((used)) static void
FUNC_2(void * VAR_1)
{
 MYSQLND_PACKET_ROW *VAR_2;

 FUNC_0("php_mysqlnd_rowp_free_mem");
 VAR_2 = (MYSQLND_PACKET_ROW *) VAR_1;
 if (VAR_2->row_buffer.ptr) {
  VAR_2->result_set_memory_pool->free_chunk(VAR_2->result_set_memory_pool, VAR_2->row_buffer.ptr);
  VAR_2->row_buffer.ptr = ((void*)0);
 }







 VAR_0;
}
