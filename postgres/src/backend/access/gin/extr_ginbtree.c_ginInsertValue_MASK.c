
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int buffer; } ;
typedef int GinStatsData ;
typedef TYPE_1__ GinBtreeStack ;
typedef int GinBtree ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int,int *) ;
 int FUNC_5 (int ,TYPE_1__*,void*,int ,int ,int *) ;

void
FUNC_6(GinBtree VAR_3, GinBtreeStack *VAR_4, void *VAR_5,
      GinStatsData *VAR_6)
{
 bool VAR_7;


 if (FUNC_1(FUNC_0(VAR_4->buffer)))
  FUNC_4(VAR_3, VAR_4, 0, VAR_6);

 VAR_7 = FUNC_5(VAR_3, VAR_4,
        VAR_5, VAR_1,
        VAR_2, VAR_6);
 if (VAR_7)
 {
  FUNC_2(VAR_4->buffer, VAR_0);
  FUNC_3(VAR_4);
 }
 else
  FUNC_4(VAR_3, VAR_4, 1, VAR_6);
}
