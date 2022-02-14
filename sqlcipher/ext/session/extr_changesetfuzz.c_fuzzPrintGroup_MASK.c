
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_7__ {scalar_t__ bPatchset; } ;
struct TYPE_6__ {char* zTab; int nCol; int nChange; scalar_t__* aChange; scalar_t__* aPK; } ;
typedef TYPE_1__ FuzzChangesetGroup ;
typedef TYPE_2__ FuzzChangeset ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__**,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(FuzzChangeset *VAR_3, FuzzChangesetGroup *VAR_4){
  int VAR_5;
  u8 *VAR_6;


  FUNC_1("TABLE:  %s nCol=%d aPK=", VAR_4->zTab, VAR_4->nCol);
  for(VAR_5=0; VAR_5<VAR_4->nCol; VAR_5++){
    FUNC_1("%d", (int)VAR_4->aPK[VAR_5]);
  }
  FUNC_1("\n");


  VAR_6 = VAR_4->aChange;
  for(VAR_5=0; VAR_5<VAR_4->nChange; VAR_5++){
    u8 VAR_7 = VAR_6[0];
    u8 VAR_8 = VAR_6[1];
    FUNC_1("%s (ind=%d):",
        (VAR_7==VAR_1) ? "INSERT" :
        (VAR_7==VAR_0 ? "DELETE" : "UPDATE"),
        VAR_8
    );
    VAR_6 += 2;

    if( VAR_3->bPatchset==0 && VAR_7==VAR_2 ){
      FUNC_0(VAR_4, &VAR_6, 0);
    }
    FUNC_0(VAR_4, &VAR_6, VAR_7==VAR_0 && VAR_3->bPatchset);
    FUNC_1("\n");
  }
}
