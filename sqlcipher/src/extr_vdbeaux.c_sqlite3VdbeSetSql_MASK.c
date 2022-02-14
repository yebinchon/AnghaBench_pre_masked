
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int prepFlags; scalar_t__ zSql; int db; scalar_t__ expmask; } ;
typedef TYPE_1__ Vdbe ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,char const*,int) ;

void FUNC_2(Vdbe *VAR_1, const char *VAR_2, int VAR_3, u8 VAR_4){
  if( VAR_1==0 ) return;
  VAR_1->prepFlags = VAR_4;
  if( (VAR_4 & VAR_0)==0 ){
    VAR_1->expmask = 0;
  }
  FUNC_0( VAR_1->zSql==0 );
  VAR_1->zSql = FUNC_1(VAR_1->db, VAR_2, VAR_3);
}
