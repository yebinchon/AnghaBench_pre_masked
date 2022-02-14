
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int lsm_file ;
struct TYPE_3__ {char* zLog; char* zDb; int pEnv; } ;
typedef TYPE_1__ FileSystem ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int,int **) ;

__attribute__((used)) static lsm_file *FUNC_1(
  FileSystem *VAR_2,
  int VAR_3,
  int VAR_4,
  int *VAR_5
){
  lsm_file *VAR_6 = 0;
  if( *VAR_5==VAR_0 ){
    int VAR_7 = (VAR_3 ? VAR_1 : 0);
    const char *VAR_8 = (VAR_4 ? VAR_2->zLog : VAR_2->zDb);

    *VAR_5 = FUNC_0(VAR_2->pEnv, VAR_8, VAR_7, &VAR_6);
  }
  return VAR_6;
}
