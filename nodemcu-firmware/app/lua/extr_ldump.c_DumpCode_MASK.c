
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sizecode; int * code; } ;
typedef TYPE_1__ Proto ;
typedef int Instruction ;
typedef int DumpState ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (char*,int,int *) ;
 int FUNC_4 (char*,int *,int) ;

__attribute__((used)) static void FUNC_5(const Proto *VAR_0, DumpState* VAR_1)
{
 FUNC_2(VAR_0->sizecode,VAR_1);
 char VAR_2[10];
 int VAR_3;
 FUNC_0(VAR_1);
 for (VAR_3=0; VAR_3<VAR_0->sizecode; VAR_3++)
 {
  FUNC_4(VAR_2,&VAR_0->code[VAR_3],sizeof(Instruction));
  FUNC_3(VAR_2,sizeof(Instruction),VAR_1);
  FUNC_1(VAR_2,sizeof(Instruction),VAR_1);
 }
}
