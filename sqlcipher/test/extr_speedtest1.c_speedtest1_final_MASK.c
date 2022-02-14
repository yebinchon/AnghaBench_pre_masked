
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTotal; int bSqlOnly; } ;


 char* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*,char*,int,int,int) ;
 int VAR_2 ;

void FUNC_1(void){
  if( !VAR_1.bSqlOnly ){
    FUNC_0("       TOTAL%.*s %4d.%03ds\n", VAR_0-5, VAR_2,
           (int)(VAR_1.iTotal/1000), (int)(VAR_1.iTotal%1000));
  }
}
