
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ i64 ;
struct TYPE_12__ {scalar_t__ nField; } ;
typedef TYPE_1__ UnpackedRecord ;
struct TYPE_14__ {TYPE_2__* pKeyInfo; } ;
struct TYPE_13__ {scalar_t__ nAllField; int db; } ;
typedef TYPE_2__ KeyInfo ;
typedef TYPE_3__ BtCursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_1__*,scalar_t__,int,int*) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int,void const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(
  BtCursor *VAR_2,
  const void *VAR_3,
  i64 VAR_4,
  int VAR_5,
  int *VAR_6
){
  int VAR_7;
  UnpackedRecord *VAR_8;

  if( VAR_3 ){
    KeyInfo *VAR_9 = VAR_2->pKeyInfo;
    FUNC_0( VAR_4==(i64)(int)VAR_4 );
    VAR_8 = FUNC_3(VAR_9);
    if( VAR_8==0 ) return VAR_1;
    FUNC_4(VAR_9, (int)VAR_4, VAR_3, VAR_8);
    if( VAR_8->nField==0 || VAR_8->nField>VAR_9->nAllField ){
      VAR_7 = VAR_0;
      goto moveto_done;
    }
  }else{
    VAR_8 = 0;
  }
  VAR_7 = FUNC_1(VAR_2, VAR_8, VAR_4, VAR_5, VAR_6);
moveto_done:
  if( VAR_8 ){
    FUNC_2(VAR_2->pKeyInfo->db, VAR_8);
  }
  return VAR_7;
}
