
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
 int FUNC_1 (int *,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(RAnalOp *VAR_1, ut8 VAR_2) {
 const char* VAR_3="unk";
 const char* VAR_4="unk";
 switch(VAR_2) {
 case 0xaa:
  VAR_3="a";
  VAR_4="x";
  break;
 case 0x8a:
  VAR_3="x";
  VAR_4="a";
  break;
 case 0xa8:
  VAR_3="a";
  VAR_4="y";
  break;
 case 0x98:
  VAR_3="y";
  VAR_4="a";
  break;
 case 0x9a:
  VAR_3="x";
  VAR_4="sp";
  break;
 case 0xba:
  VAR_3="sp";
  VAR_4="x";
  break;
 default:

  break;
 }
 FUNC_1 (&VAR_1->esil, "%s,%s,=",VAR_3,VAR_4);


 if (VAR_2 != 0x9a) {
  FUNC_0 (VAR_1, VAR_0);
 }
}
