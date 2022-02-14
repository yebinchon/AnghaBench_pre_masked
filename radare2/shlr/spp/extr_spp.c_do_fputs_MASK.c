
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ifl; int * echo; } ;
struct TYPE_8__ {int (* fputs ) (TYPE_2__*,char*) ;TYPE_1__ state; } ;
struct TYPE_7__ {scalar_t__ fout; } ;
typedef TYPE_2__ Output ;


 int FUNC_0 (scalar_t__,char*,char*) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (TYPE_2__*,char*) ;

int FUNC_2(Output *VAR_1, char *VAR_2) {
 int VAR_3;
 int VAR_4 = 0;
 for (VAR_3 = 0; VAR_3 <= VAR_0->state.ifl; VAR_3++) {
  if (!VAR_0->state.echo[VAR_3]) {
   return VAR_4;
  }
 }
 if (VAR_2[0]) {
  VAR_4 = 1;
 }
 if (VAR_0->fputs) {
  VAR_0->fputs (VAR_1, VAR_2);
 } else {
  if (VAR_1->fout) {
   FUNC_0 (VAR_1->fout, "%s", VAR_2);
  }
 }
 return VAR_4;
}
