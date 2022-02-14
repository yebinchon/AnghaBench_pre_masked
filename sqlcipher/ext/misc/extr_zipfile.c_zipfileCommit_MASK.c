
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u32 ;
typedef void* u16 ;
typedef int sqlite3_vtab ;
typedef scalar_t__ i64 ;
struct TYPE_9__ {scalar_t__ szCurrent; int aBuffer; TYPE_2__* pFirstEntry; scalar_t__ pWriteFd; } ;
typedef TYPE_1__ ZipfileTab ;
struct TYPE_10__ {struct TYPE_10__* pNext; } ;
typedef TYPE_2__ ZipfileEntry ;
struct TYPE_11__ {void* iOffset; void* nSize; void* nEntryTotal; void* nEntry; scalar_t__ iFirstDisk; scalar_t__ iDisk; } ;
typedef TYPE_3__ ZipfileEOCD ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab *VAR_1){
  ZipfileTab *VAR_2 = (ZipfileTab*)VAR_1;
  int VAR_3 = VAR_0;
  if( VAR_2->pWriteFd ){
    i64 VAR_4 = VAR_2->szCurrent;
    ZipfileEntry *VAR_5;
    ZipfileEOCD VAR_6;
    int VAR_7 = 0;


    for(VAR_5=VAR_2->pFirstEntry; VAR_3==VAR_0 && VAR_5; VAR_5=VAR_5->pNext){
      int VAR_8 = FUNC_3(VAR_5, VAR_2->aBuffer);
      VAR_3 = FUNC_0(VAR_2, VAR_2->aBuffer, VAR_8);
      VAR_7++;
    }


    VAR_6.iDisk = 0;
    VAR_6.iFirstDisk = 0;
    VAR_6.nEntry = (u16)VAR_7;
    VAR_6.nEntryTotal = (u16)VAR_7;
    VAR_6.nSize = (u32)(VAR_2->szCurrent - VAR_4);
    VAR_6.iOffset = (u32)VAR_4;
    VAR_3 = FUNC_1(VAR_2, &VAR_6);

    FUNC_2(VAR_2);
  }
  return VAR_3;
}
