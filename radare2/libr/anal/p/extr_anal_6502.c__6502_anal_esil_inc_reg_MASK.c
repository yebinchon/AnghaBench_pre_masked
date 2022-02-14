
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_4__ {int esil; } ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_2(RAnalOp *VAR_1, ut8 VAR_2, char* VAR_3) {
 char* VAR_4 = ((void*)0);

 switch(VAR_2) {
 case 0xe8:
 case 0xca:
  VAR_4 = "x";
  break;
 case 0xc8:
 case 0x88:
  VAR_4 = "y";
  break;
 }
 FUNC_1 (&VAR_1->esil, "%s,%s%s=", VAR_4, VAR_3, VAR_3);
 FUNC_0 (VAR_1, VAR_0);
}
