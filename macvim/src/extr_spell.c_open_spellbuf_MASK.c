
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_p_key; void* b_p_swf; void* b_spell; } ;
typedef TYPE_1__ buf_T ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static buf_T *
FUNC_3()
{
    buf_T *VAR_2;

    VAR_2 = (buf_T *)FUNC_0(sizeof(buf_T));
    if (VAR_2 != ((void*)0))
    {
 VAR_2->b_spell = VAR_0;
 VAR_2->b_p_swf = VAR_0;



 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
    }
    return VAR_2;
}
