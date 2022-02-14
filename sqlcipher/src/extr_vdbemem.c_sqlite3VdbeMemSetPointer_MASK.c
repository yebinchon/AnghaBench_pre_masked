
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* zPType; } ;
struct TYPE_5__ {int flags; char eSubtype; void (* xDel ) (void*) ;void* z; TYPE_1__ u; } ;
typedef TYPE_2__ Mem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 void FUNC_1 (void*) ;

void FUNC_2(
  Mem *VAR_4,
  void *VAR_5,
  const char *VAR_6,
  void (*VAR_7)(void*)
){
  FUNC_0( VAR_4->flags==VAR_1 );
  VAR_4->u.zPType = VAR_6 ? VAR_6 : "";
  VAR_4->z = VAR_5;
  VAR_4->flags = VAR_1|VAR_0|VAR_2|VAR_3;
  VAR_4->eSubtype = 'p';
  VAR_4->xDel = VAR_7 ? VAR_7 : FUNC_1;
}
