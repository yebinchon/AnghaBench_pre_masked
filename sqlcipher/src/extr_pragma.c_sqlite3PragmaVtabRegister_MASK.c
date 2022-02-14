
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int aModule; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {int mPragFlg; } ;
typedef TYPE_2__ PragmaName ;
typedef int Module ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,char const*) ;
 int * FUNC_3 (TYPE_1__*,char const*,int *,void*,int ) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;

Module *FUNC_5(sqlite3 *VAR_3, const char *VAR_4){
  const PragmaName *VAR_5;
  FUNC_0( FUNC_4(VAR_4, "pragma_", 7)==0 );
  VAR_5 = FUNC_1(VAR_4+7);
  if( VAR_5==0 ) return 0;
  if( (VAR_5->mPragFlg & (VAR_0|VAR_1))==0 ) return 0;
  FUNC_0( FUNC_2(&VAR_3->aModule, VAR_4)==0 );
  return FUNC_3(VAR_3, VAR_4, &VAR_2, (void*)VAR_5, 0);
}
