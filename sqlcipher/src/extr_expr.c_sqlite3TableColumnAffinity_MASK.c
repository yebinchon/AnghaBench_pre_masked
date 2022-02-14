
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nCol; TYPE_1__* aCol; } ;
typedef TYPE_2__ Table ;
struct TYPE_4__ {char affinity; } ;


 char VAR_0 ;
 int FUNC_0 (int) ;

char FUNC_1(Table *VAR_1, int VAR_2){
  FUNC_0( VAR_2<VAR_1->nCol );
  return VAR_2>=0 ? VAR_1->aCol[VAR_2].affinity : VAR_0;
}
