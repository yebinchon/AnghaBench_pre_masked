
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int architecture; int registers; } ;
typedef TYPE_1__ libqnxr_t ;




 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;

int FUNC_1 (libqnxr_t *VAR_2, ut8 VAR_3) {
 if (!VAR_2) return -1;
 VAR_2->architecture = VAR_3;
 switch (VAR_3) {
 case 128:
  VAR_2->registers = VAR_1;
  break;
 case 129:
  VAR_2->registers = VAR_0;
  break;
 default:
  FUNC_0 ("Error unknown architecture set\n");
 }
 return 0;
}
