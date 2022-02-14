
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sinkAspects; int sinkAdviseFlag; int * sinkInterface; } ;
typedef int LONG ;
typedef TYPE_1__ DataCache ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_3(
  DataCache* VAR_1,
  DWORD VAR_2,
  LONG VAR_3)
{
  FUNC_2("(%p, %x, %d)\n", VAR_1, VAR_2, VAR_3);






  if ((VAR_1->sinkAspects & VAR_2) != 0)
  {
    if (VAR_1->sinkInterface != ((void*)0))
    {
      FUNC_0(VAR_1->sinkInterface,
          VAR_2,
          VAR_3);





      if ( (VAR_1->sinkAdviseFlag & VAR_0) != 0)
      {
 FUNC_1(VAR_1->sinkInterface);

 VAR_1->sinkInterface = ((void*)0);
 VAR_1->sinkAspects = 0;
 VAR_1->sinkAdviseFlag = 0;
      }
    }
  }
}
