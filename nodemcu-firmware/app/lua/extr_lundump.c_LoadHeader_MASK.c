
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ lua_Number ;
struct TYPE_4__ {int swap; char numsize; int toflt; } ;
typedef TYPE_1__ LoadState ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(LoadState* VAR_1)
{
 char VAR_2[VAR_0];
 char VAR_3[VAR_0];
 int VAR_4 = (((lua_Number)0.5)==0);
 FUNC_2(VAR_2);
 FUNC_1(VAR_1,VAR_3,VAR_0);
 VAR_1->swap=(VAR_3[6]!=VAR_2[6]); VAR_3[6]=VAR_2[6];
 VAR_1->numsize=VAR_2[10]=VAR_3[10];
 VAR_1->toflt=(VAR_3[11]>VAR_4);
 if(VAR_1->toflt) VAR_3[11]=VAR_2[11];
 FUNC_0 (FUNC_3(VAR_2,VAR_3,VAR_0)!=0, "bad header");
}
