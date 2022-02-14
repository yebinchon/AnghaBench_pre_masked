
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ xCmp; } ;
struct TYPE_14__ {scalar_t__ i; scalar_t__ r; } ;
struct TYPE_16__ {int flags; scalar_t__ enc; TYPE_2__* db; TYPE_1__ u; } ;
struct TYPE_15__ {scalar_t__ mallocFailed; } ;
typedef TYPE_3__ Mem ;
typedef TYPE_4__ CollSeq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__ const*,TYPE_3__ const*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (TYPE_3__ const*) ;
 int FUNC_4 (TYPE_3__ const*,TYPE_3__ const*,TYPE_4__ const*,int ) ;

int FUNC_5(const Mem *VAR_7, const Mem *VAR_8, const CollSeq *VAR_9){
  int VAR_10, VAR_11;
  int VAR_12;

  VAR_10 = VAR_7->flags;
  VAR_11 = VAR_8->flags;
  VAR_12 = VAR_10|VAR_11;
  FUNC_0( !FUNC_3(VAR_7) && !FUNC_3(VAR_8) );




  if( VAR_12&VAR_1 ){
    return (VAR_11&VAR_1) - (VAR_10&VAR_1);
  }



  if( VAR_12&(VAR_0|VAR_2) ){
    if( (VAR_10 & VAR_11 & VAR_0)!=0 ){
      if( VAR_7->u.i < VAR_8->u.i ) return -1;
      if( VAR_7->u.i > VAR_8->u.i ) return +1;
      return 0;
    }
    if( (VAR_10 & VAR_11 & VAR_2)!=0 ){
      if( VAR_7->u.r < VAR_8->u.r ) return -1;
      if( VAR_7->u.r > VAR_8->u.r ) return +1;
      return 0;
    }
    if( (VAR_10&VAR_0)!=0 ){
      if( (VAR_11&VAR_2)!=0 ){
        return FUNC_2(VAR_7->u.i, VAR_8->u.r);
      }else{
        return -1;
      }
    }
    if( (VAR_10&VAR_2)!=0 ){
      if( (VAR_11&VAR_0)!=0 ){
        return -FUNC_2(VAR_8->u.i, VAR_7->u.r);
      }else{
        return -1;
      }
    }
    return +1;
  }




  if( VAR_12&VAR_3 ){
    if( (VAR_10 & VAR_3)==0 ){
      return 1;
    }
    if( (VAR_11 & VAR_3)==0 ){
      return -1;
    }

    FUNC_0( VAR_7->enc==VAR_8->enc || VAR_7->db->mallocFailed );
    FUNC_0( VAR_7->enc==VAR_6 ||
            VAR_7->enc==VAR_5 || VAR_7->enc==VAR_4 );





    FUNC_0( !VAR_9 || VAR_9->xCmp );

    if( VAR_9 ){
      return FUNC_4(VAR_7, VAR_8, VAR_9, 0);
    }


  }


  return FUNC_1(VAR_7, VAR_8);
}
