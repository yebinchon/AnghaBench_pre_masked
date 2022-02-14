
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef scalar_t__ i64 ;
struct TYPE_10__ {int r1; int r2; int nField; int default_rc; int eqSeen; TYPE_2__* aMem; int pKeyInfo; } ;
typedef TYPE_3__ UnpackedRecord ;
struct TYPE_8__ {scalar_t__ i; } ;
struct TYPE_9__ {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,void const*,TYPE_3__*) ;
 int FUNC_6 (int,void const*,TYPE_3__*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,void const*,int ) ;
 int FUNC_9 (int,void const*,TYPE_3__*,int) ;

__attribute__((used)) static int FUNC_10(
  int VAR_1, const void *VAR_2,
  UnpackedRecord *VAR_3
){
  const u8 *VAR_4 = &((const u8*)VAR_2)[*(const u8*)VAR_2 & 0x3F];
  int VAR_5 = ((const u8*)VAR_2)[1];
  int VAR_6;
  u32 VAR_7;
  u64 VAR_8;
  i64 VAR_9;
  i64 VAR_10;

  FUNC_8(VAR_1, VAR_2, VAR_3->pKeyInfo);
  FUNC_4( (*(u8*)VAR_2)<=0x3F || VAR_0 );
  switch( VAR_5 ){
    case 1: {
      VAR_10 = FUNC_1(VAR_4);
      FUNC_7( VAR_10<0 );
      break;
    }
    case 2: {
      VAR_10 = FUNC_3(VAR_4);
      FUNC_7( VAR_10<0 );
      break;
    }
    case 3: {
      VAR_10 = FUNC_2(VAR_4);
      FUNC_7( VAR_10<0 );
      break;
    }
    case 4: {
      VAR_7 = FUNC_0(VAR_4);
      VAR_10 = (i64)*(int*)&VAR_7;
      FUNC_7( VAR_10<0 );
      break;
    }
    case 5: {
      VAR_10 = FUNC_0(VAR_4+2) + (((i64)1)<<32)*FUNC_3(VAR_4);
      FUNC_7( VAR_10<0 );
      break;
    }
    case 6: {
      VAR_8 = FUNC_0(VAR_4);
      VAR_8 = (VAR_8<<32) | FUNC_0(VAR_4+4);
      VAR_10 = *(i64*)&VAR_8;
      FUNC_7( VAR_10<0 );
      break;
    }
    case 8:
      VAR_10 = 0;
      break;
    case 9:
      VAR_10 = 1;
      break;







    case 0: case 7:
      return FUNC_5(VAR_1, VAR_2, VAR_3);

    default:
      return FUNC_5(VAR_1, VAR_2, VAR_3);
  }

  VAR_9 = VAR_3->aMem[0].u.i;
  if( VAR_9>VAR_10 ){
    VAR_6 = VAR_3->r1;
  }else if( VAR_9<VAR_10 ){
    VAR_6 = VAR_3->r2;
  }else if( VAR_3->nField>1 ){


    VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3, 1);
  }else{


    VAR_6 = VAR_3->default_rc;
    VAR_3->eqSeen = 1;
  }

  FUNC_4( FUNC_9(VAR_1, VAR_2, VAR_3, VAR_6) );
  return VAR_6;
}
