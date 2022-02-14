
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int FilterID; int DisplayID; } ;
typedef TYPE_1__* PFILTERPAIR ;


 scalar_t__ FUNC_0 (int ,int ,int*,int) ;
 int VAR_0 ;

void
FUNC_1(WCHAR *VAR_1, PFILTERPAIR VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;

    VAR_5 = 0;
    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    {
        VAR_5 += FUNC_0(VAR_0, VAR_2[VAR_4].DisplayID, &VAR_1[VAR_5], 255);
        VAR_1[++VAR_5] = L'\0';
        VAR_5 += FUNC_0(VAR_0, VAR_2[VAR_4].FilterID, &VAR_1[VAR_5], 255);
        VAR_1[++VAR_5] = L'\0';
    }
    VAR_1[++VAR_5] = L'\0';
}
