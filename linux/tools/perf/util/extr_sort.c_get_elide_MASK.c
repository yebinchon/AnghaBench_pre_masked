
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dso_to_list; int dso_from_list; int sym_to_list; int sym_from_list; int comm_list; int dso_list; int sym_list; } ;
typedef int FILE ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static bool FUNC_1(int VAR_3, FILE *VAR_4)
{
 switch (VAR_3) {
 case 130:
  return FUNC_0(VAR_2.sym_list, "symbol", VAR_4);
 case 133:
  return FUNC_0(VAR_2.dso_list, "dso", VAR_4);
 case 134:
  return FUNC_0(VAR_2.comm_list, "comm", VAR_4);
 default:
  break;
 }

 if (VAR_1 != VAR_0)
  return 0;

 switch (VAR_3) {
 case 129:
  return FUNC_0(VAR_2.sym_from_list, "sym_from", VAR_4);
 case 128:
  return FUNC_0(VAR_2.sym_to_list, "sym_to", VAR_4);
 case 132:
  return FUNC_0(VAR_2.dso_from_list, "dso_from", VAR_4);
 case 131:
  return FUNC_0(VAR_2.dso_to_list, "dso_to", VAR_4);
 default:
  break;
 }

 return 0;
}
