
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ b_p_bl; struct TYPE_3__* b_next; } ;
typedef TYPE_1__ buf_T ;
typedef int VALUE ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static VALUE FUNC_1()
{
    buf_T *VAR_1;
    int VAR_2 = 0;

    for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_1->b_next)
    {


 if (VAR_1->b_p_bl)
     VAR_2++;
    }

    return FUNC_0(VAR_2);
}
