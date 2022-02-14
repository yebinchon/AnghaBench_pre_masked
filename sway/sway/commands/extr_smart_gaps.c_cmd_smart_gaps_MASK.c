
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int smart_gaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct cmd_results* FUNC_1 (int,char*,int ,int) ;
 struct cmd_results* FUNC_2 (int ,int *) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (char*,int ) ;

struct cmd_results *FUNC_4(int VAR_3, char **VAR_4) {
 struct cmd_results *VAR_5 = FUNC_1(VAR_3, "smart_gaps", VAR_1, 1);

 if (VAR_5) {
  return VAR_5;
 }

 VAR_2->smart_gaps = FUNC_3(VAR_4[0], VAR_2->smart_gaps);

 FUNC_0();

 return FUNC_2(VAR_0, ((void*)0));
}
