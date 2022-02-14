
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct TYPE_9__ {scalar_t__ nField; scalar_t__ default_rc; TYPE_2__* aMem; } ;
typedef TYPE_1__ UnpackedRecord ;
struct TYPE_11__ {scalar_t__ nKeyField; int db; int enc; } ;
struct TYPE_10__ {scalar_t__ z; scalar_t__ szMalloc; int db; int enc; } ;
typedef TYPE_2__ Mem ;
typedef TYPE_3__ KeyInfo ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 (unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (unsigned char const*,size_t,TYPE_2__*) ;

void FUNC_5(
  KeyInfo *VAR_1,
  int VAR_2,
  const void *VAR_3,
  UnpackedRecord *VAR_4
){
  const unsigned char *VAR_5 = (const unsigned char *)VAR_3;
  u32 VAR_6;
  u32 VAR_7;
  u16 VAR_8;
  u32 VAR_9;
  Mem *VAR_10 = VAR_4->aMem;

  VAR_4->default_rc = 0;
  FUNC_1( FUNC_0(VAR_10) );
  VAR_7 = FUNC_2(VAR_5, VAR_9);
  VAR_6 = VAR_9;
  VAR_8 = 0;
  while( VAR_7<VAR_9 && VAR_6<=(u32)VAR_2 ){
    u32 VAR_11;

    VAR_7 += FUNC_2(&VAR_5[VAR_7], VAR_11);
    VAR_10->enc = VAR_1->enc;
    VAR_10->db = VAR_1->db;

    VAR_10->szMalloc = 0;
    VAR_10->z = 0;
    VAR_6 += FUNC_4(&VAR_5[VAR_6], VAR_11, VAR_10);
    VAR_10++;
    if( (++VAR_8)>=VAR_4->nField ) break;
  }
  if( VAR_6>(u32)VAR_2 && VAR_8 ){
    FUNC_1( VAR_0 );



    FUNC_3(VAR_10-1);
  }
  FUNC_1( VAR_8<=VAR_1->nKeyField + 1 );
  VAR_4->nField = VAR_8;
}
