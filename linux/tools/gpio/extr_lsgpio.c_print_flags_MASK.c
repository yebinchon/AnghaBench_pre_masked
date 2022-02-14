
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long mask; char* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_2(unsigned long VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_2 & VAR_0[VAR_3].mask) {
   if (VAR_4)
    FUNC_1(VAR_1, " ");
   FUNC_1(VAR_1, "%s", VAR_0[VAR_3].name);
   VAR_4++;
  }
 }
}
