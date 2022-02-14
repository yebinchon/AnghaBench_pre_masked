
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* clear ) (int *) ;int cur; } ;
typedef TYPE_1__ IterObject ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(IterObject *VAR_0)
{
    if (VAR_0->clear != ((void*)0))
 return VAR_0->clear(&VAR_0->cur);
    else
 return 0;
}
