
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hbrGray; } ;
struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
typedef TYPE_1__* LPRECT ;
typedef int HDC ;
typedef scalar_t__ HBRUSH ;
typedef scalar_t__ COLORREF ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int,int,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static void FUNC_7( HDC VAR_3, LPRECT VAR_4 )
{
    if(FUNC_1(VAR_1) == FUNC_4(255, 255, 255))
    {
        HBRUSH VAR_5;
        COLORREF VAR_6;

        FUNC_0(VAR_3, VAR_4, FUNC_2(VAR_0));
        VAR_6 = FUNC_6(VAR_3, FUNC_4(255, 255, 255));
        VAR_5 = (HBRUSH)FUNC_5(VAR_3, VAR_2->hbrGray);
        FUNC_3(VAR_3, VAR_4->left, VAR_4->top, VAR_4->right-VAR_4->left, VAR_4->bottom-VAR_4->top, 0x00FA0089);
        FUNC_5(VAR_3, VAR_5);
        FUNC_6(VAR_3, VAR_6);
    }
    else
    {
        FUNC_0(VAR_3, VAR_4, FUNC_2(VAR_1));
    }
}
