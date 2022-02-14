
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int TestDb ;
struct TYPE_2__ {int db; } ;
typedef TYPE_1__ LsmDb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int*) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(TestDb *VAR_4, int VAR_5){
  FUNC_0( VAR_5==VAR_3
       || VAR_5==VAR_2
       || VAR_5==VAR_1
  );
  if( FUNC_2(VAR_4) ){
    int VAR_6 = VAR_5;
    LsmDb *VAR_7 = (LsmDb *)VAR_4;
    FUNC_1(VAR_7->db, VAR_0, &VAR_6);
  }
}
