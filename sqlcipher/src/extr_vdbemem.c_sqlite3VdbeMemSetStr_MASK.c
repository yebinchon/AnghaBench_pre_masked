
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_11__ {int* aLimit; int mutex; } ;
struct TYPE_10__ {char* z; char* zMalloc; void (* xDel ) (void*) ;int n; int flags; scalar_t__ enc; TYPE_8__* db; int szMalloc; } ;
typedef TYPE_1__ Mem ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void FUNC_1 (void*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void FUNC_2 (void*) ;
 int VAR_9 ;
 void FUNC_3 (void*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (TYPE_8__*,char*) ;
 int FUNC_7 (TYPE_8__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (char const*) ;
 int FUNC_15 (int) ;

int FUNC_16(
  Mem *VAR_11,
  const char *VAR_12,
  int VAR_13,
  u8 VAR_14,
  void (*VAR_15)(void*)
){
  int VAR_16 = VAR_13;
  int VAR_17;
  u16 VAR_18 = 0;

  FUNC_4( VAR_11->db==0 || FUNC_13(VAR_11->db->mutex) );
  FUNC_4( !FUNC_10(VAR_11) );


  if( !VAR_12 ){
    FUNC_12(VAR_11);
    return VAR_8;
  }

  if( VAR_11->db ){
    VAR_17 = VAR_11->db->aLimit[VAR_5];
  }else{
    VAR_17 = VAR_6;
  }
  VAR_18 = (VAR_14==0?VAR_0:VAR_3);
  if( VAR_16<0 ){
    FUNC_4( VAR_14!=0 );
    if( VAR_14==VAR_10 ){
      VAR_16 = 0x7fffffff & (int)FUNC_14(VAR_12);
    }else{
      for(VAR_16=0; VAR_16<=VAR_17 && (VAR_12[VAR_16] | VAR_12[VAR_16+1]); VAR_16+=2){}
    }
    VAR_18 |= VAR_4;
  }





  if( VAR_15==FUNC_3 ){
    u32 VAR_19 = VAR_16;
    if( VAR_18&VAR_4 ){
      VAR_19 += (VAR_14==VAR_10?1:2);
    }
    if( VAR_16>VAR_17 ){
      return FUNC_7(VAR_11->db, VAR_9);
    }
    FUNC_15( VAR_19==0 );
    FUNC_15( VAR_19==31 );
    FUNC_15( VAR_19==32 );
    if( FUNC_8(VAR_11, (int)FUNC_0(VAR_19,32)) ){
      return VAR_7;
    }
    FUNC_5(VAR_11->z, VAR_12, VAR_19);
  }else{
    FUNC_11(VAR_11);
    VAR_11->z = (char *)VAR_12;
    if( VAR_15==FUNC_1 ){
      VAR_11->zMalloc = VAR_11->z;
      VAR_11->szMalloc = FUNC_6(VAR_11->db, VAR_11->zMalloc);
    }else{
      VAR_11->xDel = VAR_15;
      VAR_18 |= ((VAR_15==FUNC_2)?VAR_2:VAR_1);
    }
  }

  VAR_11->n = VAR_16;
  VAR_11->flags = VAR_18;
  VAR_11->enc = (VAR_14==0 ? VAR_10 : VAR_14);


  if( VAR_11->enc!=VAR_10 && FUNC_9(VAR_11) ){
    return VAR_7;
  }


  if( VAR_16>VAR_17 ){
    return VAR_9;
  }

  return VAR_8;
}
