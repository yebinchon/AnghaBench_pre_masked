
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nsISupports ;
typedef int nsCycleCollectionTraversalCallback ;
struct TYPE_3__ {scalar_t__ nsbody; } ;
typedef int HTMLDOMNode ;
typedef TYPE_1__ HTMLBodyElement ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int *) ;

__attribute__((used)) static void FUNC_2(HTMLDOMNode *VAR_0, nsCycleCollectionTraversalCallback *VAR_1)
{
    HTMLBodyElement *VAR_2 = FUNC_0(VAR_0);

    if(VAR_2->nsbody)
        FUNC_1((nsISupports*)VAR_2->nsbody, "This->nsbody", VAR_1);
}
