
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SLConn {scalar_t__ fd; int iLog; } ;
struct TYPE_2__ {scalar_t__* zPrefix; char* zIdx; int bReuse; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (char*,char*) ;
 int FUNC_3 () ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*) ;
 char* FUNC_7 (char*,scalar_t__*,int ) ;
 int FUNC_8 (int,...) ;
 TYPE_1__ VAR_3 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(struct SLConn *VAR_4){

  if( VAR_4->fd==0 ){
    char *VAR_5;



    if( VAR_3.zPrefix[0]==0 ){
      FILE *VAR_6;
      char *VAR_7 = FUNC_4(VAR_0);
      if( VAR_7==0 || FUNC_9(VAR_7)+10>=(sizeof(VAR_3.zPrefix)) ) return;
      FUNC_8(sizeof(VAR_3.zPrefix), VAR_3.zPrefix,
                        "%s/sqllog_%05d", VAR_7, FUNC_3());
      FUNC_8(sizeof(VAR_3.zIdx), VAR_3.zIdx,
                        "%s.idx", VAR_3.zPrefix);
      if( FUNC_4(VAR_1) ){
        VAR_3.bReuse = FUNC_0(FUNC_4(VAR_1));
      }
      VAR_6 = FUNC_2(VAR_3.zIdx, "w");
      if( VAR_6 ) FUNC_1(VAR_6);
    }


    VAR_5 = FUNC_7("%s_%05d.sql", VAR_3.zPrefix, VAR_4->iLog);
    VAR_4->fd = FUNC_2(VAR_5, "w");
    FUNC_5(VAR_5);
    if( VAR_4->fd==0 ){
      FUNC_6(VAR_2, "sqllogOpenlog(): Failed to open log file");
    }
  }
}
