
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iTrace; scalar_t__ iTimeout; scalar_t__ bIgnoreSqlErrors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char*,int,char const*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(void *VAR_5, int VAR_6, const char *VAR_7){
  FUNC_0(VAR_5);
  if( VAR_6==VAR_1 && VAR_4.bIgnoreSqlErrors ) return;
  if( (VAR_6&0xff)==VAR_3 && VAR_4.iTrace<3 ) return;
  if( VAR_4.iTimeout==0 && (VAR_6&0xff)==VAR_0 && VAR_4.iTrace<3 ) return;
  if( (VAR_6&0xff)==VAR_2 ){
    FUNC_2("(info) %s", VAR_7);
  }else{
    FUNC_1("(errcode=%d) %s", VAR_6, VAR_7);
  }
}
