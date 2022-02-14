
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nRef; int flags; int pgno; int pCache; } ;
typedef TYPE_1__ PgHdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(PgHdr *VAR_4){
  FUNC_0( VAR_4->nRef>0 );
  FUNC_0( FUNC_3(VAR_4) );
  if( VAR_4->flags & (VAR_1|VAR_3) ){
    VAR_4->flags &= ~VAR_3;
    if( VAR_4->flags & VAR_1 ){
      VAR_4->flags ^= (VAR_2|VAR_1);
      FUNC_2(("%p.DIRTY %d\n",VAR_4->pCache,VAR_4->pgno));
      FUNC_0( (VAR_4->flags & (VAR_2|VAR_1))==VAR_2 );
      FUNC_1(VAR_4, VAR_0);
    }
    FUNC_0( FUNC_3(VAR_4) );
  }
}
