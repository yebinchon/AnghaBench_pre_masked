
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szTempMessage ;
typedef int VOID ;
typedef int TCHAR ;
typedef int MCIERROR ;
typedef int HWND ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *,int ,int) ;
 int FUNC_3 (int *,int,int ,int ,int *) ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_6(HWND VAR_7, MCIERROR VAR_8)
{
    TCHAR VAR_9[VAR_2];
    TCHAR VAR_10[VAR_2 + 44];

    if (FUNC_5(VAR_8, VAR_9, FUNC_0(VAR_9)) == VAR_0)
    {
        FUNC_1(VAR_5, VAR_1, VAR_9, FUNC_0(VAR_9));
    }

    FUNC_3(VAR_10, sizeof(VAR_10), FUNC_4("MMSYS%lu: %s"), VAR_8, VAR_9);
    FUNC_2(VAR_7, VAR_10, VAR_6, VAR_4 | VAR_3);
}
