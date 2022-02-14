
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int Vdbe ;
struct TYPE_6__ {TYPE_1__* db; int * pVdbe; } ;
struct TYPE_5__ {int mallocFailed; } ;
typedef TYPE_2__ Parse ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,int) ;
 int FUNC_2 (int *,int ,int,int,int ,char*,int) ;

__attribute__((used)) static void FUNC_3(Parse *VAR_2, int VAR_3, int VAR_4, char *VAR_5){
  Vdbe *VAR_6 = VAR_2->pVdbe;
  if( VAR_5==0 ){
    FUNC_0( VAR_2->db->mallocFailed );
    return;
  }
  FUNC_0( VAR_6!=0 );




  while( VAR_4>0 && VAR_5[0]==VAR_1 ){
    VAR_4--;
    VAR_3++;
    VAR_5++;
  }
  while( VAR_4>1 && VAR_5[VAR_4-1]==VAR_1 ){
    VAR_4--;
  }


  if( VAR_4>0 ){
    FUNC_2(VAR_6, VAR_0, VAR_3, VAR_4, 0, VAR_5, VAR_4);
    FUNC_1(VAR_2, VAR_3, VAR_4);
  }
}
