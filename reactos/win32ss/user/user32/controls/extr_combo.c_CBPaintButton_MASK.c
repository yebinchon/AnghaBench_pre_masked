
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int wState; } ;
typedef int RECT ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int HDC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static void FUNC_2( LPHEADCOMBO VAR_6, HDC VAR_7, RECT VAR_8)
{
    UINT VAR_9 = VAR_4;

    if( VAR_6->wState & VAR_1 )
      return;


    if (VAR_6->wState & VAR_0)
 VAR_9 |= VAR_3;

    if (FUNC_0(VAR_6))
 VAR_9 |= VAR_2;

    FUNC_1(VAR_7, &VAR_8, VAR_5, VAR_9);
}
