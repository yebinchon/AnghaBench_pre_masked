
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int sizek; int sizelocvars; int sizeupvalues; TYPE_2__* upvalues; TYPE_1__* locvars; } ;
struct TYPE_8__ {int instack; int idx; } ;
struct TYPE_7__ {int startpc; int endpc; int varname; } ;
typedef TYPE_3__ Proto ;


 int FUNC_0 (TYPE_3__ const*,int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__ const*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static void FUNC_5(const Proto* VAR_0)
{
 int VAR_1,VAR_2;
 VAR_2=VAR_0->sizek;
 FUNC_4("constants (%d) for %p:\n",VAR_2,FUNC_2(VAR_0));
 for (VAR_1=0; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_4("\t%d\t",VAR_1+1);
  FUNC_0(VAR_0,VAR_1);
  FUNC_4("\n");
 }
 VAR_2=VAR_0->sizelocvars;
 FUNC_4("locals (%d) for %p:\n",VAR_2,FUNC_2(VAR_0));
 for (VAR_1=0; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_4("\t%d\t%s\t%d\t%d\n",
  VAR_1,FUNC_3(VAR_0->locvars[VAR_1].varname),VAR_0->locvars[VAR_1].startpc+1,VAR_0->locvars[VAR_1].endpc+1);
 }
 VAR_2=VAR_0->sizeupvalues;
 FUNC_4("upvalues (%d) for %p:\n",VAR_2,FUNC_2(VAR_0));
 for (VAR_1=0; VAR_1<VAR_2; VAR_1++)
 {
  FUNC_4("\t%d\t%s\t%d\t%d\n",
  VAR_1,FUNC_1(VAR_1),VAR_0->upvalues[VAR_1].instack,VAR_0->upvalues[VAR_1].idx);
 }
}
