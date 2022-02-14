
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int il_info; int il_ind; int il_heap; struct TYPE_2__* il_next; } ;
typedef int Relation ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(void)
{
 for (; VAR_0 != ((void*)0); VAR_0 = VAR_0->il_next)
 {
  Relation VAR_2;
  Relation VAR_3;


  VAR_2 = FUNC_4(VAR_0->il_heap, VAR_1);
  VAR_3 = FUNC_2(VAR_0->il_ind, VAR_1);

  FUNC_0(VAR_2, VAR_3, VAR_0->il_info, 0, 0);

  FUNC_1(VAR_3, VAR_1);
  FUNC_3(VAR_2, VAR_1);
 }
}
