
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ db; char* zSql; char* zNormSql; int * aCounter; int prepFlags; int expmask; struct TYPE_4__* pPrev; struct TYPE_4__* pNext; } ;
typedef TYPE_1__ Vdbe ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2(Vdbe *VAR_1, Vdbe *VAR_2){
  Vdbe VAR_3, *VAR_4;
  char *VAR_5;
  FUNC_0( VAR_1->db==VAR_2->db );
  VAR_3 = *VAR_1;
  *VAR_1 = *VAR_2;
  *VAR_2 = VAR_3;
  VAR_4 = VAR_1->pNext;
  VAR_1->pNext = VAR_2->pNext;
  VAR_2->pNext = VAR_4;
  VAR_4 = VAR_1->pPrev;
  VAR_1->pPrev = VAR_2->pPrev;
  VAR_2->pPrev = VAR_4;
  VAR_5 = VAR_1->zSql;
  VAR_1->zSql = VAR_2->zSql;
  VAR_2->zSql = VAR_5;





  VAR_2->expmask = VAR_1->expmask;
  VAR_2->prepFlags = VAR_1->prepFlags;
  FUNC_1(VAR_2->aCounter, VAR_1->aCounter, sizeof(VAR_2->aCounter));
  VAR_2->aCounter[VAR_0]++;
}
