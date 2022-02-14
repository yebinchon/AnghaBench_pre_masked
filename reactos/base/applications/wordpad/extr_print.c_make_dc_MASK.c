
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ wDeviceOffset; scalar_t__ wDriverOffset; } ;
typedef scalar_t__ LPWSTR ;
typedef TYPE_1__* LPDEVNAMES ;
typedef TYPE_1__* LPDEVMODEW ;
typedef int HDC ;


 int FUNC_0 (scalar_t__,scalar_t__,int ,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static HDC FUNC_3(void)
{
    if(VAR_1 && VAR_0)
    {
        LPDEVNAMES VAR_2 = FUNC_1(VAR_1);
        LPDEVMODEW VAR_3 = FUNC_1(VAR_0);
        HDC VAR_4;

        VAR_4 = FUNC_0((LPWSTR)VAR_2 + VAR_2->wDriverOffset,
                         (LPWSTR)VAR_2 + VAR_2->wDeviceOffset, 0, VAR_3);

        FUNC_2(VAR_2);
        FUNC_2(VAR_3);

        return VAR_4;
    } else
    {
        return 0;
    }
}
