
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keyClass; int copyKey; int xFree; int xMalloc; scalar_t__ ht; scalar_t__ htsize; scalar_t__ count; scalar_t__ first; } ;
typedef TYPE_1__ fts1Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(fts1Hash *VAR_4, int VAR_5, int VAR_6){
  FUNC_0( VAR_4!=0 );
  FUNC_0( VAR_5>=VAR_1 && VAR_5<=VAR_0 );
  VAR_4->keyClass = VAR_5;
  VAR_4->copyKey = VAR_6;
  VAR_4->first = 0;
  VAR_4->count = 0;
  VAR_4->htsize = 0;
  VAR_4->ht = 0;
  VAR_4->xMalloc = VAR_3;
  VAR_4->xFree = VAR_2;
}
