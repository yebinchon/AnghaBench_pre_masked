
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ max_size; scalar_t__ size; int queue; } ;
typedef TYPE_1__ HistoQueue ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(HistoQueue* const VAR_0) {
  FUNC_1(VAR_0 != ((void*)0));
  FUNC_0(VAR_0->queue);
  VAR_0->size = 0;
  VAR_0->max_size = 0;
}
