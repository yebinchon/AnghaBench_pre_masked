
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ref; int * pCFObject; int * storage; int * dataAdviseHolder; int * oleAdviseHolder; int * clientSite; int * dataCache; int * dataCache_PersistStg; int outerUnknown; struct TYPE_6__* containerObj; struct TYPE_6__* containerApp; } ;
typedef TYPE_1__ DefaultHandler ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_12(
  DefaultHandler* VAR_0)
{
  FUNC_11("(%p)\n", VAR_0);




  VAR_0->ref = 10000;


  FUNC_0(VAR_0);

  FUNC_2( FUNC_1(), 0, VAR_0->containerApp );
  VAR_0->containerApp = ((void*)0);
  FUNC_2( FUNC_1(), 0, VAR_0->containerObj );
  VAR_0->containerObj = ((void*)0);

  if (VAR_0->dataCache)
  {


    FUNC_9(VAR_0->outerUnknown);
    FUNC_7(VAR_0->dataCache_PersistStg);
    FUNC_10(VAR_0->dataCache);
    VAR_0->dataCache_PersistStg = ((void*)0);
    VAR_0->dataCache = ((void*)0);
  }

  if (VAR_0->clientSite)
  {
    FUNC_6(VAR_0->clientSite);
    VAR_0->clientSite = ((void*)0);
  }

  if (VAR_0->oleAdviseHolder)
  {
    FUNC_5(VAR_0->oleAdviseHolder);
    VAR_0->oleAdviseHolder = ((void*)0);
  }

  if (VAR_0->dataAdviseHolder)
  {
    FUNC_4(VAR_0->dataAdviseHolder);
    VAR_0->dataAdviseHolder = ((void*)0);
  }

  if (VAR_0->storage)
  {
    FUNC_8(VAR_0->storage);
    VAR_0->storage = ((void*)0);
  }

  if (VAR_0->pCFObject)
  {
    FUNC_3(VAR_0->pCFObject);
    VAR_0->pCFObject = ((void*)0);
  }

  FUNC_2(FUNC_1(), 0, VAR_0);
}
