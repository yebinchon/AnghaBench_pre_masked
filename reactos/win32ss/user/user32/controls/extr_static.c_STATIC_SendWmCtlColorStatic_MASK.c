
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int LPARAM ;
typedef scalar_t__ HWND ;
typedef scalar_t__ HDC ;
typedef scalar_t__ HBRUSH ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static HBRUSH FUNC_4(HWND VAR_1, HDC VAR_2)
{



    HBRUSH VAR_3;
    HWND VAR_4 = FUNC_2(VAR_1);

    if (!VAR_4) VAR_4 = VAR_1;
    VAR_3 = (HBRUSH) FUNC_3( VAR_4,
                    VAR_0, (WPARAM)VAR_2, (LPARAM)VAR_1 );
    if (!VAR_3)
    {


        VAR_3 = (HBRUSH)FUNC_0( VAR_4, VAR_0,
                                        (WPARAM)VAR_2, (LPARAM)VAR_1);
    }
    return VAR_3;

}
