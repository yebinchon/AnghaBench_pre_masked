
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int iAge; struct TYPE_3__* pNext; } ;
typedef TYPE_1__ Level ;



__attribute__((used)) static int FUNC_0(Level *VAR_0){
  int VAR_1 = VAR_0->iAge;
  int VAR_2 = 0;
  do {
    VAR_2++;
    VAR_0 = VAR_0->pNext;
  }while( VAR_0 && VAR_0->iAge==VAR_1 );
  return VAR_2;
}
