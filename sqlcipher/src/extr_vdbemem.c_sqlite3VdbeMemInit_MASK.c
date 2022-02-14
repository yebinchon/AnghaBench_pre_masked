
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
typedef int sqlite3 ;
struct TYPE_3__ {int flags; scalar_t__ szMalloc; int * db; } ;
typedef TYPE_1__ Mem ;


 int VAR_0 ;
 int FUNC_0 (int) ;

void FUNC_1(Mem *VAR_1, sqlite3 *VAR_2, u16 VAR_3){
  FUNC_0( (VAR_3 & ~VAR_0)==0 );
  VAR_1->flags = VAR_3;
  VAR_1->db = VAR_2;
  VAR_1->szMalloc = 0;
}
