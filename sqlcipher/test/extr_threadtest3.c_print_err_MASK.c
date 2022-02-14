
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rc; char* zErr; int iLine; } ;
typedef TYPE_1__ Error ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,scalar_t__,char*,int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(Error *VAR_4){
  if( VAR_4->rc!=VAR_0 ){
    int VAR_5 = 0;
    if( VAR_4->rc==VAR_1 ) VAR_5 = 1;
    if( FUNC_2("* - no such table: *",VAR_4->zErr)==0 ) VAR_5 = 1;
    FUNC_1("%s: (%d) \"%s\" at line %d\n", VAR_5 ? "Warning" : "Error",
            VAR_4->rc, VAR_4->zErr, VAR_4->iLine);
    if( !VAR_5 ) VAR_2++;
    FUNC_0(VAR_3);
  }
}
