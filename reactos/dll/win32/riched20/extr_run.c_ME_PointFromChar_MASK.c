
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int texthost; } ;
typedef TYPE_1__ ME_TextEditor ;
typedef int ME_Run ;
typedef int ME_Context ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*,int ) ;
 int FUNC_3 (int *,int *,int,int ) ;

int FUNC_4(ME_TextEditor *VAR_0, ME_Run *VAR_1, int VAR_2, BOOL VAR_3)
{
    ME_Context VAR_4;
    int VAR_5;

    FUNC_2(&VAR_4, VAR_0, FUNC_0(VAR_0->texthost));
    VAR_5 = FUNC_3( &VAR_4, VAR_1, VAR_2, VAR_3 );
    FUNC_1(&VAR_4);

    return VAR_5;
}
