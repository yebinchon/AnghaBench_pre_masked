
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int cParams; } ;
struct TYPE_6__ {void* Name; void* HelpString; void* Entry; TYPE_4__ funcdesc; TYPE_1__* pParamDesc; } ;
struct TYPE_5__ {void* Name; } ;
typedef TYPE_2__ TLBFuncDesc ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_5(const TLBFuncDesc * VAR_0)
{
  int VAR_1;
  FUNC_1("%s(%u)\n", FUNC_3(FUNC_2(VAR_0->Name)), VAR_0->funcdesc.cParams);
  for (VAR_1=0;VAR_1<VAR_0->funcdesc.cParams;VAR_1++)
      FUNC_1("\tparm%d: %s\n",VAR_1,FUNC_3(FUNC_2(VAR_0->pParamDesc[VAR_1].Name)));


  FUNC_4(&(VAR_0->funcdesc));

  FUNC_1("\thelpstring: %s\n", FUNC_3(FUNC_2(VAR_0->HelpString)));
  if(VAR_0->Entry == ((void*)0))
      FUNC_1("\tentry: (null)\n");
  else if(VAR_0->Entry == (void*)-1)
      FUNC_1("\tentry: invalid\n");
  else if(FUNC_0(VAR_0->Entry))
      FUNC_1("\tentry: %p\n", VAR_0->Entry);
  else
      FUNC_1("\tentry: %s\n", FUNC_3(FUNC_2(VAR_0->Entry)));
}
