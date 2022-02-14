
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ nRef; int pgno; int pCache; } ;
typedef TYPE_1__ PgHdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(PgHdr *VAR_5){
  FUNC_0( FUNC_4(VAR_5) );
  FUNC_0( (VAR_5->flags & VAR_2)!=0 );
  FUNC_0( (VAR_5->flags & VAR_1)==0 );
  FUNC_1(VAR_5, VAR_0);
  VAR_5->flags &= ~(VAR_2|VAR_3|VAR_4);
  VAR_5->flags |= VAR_1;
  FUNC_2(("%p.CLEAN %d\n",VAR_5->pCache,VAR_5->pgno));
  FUNC_0( FUNC_4(VAR_5) );
  if( VAR_5->nRef==0 ){
    FUNC_3(VAR_5);
  }
}
