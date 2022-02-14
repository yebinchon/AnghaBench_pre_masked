
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WPARAM ;
typedef int HWND ;
typedef int * HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;

__attribute__((used)) static HANDLE FUNC_1( HWND VAR_6, WPARAM VAR_7, DWORD VAR_8 )
{
    switch (VAR_8 & VAR_5)
    {
        case 128:
            if ((VAR_7 != VAR_4) &&
                (VAR_7 != VAR_2)) return ((void*)0);
            break;
        case 130:
            if (VAR_7 != VAR_1) return ((void*)0);
            break;
        case 129:
            if (VAR_7 != VAR_3) return ((void*)0);
            break;
        default:
            return ((void*)0);
    }
    return (HANDLE)FUNC_0( VAR_6, VAR_0 );
}
