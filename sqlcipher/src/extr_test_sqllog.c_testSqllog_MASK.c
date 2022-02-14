
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SLConn {scalar_t__ fd; int * db; scalar_t__ iLog; } ;
typedef int sqlite3_mutex ;
typedef int sqlite3 ;
struct TYPE_2__ {scalar_t__ bRec; int nConn; int * mutex; struct SLConn* aConn; int iNextLog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct SLConn*,struct SLConn*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct SLConn*,char*,int ) ;
 int FUNC_8 (struct SLConn*) ;
 scalar_t__ FUNC_9 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_10 (struct SLConn*,char const*) ;

__attribute__((used)) static void FUNC_11(void *VAR_3, sqlite3 *VAR_4, const char *VAR_5, int VAR_6){
  struct SLConn *VAR_7 = 0;
  sqlite3_mutex *VAR_8 = FUNC_3(VAR_1);

  FUNC_0( VAR_6==0 || VAR_6==1 || VAR_6==2 );
  FUNC_0( (VAR_6==2)==(VAR_5==0) );


  if( VAR_6==0 ){
    FUNC_4(VAR_8);
    if( VAR_2.mutex==0 ){
      VAR_2.mutex = FUNC_3(VAR_0);
    }
    FUNC_6(VAR_8);

    FUNC_4(VAR_2.mutex);
    if( VAR_2.bRec==0 && FUNC_9(VAR_4) ){

      FUNC_4(VAR_8);
      VAR_7 = &VAR_2.aConn[VAR_2.nConn++];
      VAR_7->fd = 0;
      VAR_7->db = VAR_4;
      VAR_7->iLog = VAR_2.iNextLog++;
      FUNC_6(VAR_8);


      FUNC_8(VAR_7);
      if( VAR_7->fd ) FUNC_7(VAR_7, "main", 0);
    }
    FUNC_6(VAR_2.mutex);
  }

  else{

    int VAR_9;
    for(VAR_9=0; VAR_9<VAR_2.nConn; VAR_9++){
      VAR_7 = &VAR_2.aConn[VAR_9];
      if( VAR_7->db==VAR_4 ) break;
    }


    if( VAR_6==2 ){
      FUNC_4(VAR_8);
      if( VAR_9<VAR_2.nConn ){
        if( VAR_7->fd ) FUNC_1(VAR_7->fd);
        VAR_7->db = 0;
        VAR_7->fd = 0;
        VAR_2.nConn--;
      }

      if( VAR_2.nConn==0 ){
        FUNC_5(VAR_2.mutex);
        VAR_2.mutex = 0;
      }else if( VAR_9<VAR_2.nConn ){
        int VAR_10 = &VAR_2.aConn[VAR_2.nConn] - VAR_7;
        if( VAR_10>0 ){
          FUNC_2(VAR_7, &VAR_7[1], VAR_10*sizeof(struct SLConn));
        }
      }
      FUNC_6(VAR_8);


    }else if( VAR_9<VAR_2.nConn && VAR_7->fd ){
      FUNC_4(VAR_2.mutex);
      if( VAR_2.bRec==0 ){
        FUNC_10(VAR_7, VAR_5);
      }
      FUNC_6(VAR_2.mutex);
    }
  }
}
