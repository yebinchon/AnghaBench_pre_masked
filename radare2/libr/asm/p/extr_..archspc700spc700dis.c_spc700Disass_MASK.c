
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ut8 ;
struct TYPE_2__ {int type; char* name; } ;
typedef int RAsmOp ;






 int FUNC_0 (int *,char const*) ;
 char* FUNC_1 (char*,size_t const,...) ;
 int FUNC_2 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(RAsmOp *VAR_1, const ut8 *VAR_2, int VAR_3) {
 int VAR_4 = FUNC_2 (VAR_0[VAR_2[0]].type);
 if (VAR_3 < VAR_4) {
  return 0;
 }
 const char *VAR_5 = "invalid";
 switch (VAR_0[VAR_2[0]].type) {
 case 128:
  VAR_5 = VAR_0[VAR_2[0]].name;
  break;
 case 130:
  VAR_5 = FUNC_1 (VAR_0[VAR_2[0]].name, VAR_2[1]);
  break;
 case 129:
  VAR_5 = FUNC_1 (VAR_0[VAR_2[0]].name, VAR_2[1], VAR_2[2]);
  break;
 case 131:
  VAR_5 = FUNC_1 (VAR_0[VAR_2[0]].name, VAR_2[1]+0x100*VAR_2[2]);
  break;
 }
 FUNC_0 (VAR_1, VAR_5);
 return VAR_4;
}
