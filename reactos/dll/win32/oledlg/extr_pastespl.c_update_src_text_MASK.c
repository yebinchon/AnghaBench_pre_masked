
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int * source_name; int * link_source_name; } ;
typedef TYPE_1__ ps_struct_t ;
typedef int WCHAR ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(HWND VAR_2, const ps_struct_t *VAR_3)
{
    WCHAR *VAR_4;

    if(VAR_3->flags & VAR_1)
    {
        if(VAR_3->source_name)
            VAR_4 = VAR_3->source_name;
        else
            VAR_4 = VAR_3->link_source_name;

    }
    else
    {
        if(VAR_3->link_source_name)
            VAR_4 = VAR_3->link_source_name;
        else
            VAR_4 = VAR_3->source_name;

    }
    FUNC_0(VAR_2, VAR_0, VAR_4);
}
