
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_4__ {scalar_t__ self; int owner; } ;
typedef TYPE_1__* LPHEADCOMBO ;
typedef int LPARAM ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static HBRUSH FUNC_5(
        LPHEADCOMBO VAR_4,
        HDC VAR_5)
{
    HBRUSH VAR_6;




    if (FUNC_0(VAR_4))
    {
        VAR_6 = (HBRUSH)FUNC_3(VAR_4->owner, VAR_3,
                (WPARAM)VAR_5, (LPARAM)VAR_4->self );






        FUNC_4(VAR_5, FUNC_1(VAR_0));
    }
    else
    {

        VAR_6 = (HBRUSH)FUNC_3(VAR_4->owner, VAR_2,
                (WPARAM)VAR_5, (LPARAM)VAR_4->self );
    }




    if( !VAR_6 )
        VAR_6 = FUNC_2(VAR_1);

    return VAR_6;
}
