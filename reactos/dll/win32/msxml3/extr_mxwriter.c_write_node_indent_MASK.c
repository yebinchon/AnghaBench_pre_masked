
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int indent; void* text; void* newline; int * props; } ;
typedef TYPE_1__ mxwriter ;
typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 void* VAR_0 ;
 size_t VAR_1 ;
 char const* VAR_2 ;
 int FUNC_1 (TYPE_1__*,char const*,int) ;

__attribute__((used)) static void FUNC_2(mxwriter *VAR_3)
{
    static const WCHAR VAR_4[] = {'\t'};
    int VAR_5 = VAR_3->indent;

    if (!VAR_3->props[VAR_1] || VAR_3->text)
    {
        VAR_3->text = VAR_0;
        return;
    }



    if (!VAR_3->newline)
        FUNC_1(VAR_3, VAR_2, FUNC_0(VAR_2));
    while (VAR_5--)
        FUNC_1(VAR_3, VAR_4, 1);

    VAR_3->newline = VAR_0;
    VAR_3->text = VAR_0;
}
