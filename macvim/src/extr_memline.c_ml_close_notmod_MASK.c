
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* b_next; } ;
typedef TYPE_1__ buf_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;

void
FUNC_2()
{
    buf_T *VAR_2;

    for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->b_next)
 if (!FUNC_0(VAR_2))
     FUNC_1(VAR_2, VAR_0);
}
