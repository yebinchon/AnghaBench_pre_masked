
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int visitproc ;
struct TYPE_3__ {int (* traverse ) (int ,int ,void*) ;int cur; } ;
typedef TYPE_1__ IterObject ;


 int FUNC_0 (int ,int ,void*) ;

__attribute__((used)) static int
FUNC_1(IterObject *VAR_0, visitproc VAR_1, void *VAR_2)
{
    if (VAR_0->traverse != ((void*)0))
 return VAR_0->traverse(VAR_0->cur, VAR_1, VAR_2);
    else
 return 0;
}
