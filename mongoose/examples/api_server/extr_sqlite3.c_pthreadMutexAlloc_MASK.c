
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; int mutex; } ;
typedef TYPE_1__ const sqlite3_mutex ;
typedef int pthread_mutexattr_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 TYPE_1__ const* FUNC_6 (int) ;

__attribute__((used)) static sqlite3_mutex *FUNC_7(int VAR_1){
  static sqlite3_mutex VAR_2[] = {
    130,
    130,
    130,
    130,
    130,
    130
  };
  sqlite3_mutex *VAR_3;
  switch( VAR_1 ){
    case 128: {
      VAR_3 = FUNC_6( sizeof(*VAR_3) );
      if( VAR_3 ){






        pthread_mutexattr_t VAR_4;
        FUNC_4(&VAR_4);
        FUNC_5(&VAR_4, VAR_0);
        FUNC_2(&VAR_3->mutex, &VAR_4);
        FUNC_3(&VAR_4);




      }
      break;
    }
    case 129: {
      VAR_3 = FUNC_6( sizeof(*VAR_3) );
      if( VAR_3 ){



        FUNC_2(&VAR_3->mutex, 0);
      }
      break;
    }
    default: {
      FUNC_1( VAR_1-2 >= 0 );
      FUNC_1( VAR_1-2 < FUNC_0(VAR_2) );
      VAR_3 = &VAR_2[VAR_1-2];



      break;
    }
  }
  return VAR_3;
}
