
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int db; } ;
typedef TYPE_1__ LsmDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int*,int*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(LsmDb *VAR_3){
  int VAR_4;
  int VAR_5 = -1;
  int VAR_6 = 0;

  VAR_4 = FUNC_0(VAR_3->db, VAR_0, &VAR_5);
  do {
    int VAR_7, VAR_8, VAR_9;
    VAR_9 = FUNC_1(VAR_3->db, VAR_1, &VAR_7, &VAR_8);
    if( VAR_9!=VAR_2 ) return VAR_9;
    if( VAR_7==0 || VAR_8<(VAR_5/2) ) break;



    FUNC_4(5000);
    VAR_6 += 5;
  }while( 1 );





  return VAR_4;
}
