
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef void* ULONG_PTR ;
struct TYPE_7__ {void* dwLower; void* dwUpper; } ;
typedef int SecurePackage ;
typedef int SecHandle ;
typedef int SECURITY_STATUS ;
typedef TYPE_1__* PSecHandle ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,TYPE_1__*,int *,TYPE_1__*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_3(PSecHandle VAR_3,
 SecurePackage *VAR_4, PSecHandle VAR_5)
{
    SECURITY_STATUS VAR_6;

    FUNC_2("%p %p %p\n", VAR_3, VAR_4, VAR_5);

    if (VAR_3 && VAR_4 && VAR_5)
    {
        PSecHandle VAR_7 = FUNC_1(FUNC_0(), 0, sizeof(SecHandle));

        if (VAR_7)
        {
            *VAR_7 = *VAR_5;
            VAR_3->dwUpper = (ULONG_PTR)VAR_4;
            VAR_3->dwLower = (ULONG_PTR)VAR_7;
            VAR_6 = VAR_2;
        }
        else
            VAR_6 = VAR_0;
    }
    else
        VAR_6 = VAR_1;
    return VAR_6;
}
