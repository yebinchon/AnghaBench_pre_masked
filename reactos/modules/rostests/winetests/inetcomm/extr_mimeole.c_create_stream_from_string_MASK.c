
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;


 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__,int ,int *) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static IStream *FUNC_5(const char *VAR_3)
{
    LARGE_INTEGER VAR_4;
    IStream *VAR_5;
    HRESULT VAR_6;

    VAR_6 = FUNC_0(((void*)0), VAR_2, &VAR_5);
    FUNC_3(VAR_6 == VAR_1, "ret %08x\n", VAR_6);

    VAR_6 = FUNC_2(VAR_5, VAR_3, FUNC_4(VAR_3), ((void*)0));
    FUNC_3(VAR_6 == VAR_1, "Write failed: %08x\n", VAR_6);

    VAR_4.QuadPart = 0;
    VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_0, ((void*)0));
    FUNC_3(VAR_6 == VAR_1, "Seek failed: %08x\n", VAR_6);

    return VAR_5;
}
