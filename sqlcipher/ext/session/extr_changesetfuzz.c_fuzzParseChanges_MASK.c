
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_6__ {scalar_t__ bPatchset; int nGroup; int nChange; int nUpdate; TYPE_1__** apGroup; } ;
struct TYPE_5__ {scalar_t__* aChange; int szChange; int nChange; } ;
typedef TYPE_1__ FuzzChangesetGroup ;
typedef TYPE_2__ FuzzChangeset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__**,scalar_t__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_2(u8 **VAR_4, u8 *VAR_5, FuzzChangeset *VAR_6){
  u8 VAR_7 = (VAR_6->bPatchset ? 'P' : 'T');
  FuzzChangesetGroup *VAR_8 = VAR_6->apGroup[VAR_6->nGroup-1];
  int VAR_9 = VAR_2;
  u8 *VAR_10 = *VAR_4;

  VAR_8->aChange = VAR_10;
  while( VAR_9==VAR_2 && VAR_10<VAR_5 && VAR_10[0]!=VAR_7 ){
    u8 VAR_11 = VAR_10[0];
    u8 VAR_12 = VAR_10[1];

    VAR_10 += 2;
    if( VAR_11==VAR_3 ){
      VAR_6->nUpdate++;
      if( VAR_6->bPatchset==0 ){
        VAR_9 = FUNC_1(&VAR_10, VAR_5, VAR_6, 0);
      }
    }else if( VAR_11!=VAR_1 && VAR_11!=VAR_0 ){
      VAR_9 = FUNC_0();
    }
    if( VAR_9==VAR_2 ){
      int VAR_13 = (VAR_11==VAR_0 && VAR_6->bPatchset);
      VAR_9 = FUNC_1(&VAR_10, VAR_5, VAR_6, VAR_13);
    }
    VAR_8->nChange++;
    VAR_6->nChange++;
  }
  VAR_8->szChange = VAR_10 - VAR_8->aChange;

  *VAR_4 = VAR_10;
  return VAR_9;
}
