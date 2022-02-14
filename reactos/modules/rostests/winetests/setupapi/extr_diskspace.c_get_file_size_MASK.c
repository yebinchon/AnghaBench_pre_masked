
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef scalar_t__ LONGLONG ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef scalar_t__ HANDLE ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static LONGLONG FUNC_3(char *VAR_6)
{
    HANDLE VAR_7;
    LARGE_INTEGER VAR_8;

    VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_1 | VAR_2,
                       ((void*)0), VAR_5, VAR_0, ((void*)0));
    if (VAR_7 == VAR_4) return 0;

    if (!FUNC_2(VAR_7, &VAR_8))
        VAR_8.QuadPart = 0;

    FUNC_0(VAR_7);
    return VAR_8.QuadPart;
}
