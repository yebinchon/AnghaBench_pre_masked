
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keyClass; int copyKey; int xFree; int xMalloc; scalar_t__ ht; scalar_t__ htsize; scalar_t__ count; scalar_t__ first; } ;
typedef TYPE_1__ Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1(Hash *VAR_6, int VAR_7, int VAR_8){
  FUNC_0( VAR_6!=0 );
  FUNC_0( VAR_7>=VAR_3 && VAR_7<=VAR_0 );
  VAR_6->keyClass = VAR_7;



  VAR_6->copyKey = VAR_8;
  VAR_6->first = 0;
  VAR_6->count = 0;
  VAR_6->htsize = 0;
  VAR_6->ht = 0;
  VAR_6->xMalloc = VAR_5;
  VAR_6->xFree = VAR_4;
}
