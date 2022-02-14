
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_9__ {int aCollSeq; scalar_t__ activeVdbeCnt; int mutex; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_10__ {int (* xCmp ) (void*,int,void const*,int,void const*) ;int enc; void (* xDel ) (void*) ;void* pUser; } ;
typedef TYPE_2__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int,char const*,int) ;
 TYPE_2__* FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 void FUNC_7 (void*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(
  sqlite3* VAR_9,
  const char *VAR_10,
  u8 VAR_11,
  void* VAR_12,
  int(*VAR_13)(void*,int,const void*,int,const void*),
  void(*VAR_14)(void*)
){
  CollSeq *VAR_15;
  int VAR_16;
  int VAR_17 = FUNC_5(VAR_10);

  FUNC_0( FUNC_6(VAR_9->mutex) );





  VAR_16 = VAR_11;
  FUNC_8( VAR_16==VAR_4 );
  FUNC_8( VAR_16==VAR_7 );
  if( VAR_16==VAR_4 || VAR_16==VAR_7 ){
    VAR_16 = VAR_6;
  }
  if( VAR_16<VAR_8 || VAR_16>VAR_5 ){
    return VAR_1;
  }





  VAR_15 = FUNC_3(VAR_9, (u8)VAR_16, VAR_10, 0);
  if( VAR_15 && VAR_15->xCmp ){
    if( VAR_9->activeVdbeCnt ){
      FUNC_1(VAR_9, VAR_0,
        "unable to delete/modify collation sequence due to active statements");
      return VAR_0;
    }
    FUNC_2(VAR_9);







    if( (VAR_15->enc & ~VAR_7)==VAR_16 ){
      CollSeq *VAR_18 = FUNC_4(&VAR_9->aCollSeq, VAR_10, VAR_17);
      int VAR_19;
      for(VAR_19=0; VAR_19<3; VAR_19++){
        CollSeq *VAR_20 = &VAR_18[VAR_19];
        if( VAR_20->enc==VAR_15->enc ){
          if( VAR_20->xDel ){
            VAR_20->xDel(VAR_20->pUser);
          }
          VAR_20->xCmp = 0;
        }
      }
    }
  }

  VAR_15 = FUNC_3(VAR_9, (u8)VAR_16, VAR_10, 1);
  if( VAR_15==0 ) return VAR_2;
  VAR_15->xCmp = VAR_13;
  VAR_15->pUser = VAR_12;
  VAR_15->xDel = VAR_14;
  VAR_15->enc = (u8)(VAR_16 | (VAR_11 & VAR_7));
  FUNC_1(VAR_9, VAR_3, 0);
  return VAR_3;
}
