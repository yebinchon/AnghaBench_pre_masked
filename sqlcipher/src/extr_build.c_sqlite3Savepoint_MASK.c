
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vdbe ;
typedef int Token ;
struct TYPE_5__ {int db; } ;
typedef TYPE_1__ Parse ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,char const* const,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (TYPE_1__*) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,int,int ,int ,char*,int ) ;

void FUNC_6(Parse *VAR_6, int VAR_7, Token *VAR_8){
  char *VAR_9 = FUNC_4(VAR_6->db, VAR_8);
  if( VAR_9 ){
    Vdbe *VAR_10 = FUNC_3(VAR_6);

    static const char * const VAR_11[] = { "BEGIN", "RELEASE", "ROLLBACK" };
    FUNC_0( !VAR_2 && VAR_3==1 && VAR_4==2 );

    if( !VAR_10 || FUNC_1(VAR_6, VAR_5, VAR_11[VAR_7], VAR_9, 0) ){
      FUNC_2(VAR_6->db, VAR_9);
      return;
    }
    FUNC_5(VAR_10, VAR_0, VAR_7, 0, 0, VAR_9, VAR_1);
  }
}
