
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_3__ {int size; int * data; } ;
typedef TYPE_1__ DATABLOB ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,void*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

void
FUNC_3(uint8 VAR_1, void *VAR_2, int VAR_3)
{
 DATABLOB *VAR_4;

 VAR_4 = &VAR_0[VAR_1];
 if (VAR_4->data != ((void*)0))
  FUNC_1(VAR_4->data);
 VAR_4->data = FUNC_2(VAR_3);
 VAR_4->size = VAR_3;
 FUNC_0(VAR_4->data, VAR_2, VAR_3);
}
