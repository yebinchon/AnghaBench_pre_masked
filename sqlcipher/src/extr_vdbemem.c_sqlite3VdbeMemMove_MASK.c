
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ szMalloc; int flags; TYPE_1__* db; } ;
struct TYPE_8__ {int mutex; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;

void FUNC_4(Mem *VAR_1, Mem *VAR_2){
  FUNC_0( VAR_2->db==0 || FUNC_3(VAR_2->db->mutex) );
  FUNC_0( VAR_1->db==0 || FUNC_3(VAR_1->db->mutex) );
  FUNC_0( VAR_2->db==0 || VAR_1->db==0 || VAR_2->db==VAR_1->db );

  FUNC_2(VAR_1);
  FUNC_1(VAR_1, VAR_2, sizeof(Mem));
  VAR_2->flags = VAR_0;
  VAR_2->szMalloc = 0;
}
