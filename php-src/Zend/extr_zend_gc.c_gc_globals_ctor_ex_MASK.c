
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gc_protected; scalar_t__ zval_marked_grey; scalar_t__ zval_remove_from_buffer; scalar_t__ zval_buffered; scalar_t__ zval_possible_root; scalar_t__ root_buf_peak; scalar_t__ root_buf_length; scalar_t__ collected; scalar_t__ gc_runs; scalar_t__ num_roots; void* buf_size; void* gc_threshold; void* first_unused; void* unused; int * buf; scalar_t__ gc_full; scalar_t__ gc_active; scalar_t__ gc_enabled; } ;
typedef TYPE_1__ zend_gc_globals ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(zend_gc_globals *VAR_1)
{
 VAR_1->gc_enabled = 0;
 VAR_1->gc_active = 0;
 VAR_1->gc_protected = 1;
 VAR_1->gc_full = 0;

 VAR_1->buf = ((void*)0);
 VAR_1->unused = VAR_0;
 VAR_1->first_unused = VAR_0;
 VAR_1->gc_threshold = VAR_0;
 VAR_1->buf_size = VAR_0;
 VAR_1->num_roots = 0;

 VAR_1->gc_runs = 0;
 VAR_1->collected = 0;
}
