
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int keyClass; int copyKey; scalar_t__ ht; scalar_t__ htsize; scalar_t__ count; scalar_t__ first; } ;
typedef TYPE_1__ fts2Hash ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

void FUNC_1(fts2Hash *VAR_2, int VAR_3, int VAR_4){
  FUNC_0( VAR_2!=0 );
  FUNC_0( VAR_3>=VAR_1 && VAR_3<=VAR_0 );
  VAR_2->keyClass = VAR_3;
  VAR_2->copyKey = VAR_4;
  VAR_2->first = 0;
  VAR_2->count = 0;
  VAR_2->htsize = 0;
  VAR_2->ht = 0;
}
