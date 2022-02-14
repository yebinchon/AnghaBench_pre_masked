
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ncommands; int ccommands; float* commands; float commandx; float commandy; } ;
struct TYPE_6__ {int xform; } ;
typedef TYPE_1__ NVGstate ;
typedef TYPE_2__ NVGcontext ;







 int FUNC_0 (float*,float*,int) ;
 int FUNC_1 (float*,float*,int ,float,float) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (float*,int) ;

__attribute__((used)) static void FUNC_4(NVGcontext* VAR_0, float* VAR_1, int VAR_2)
{
 NVGstate* VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if (VAR_0->ncommands+VAR_2 > VAR_0->ccommands) {
  float* VAR_5;
  int VAR_6 = VAR_0->ncommands+VAR_2 + VAR_0->ccommands/2;
  VAR_5 = (float*)FUNC_3(VAR_0->commands, sizeof(float)*VAR_6);
  if (VAR_5 == ((void*)0)) return;
  VAR_0->commands = VAR_5;
  VAR_0->ccommands = VAR_6;
 }

 if ((int)VAR_1[0] != 131 && (int)VAR_1[0] != 128) {
  VAR_0->commandx = VAR_1[VAR_2-2];
  VAR_0->commandy = VAR_1[VAR_2-1];
 }


 VAR_4 = 0;
 while (VAR_4 < VAR_2) {
  int VAR_7 = (int)VAR_1[VAR_4];
  switch (VAR_7) {
  case 129:
   FUNC_1(&VAR_1[VAR_4+1],&VAR_1[VAR_4+2], VAR_3->xform, VAR_1[VAR_4+1],VAR_1[VAR_4+2]);
   VAR_4 += 3;
   break;
  case 130:
   FUNC_1(&VAR_1[VAR_4+1],&VAR_1[VAR_4+2], VAR_3->xform, VAR_1[VAR_4+1],VAR_1[VAR_4+2]);
   VAR_4 += 3;
   break;
  case 132:
   FUNC_1(&VAR_1[VAR_4+1],&VAR_1[VAR_4+2], VAR_3->xform, VAR_1[VAR_4+1],VAR_1[VAR_4+2]);
   FUNC_1(&VAR_1[VAR_4+3],&VAR_1[VAR_4+4], VAR_3->xform, VAR_1[VAR_4+3],VAR_1[VAR_4+4]);
   FUNC_1(&VAR_1[VAR_4+5],&VAR_1[VAR_4+6], VAR_3->xform, VAR_1[VAR_4+5],VAR_1[VAR_4+6]);
   VAR_4 += 7;
   break;
  case 131:
   VAR_4++;
   break;
  case 128:
   VAR_4 += 2;
   break;
  default:
   VAR_4++;
  }
 }

 FUNC_0(&VAR_0->commands[VAR_0->ncommands], VAR_1, VAR_2*sizeof(float));

 VAR_0->ncommands += VAR_2;
}
