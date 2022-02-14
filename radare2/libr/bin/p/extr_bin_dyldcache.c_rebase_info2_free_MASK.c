
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* page_extras; struct TYPE_4__* page_starts; } ;
typedef TYPE_1__ RDyldRebaseInfo2 ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(RDyldRebaseInfo2 *VAR_0) {
 if (!VAR_0) {
  return;
 }

 FUNC_0 (VAR_0->page_starts);
 FUNC_0 (VAR_0->page_extras);
 FUNC_0 (VAR_0);
}
