
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sizeupvalues; int * upvalues; } ;
typedef TYPE_1__ Proto ;


 char* FUNC_0 (TYPE_1__ const*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static void FUNC_3(const Proto* VAR_0)
{
 int VAR_1,VAR_2=VAR_0->sizeupvalues;
 FUNC_2("upvalues (%d) for %p:\n",VAR_2,FUNC_0(VAR_0));
 if (VAR_0->upvalues==((void*)0)) return;
 for (VAR_1=0; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_2("\t%d\t%s\n",VAR_1,FUNC_1(VAR_0->upvalues[VAR_1]));
 }
}
