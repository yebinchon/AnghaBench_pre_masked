
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct proto {int val; int code; } ;
struct TYPE_3__ {int State; int Width; int Param; } ;
typedef TYPE_1__ TIFFFaxTabEnt ;



__attribute__((used)) static void
FUNC_0(TIFFFaxTabEnt *VAR_0, int VAR_1, struct proto *VAR_2, int VAR_3)
{
    int VAR_4 = 1 << VAR_1;

    while (VAR_2->val) {
 int VAR_5 = VAR_2->val & 15;
 int VAR_6 = VAR_2->val >> 4;
 int VAR_7 = 1 << VAR_5;
 int VAR_8;
 for (VAR_8 = VAR_2->code; VAR_8 < VAR_4; VAR_8 += VAR_7) {
     TIFFFaxTabEnt *VAR_9 = VAR_0+VAR_8;
     VAR_9->State = VAR_3;
     VAR_9->Width = VAR_5;
     VAR_9->Param = VAR_6;
 }
 VAR_2++;
    }
}
