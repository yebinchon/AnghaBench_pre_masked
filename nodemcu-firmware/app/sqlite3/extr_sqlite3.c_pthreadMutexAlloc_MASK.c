
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

 int VAR_1 ;


 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 TYPE_1__ const* FUNC_5 (int) ;

__attribute__((used)) static sqlite3_mutex *FUNC_6(int VAR_2){
  static sqlite3_mutex VAR_3[] = {
    130,
    130,
    130,
    130,
    130,
    130,
    130,
    130,
    130,
    130,
    130,
    130
  };
  sqlite3_mutex *VAR_4;
  switch( VAR_2 ){
    case 128: {
      VAR_4 = FUNC_5( sizeof(*VAR_4) );
      if( VAR_4 ){






        pthread_mutexattr_t VAR_5;
        FUNC_3(&VAR_5);
        FUNC_4(&VAR_5, VAR_0);
        FUNC_1(&VAR_4->mutex, &VAR_5);
        FUNC_2(&VAR_5);

      }
      break;
    }
    case 129: {
      VAR_4 = FUNC_5( sizeof(*VAR_4) );
      if( VAR_4 ){
        FUNC_1(&VAR_4->mutex, 0);
      }
      break;
    }
    default: {






      VAR_4 = &VAR_3[VAR_2-2];
      break;
    }
  }



  return VAR_4;
}
