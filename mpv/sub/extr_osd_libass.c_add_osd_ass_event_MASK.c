
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Duration; int ReadOrder; int * Text; int Style; scalar_t__ Start; } ;
struct TYPE_7__ {TYPE_2__* events; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Event ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char const*,int ) ;
 int * FUNC_3 (char const*) ;

__attribute__((used)) static ASS_Event *FUNC_4(ASS_Track *VAR_0, const char *VAR_1,
                                    const char *VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0);
    ASS_Event *VAR_4 = VAR_0->events + VAR_3;
    VAR_4->Start = 0;
    VAR_4->Duration = 100;
    VAR_4->Style = FUNC_2(VAR_0, VAR_1, 0);
    VAR_4->ReadOrder = VAR_3;
    FUNC_1(VAR_4->Text == ((void*)0));
    if (VAR_2)
        VAR_4->Text = FUNC_3(VAR_2);
    return VAR_4;
}
