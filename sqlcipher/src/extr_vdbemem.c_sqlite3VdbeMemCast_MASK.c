
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_10__ {int flags; TYPE_1__* db; } ;
struct TYPE_9__ {int mallocFailed; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;




 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(Mem *VAR_8, u8 VAR_9, u8 VAR_10){
  if( VAR_8->flags & VAR_2 ) return;
  switch( VAR_9 ){
    case 131: {
      if( (VAR_8->flags & VAR_0)==0 ){
        FUNC_2(VAR_8, VAR_7, VAR_10);
        FUNC_1( VAR_8->flags & VAR_4 || VAR_8->db->mallocFailed );
        if( VAR_8->flags & VAR_4 ) FUNC_0(VAR_8, VAR_0);
      }else{
        VAR_8->flags &= ~(VAR_5&~VAR_0);
      }
      break;
    }
    case 129: {
      FUNC_4(VAR_8);
      break;
    }
    case 130: {
      FUNC_3(VAR_8);
      break;
    }
    case 128: {
      FUNC_5(VAR_8);
      break;
    }
    default: {
      FUNC_1( VAR_9==VAR_7 );
      FUNC_1( VAR_4==(VAR_0>>3) );
      VAR_8->flags |= (VAR_8->flags&VAR_0)>>3;
      FUNC_2(VAR_8, VAR_7, VAR_10);
      FUNC_1( VAR_8->flags & VAR_4 || VAR_8->db->mallocFailed );
      VAR_8->flags &= ~(VAR_1|VAR_3|VAR_0|VAR_6);
      break;
    }
  }
}
