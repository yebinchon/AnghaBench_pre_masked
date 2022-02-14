
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int array ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* down; } ;
typedef size_t SORT_ORDER ;
typedef TYPE_1__ Entry ;


 int FUNC_0 () ;
 TYPE_1__** FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__**,int,int,int ) ;
 int * VAR_0 ;

__attribute__((used)) static void FUNC_4(Entry* VAR_1, SORT_ORDER VAR_2)
{
 Entry* VAR_3;
 Entry** VAR_4, **VAR_5;
 int VAR_6;

 VAR_6 = 0;
 for(VAR_3=VAR_1->down; VAR_3; VAR_3=VAR_3->next)
  VAR_6++;

 if (VAR_6) {
  VAR_4 = FUNC_1(FUNC_0(), 0, VAR_6*sizeof(Entry*));

  VAR_5 = VAR_4;
  for(VAR_3=VAR_1->down; VAR_3; VAR_3=VAR_3->next)
   *VAR_5++ = VAR_3;


  FUNC_3(VAR_4, VAR_6, sizeof(VAR_4[0]), VAR_0[VAR_2]);

  VAR_1->down = VAR_4[0];

  for(VAR_5=VAR_4; --VAR_6; VAR_5++)
   VAR_5[0]->next = VAR_5[1];

  (*VAR_5)->next = 0;

                FUNC_2(FUNC_0(), 0, VAR_4);
 }
}
