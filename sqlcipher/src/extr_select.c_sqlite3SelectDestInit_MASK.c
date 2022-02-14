
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {int iSDParm; scalar_t__ nSdst; scalar_t__ iSdst; scalar_t__ zAffSdst; scalar_t__ eDest; } ;
typedef TYPE_1__ SelectDest ;



void FUNC_0(SelectDest *VAR_0, int VAR_1, int VAR_2){
  VAR_0->eDest = (u8)VAR_1;
  VAR_0->iSDParm = VAR_2;
  VAR_0->zAffSdst = 0;
  VAR_0->iSdst = 0;
  VAR_0->nSdst = 0;
}
