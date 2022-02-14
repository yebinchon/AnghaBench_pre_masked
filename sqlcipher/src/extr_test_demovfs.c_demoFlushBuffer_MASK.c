
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nBuffer; int iBufferOfst; int aBuffer; } ;
typedef TYPE_1__ DemoFile ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(DemoFile *VAR_1){
  int VAR_2 = VAR_0;
  if( VAR_1->nBuffer ){
    VAR_2 = FUNC_0(VAR_1, VAR_1->aBuffer, VAR_1->nBuffer, VAR_1->iBufferOfst);
    VAR_1->nBuffer = 0;
  }
  return VAR_2;
}
