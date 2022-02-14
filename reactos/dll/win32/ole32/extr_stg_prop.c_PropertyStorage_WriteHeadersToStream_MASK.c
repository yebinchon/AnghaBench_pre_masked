
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hdr ;
typedef int fmtOffset ;
typedef int ULONG ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_10__ {TYPE_1__ member_0; } ;
struct TYPE_9__ {int stm; } ;
typedef TYPE_2__ PropertyStorage_impl ;
typedef int PROPERTYSETHEADER ;
typedef TYPE_3__ LARGE_INTEGER ;
typedef int HRESULT ;
typedef int FORMATIDOFFSET ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_3__,int ,int *) ;
 int FUNC_2 (int ,int *,int,int*) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(PropertyStorage_impl *VAR_3)
{
    HRESULT VAR_4;
    ULONG VAR_5 = 0;
    LARGE_INTEGER VAR_6 = { {0} };
    PROPERTYSETHEADER VAR_7;
    FORMATIDOFFSET VAR_8;

    VAR_4 = FUNC_1(VAR_3->stm, VAR_6, VAR_1, ((void*)0));
    if (FUNC_0(VAR_4))
        goto end;
    FUNC_4(VAR_3, &VAR_7);
    VAR_4 = FUNC_2(VAR_3->stm, &VAR_7, sizeof(VAR_7), &VAR_5);
    if (FUNC_0(VAR_4))
        goto end;
    if (VAR_5 != sizeof(VAR_7))
    {
        VAR_4 = VAR_0;
        goto end;
    }

    FUNC_3(VAR_3, &VAR_8);
    VAR_4 = FUNC_2(VAR_3->stm, &VAR_8, sizeof(VAR_8), &VAR_5);
    if (FUNC_0(VAR_4))
        goto end;
    if (VAR_5 != sizeof(VAR_8))
    {
        VAR_4 = VAR_0;
        goto end;
    }
    VAR_4 = VAR_2;

end:
    return VAR_4;
}
