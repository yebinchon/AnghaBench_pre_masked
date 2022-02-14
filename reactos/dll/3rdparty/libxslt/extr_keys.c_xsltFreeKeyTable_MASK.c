
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltKeyTablePtr ;
typedef int xsltKeyTable ;
struct TYPE_5__ {int * keys; struct TYPE_5__* nameURI; struct TYPE_5__* name; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(xsltKeyTablePtr VAR_1) {
    if (VAR_1 == ((void*)0))
 return;
    if (VAR_1->name != ((void*)0))
 FUNC_1(VAR_1->name);
    if (VAR_1->nameURI != ((void*)0))
 FUNC_1(VAR_1->nameURI);
    if (VAR_1->keys != ((void*)0))
 FUNC_2(VAR_1->keys, VAR_0);
    FUNC_0(VAR_1, -1, sizeof(xsltKeyTable));
    FUNC_1(VAR_1);
}
