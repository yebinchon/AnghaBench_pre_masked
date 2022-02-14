
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ stbds_string_block ;
struct TYPE_7__ {TYPE_1__* storage; } ;
typedef TYPE_2__ stbds_string_arena ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

void FUNC_2(stbds_string_arena *VAR_0)
{
  stbds_string_block *VAR_1,*VAR_2;
  VAR_1 = VAR_0->storage;
  while (VAR_1) {
    VAR_2 = VAR_1->next;
    FUNC_0(((void*)0), VAR_1);
    VAR_1 = VAR_2;
  }
  FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
