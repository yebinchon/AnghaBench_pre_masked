
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HWND ;
typedef int HDC ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(HWND VAR_0, HDC VAR_1)
{






    if (FUNC_4(VAR_1) != VAR_0)
        FUNC_3("DC %p does not belong to window %p.\n", VAR_1, VAR_0);
    else if (!FUNC_2(VAR_0, VAR_1))
        FUNC_0("Failed to release device context %p, last error %#x.\n", VAR_1, FUNC_1());
}
