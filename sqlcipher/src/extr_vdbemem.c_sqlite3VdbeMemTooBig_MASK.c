
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nZero; } ;
struct TYPE_7__ {int flags; int n; TYPE_2__* db; TYPE_1__ u; } ;
struct TYPE_6__ {int* aLimit; } ;
typedef TYPE_3__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int) ;

int FUNC_1(Mem *VAR_4){
  FUNC_0( VAR_4->db!=0 );
  if( VAR_4->flags & (VAR_1|VAR_0) ){
    int VAR_5 = VAR_4->n;
    if( VAR_4->flags & VAR_2 ){
      VAR_5 += VAR_4->u.nZero;
    }
    return VAR_5>VAR_4->db->aLimit[VAR_3];
  }
  return 0;
}
