
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int expmask; TYPE_1__* db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(Vdbe *VAR_1, int VAR_2){
  FUNC_0( VAR_2>0 );
  FUNC_0( (VAR_1->db->flags & VAR_0)==0 );
  if( VAR_2>=32 ){
    VAR_1->expmask |= 0x80000000;
  }else{
    VAR_1->expmask |= ((u32)1 << (VAR_2-1));
  }
}
