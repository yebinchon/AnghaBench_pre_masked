
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int iSize; } ;
typedef TYPE_1__ Bitvec ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;

Bitvec *FUNC_2(u32 VAR_1){
  Bitvec *VAR_2;
  FUNC_0( sizeof(*VAR_2)==VAR_0 );
  VAR_2 = FUNC_1( sizeof(*VAR_2) );
  if( VAR_2 ){
    VAR_2->iSize = VAR_1;
  }
  return VAR_2;
}
