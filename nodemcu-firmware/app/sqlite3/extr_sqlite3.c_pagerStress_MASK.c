
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int doNotSpill; scalar_t__ eState; int errCode; } ;
struct TYPE_14__ {int flags; int pgno; scalar_t__ pDirty; TYPE_2__* pPager; } ;
typedef TYPE_1__ PgHdr ;
typedef TYPE_2__ Pager ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(void *VAR_7, PgHdr *VAR_8){
  Pager *VAR_9 = (Pager *)VAR_7;
  int VAR_10 = VAR_6;

  FUNC_3( VAR_8->pPager==VAR_9 );
  FUNC_3( VAR_8->flags&VAR_1 );
  if( FUNC_0(VAR_9->errCode) ) return VAR_6;
  FUNC_11( VAR_9->doNotSpill & VAR_5 );
  FUNC_11( VAR_9->doNotSpill & VAR_4 );
  FUNC_11( VAR_9->doNotSpill & VAR_3 );
  if( VAR_9->doNotSpill
   && ((VAR_9->doNotSpill & (VAR_5|VAR_4))!=0
      || (VAR_8->flags & VAR_2)!=0)
  ){
    return VAR_6;
  }

  VAR_8->pDirty = 0;
  if( FUNC_4(VAR_9) ){

    VAR_10 = FUNC_9(VAR_8);
    if( VAR_10==VAR_6 ){
      VAR_10 = FUNC_5(VAR_9, VAR_8, 0, 0);
    }
  }else{


    if( VAR_8->flags&VAR_2
     || VAR_9->eState==VAR_0
    ){
      VAR_10 = FUNC_10(VAR_9, 1);
    }


    if( VAR_10==VAR_6 ){
      FUNC_3( (VAR_8->flags&VAR_2)==0 );
      VAR_10 = FUNC_7(VAR_9, VAR_8);
    }
  }


  if( VAR_10==VAR_6 ){
    FUNC_2(("STRESS %d page %d\n", FUNC_1(VAR_9), VAR_8->pgno));
    FUNC_8(VAR_8);
  }

  return FUNC_6(VAR_9, VAR_10);
}
