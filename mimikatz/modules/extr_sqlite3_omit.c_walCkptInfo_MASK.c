
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WalIndexHdr ;
typedef int WalCkptInfo ;
struct TYPE_3__ {scalar_t__ nWiData; int ** apWiData; } ;
typedef TYPE_1__ Wal ;


 int FUNC_0 (int ) ;

__attribute__((used)) static volatile WalCkptInfo *FUNC_1(Wal *VAR_0){
  FUNC_0( VAR_0->nWiData>0 && VAR_0->apWiData[0] );
  return (volatile WalCkptInfo*)&(VAR_0->apWiData[0][sizeof(WalIndexHdr)/2]);
}
