
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {scalar_t__ pVtab; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
typedef int Fts3Table ;
typedef TYPE_2__ Fts3Cursor ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,char*,int *,TYPE_2__**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_6(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  int VAR_4;
  Fts3Table *VAR_5;
  Fts3Cursor *VAR_6;

  FUNC_0(VAR_2);

  FUNC_1( VAR_2==1 );
  if( FUNC_2(VAR_1, "optimize", VAR_3[0], &VAR_6) ) return;
  VAR_5 = (Fts3Table *)VAR_6->base.pVtab;
  FUNC_1( *VAR_5 );

  VAR_4 = FUNC_3(VAR_5);

  switch( VAR_4 ){
    case 128:
      FUNC_5(VAR_1, "Index optimized", -1, VAR_0);
      break;
    case 129:
      FUNC_5(VAR_1, "Index already optimal", -1, VAR_0);
      break;
    default:
      FUNC_4(VAR_1, VAR_4);
      break;
  }
}
