
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULARGE_INTEGER ;
struct TYPE_6__ {scalar_t__ QuadPart; } ;
struct TYPE_5__ {int cbSize; int * member_0; } ;
typedef TYPE_1__ STATSTG ;
typedef TYPE_2__ LARGE_INTEGER ;
typedef int IStream ;
typedef int HRESULT ;


 int FUNC_0 (int *,TYPE_2__,int ,int *) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(IStream *VAR_3, ULARGE_INTEGER *VAR_4)
{
    STATSTG VAR_5 = {((void*)0)};
    LARGE_INTEGER VAR_6;
    HRESULT VAR_7;

    VAR_7 = FUNC_1(VAR_3, &VAR_5, VAR_0);
    if(FUNC_2(VAR_7)) {
        *VAR_4 = VAR_5.cbSize;
        return VAR_2;
    }

    VAR_6.QuadPart = 0;
    return FUNC_0(VAR_3, VAR_6, VAR_1, VAR_4);
}
