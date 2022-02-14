
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {int rank; int name; } ;
struct TYPE_7__ {int lock_order; TYPE_1__ witness; } ;
typedef TYPE_2__ malloc_mutex_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;

void
FUNC_4(tsdn_t *VAR_1, malloc_mutex_t *VAR_2) {



 if (FUNC_1(VAR_2, VAR_2->witness.name,
     VAR_2->witness.rank, VAR_2->lock_order)) {
  FUNC_3("<jemalloc>: Error re-initializing mutex in "
      "child\n");
  if (VAR_0) {
   FUNC_0();
  }
 }

}
