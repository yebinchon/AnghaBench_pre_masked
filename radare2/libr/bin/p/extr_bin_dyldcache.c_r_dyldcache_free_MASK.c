
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* accel; struct TYPE_4__* maps; struct TYPE_4__* hdr; int * rebase_info; int * buf; int * bins; } ;
typedef TYPE_1__ RDyldCache ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(RDyldCache *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_2 (VAR_0->bins);
 VAR_0->bins = ((void*)0);
 FUNC_1 (VAR_0->buf);
 VAR_0->buf = ((void*)0);
 FUNC_3 (VAR_0->rebase_info);
 VAR_0->rebase_info = ((void*)0);
 FUNC_0 (VAR_0->hdr);
 FUNC_0 (VAR_0->maps);
 FUNC_0 (VAR_0->accel);
 FUNC_0 (VAR_0);
}
