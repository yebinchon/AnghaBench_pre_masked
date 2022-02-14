
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int request; } ;
typedef TYPE_1__ Protocol ;
typedef int HRESULT ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_3(Protocol *VAR_3)
{
    BOOL VAR_4;

    VAR_4 = FUNC_2(VAR_3->request, ((void*)0), 0, 0);
    if(!VAR_4 && FUNC_1() != VAR_0) {
        FUNC_0("HttpEndRequest failed: %u\n", FUNC_1());
        return VAR_1;
    }

    return VAR_2;
}
