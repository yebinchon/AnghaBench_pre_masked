
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nPage; } ;
struct TYPE_5__ {scalar_t__ readLock; TYPE_1__ hdr; } ;
typedef TYPE_2__ Wal ;
typedef int Pgno ;


 scalar_t__ FUNC_0 (int) ;

Pgno FUNC_1(Wal *VAR_0){
  if( VAR_0 && FUNC_0(VAR_0->readLock>=0) ){
    return VAR_0->hdr.nPage;
  }
  return 0;
}
