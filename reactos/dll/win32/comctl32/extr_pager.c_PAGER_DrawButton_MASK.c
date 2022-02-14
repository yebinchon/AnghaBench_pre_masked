
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {scalar_t__ right; scalar_t__ left; scalar_t__ bottom; scalar_t__ top; } ;
typedef TYPE_1__ RECT ;
typedef int INT ;
typedef int HDC ;
typedef int COLORREF ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int) ;



 int VAR_8 ;

 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(HDC VAR_9, COLORREF VAR_10, RECT VAR_11,
                 BOOL VAR_12, BOOL VAR_13, INT VAR_14)
{
    UINT VAR_15;

    FUNC_1("rc = %s, btnState = %d\n", FUNC_2(&VAR_11), VAR_14);

    if (VAR_14 == VAR_8)
        return;

    if ((VAR_11.right - VAR_11.left <= 0) || (VAR_11.bottom - VAR_11.top <= 0))
        return;

    if (VAR_12)
        VAR_15 = VAR_13 ? VAR_4 : VAR_5;
    else
        VAR_15 = VAR_13 ? VAR_6 : VAR_3;

    switch (VAR_14)
    {
    case 129:
        break;
    case 128:
        VAR_15 |= VAR_0;
        break;
    case 131:
        VAR_15 |= VAR_2;
        break;
    case 130:
        VAR_15 |= VAR_1 | VAR_0;
        break;
    }
    FUNC_0( VAR_9, &VAR_11, VAR_7, VAR_15 );
}
