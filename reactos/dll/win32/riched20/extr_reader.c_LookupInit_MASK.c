
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int count; TYPE_1__** value; } ;
struct TYPE_9__ {int rtfKHash; int * rtfKStr; } ;
typedef TYPE_1__ RTFKey ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 TYPE_1__** FUNC_2 (int) ;
 TYPE_1__** FUNC_3 (TYPE_1__**,int) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;
 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_5(void)
{
 RTFKey *VAR_2;

 FUNC_4(VAR_0, 0, sizeof VAR_0);
 for (VAR_2 = VAR_1; VAR_2->rtfKStr != ((void*)0); VAR_2++)
 {
  int VAR_3;

  VAR_2->rtfKHash = FUNC_1 (VAR_2->rtfKStr);
  VAR_3 = VAR_2->rtfKHash % (FUNC_0(VAR_1) * 2);
  if (!VAR_0[VAR_3].count)
   VAR_0[VAR_3].value = FUNC_2(sizeof(RTFKey *));
  else
   VAR_0[VAR_3].value = FUNC_3(VAR_0[VAR_3].value, sizeof(RTFKey *) * (VAR_0[VAR_3].count + 1));
  VAR_0[VAR_3].value[VAR_0[VAR_3].count++] = VAR_2;
 }
}
