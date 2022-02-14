
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_2; int member_3; int member_1; int member_0; } ;
typedef TYPE_1__ RECT ;
typedef int IOleObject ;
typedef scalar_t__ HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int,int ,TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 int FUNC_3 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(IOleObject *VAR_10)
{
    RECT VAR_11 = {0,0,500,500};
    HRESULT VAR_12;

    if(!VAR_8) {
        FUNC_2(VAR_2);
        FUNC_2(VAR_3);
    }
    FUNC_2(VAR_0);
    VAR_9 = VAR_6;

    VAR_12 = FUNC_1(VAR_10, VAR_4, ((void*)0), &VAR_1, -1, VAR_7, &VAR_11);
    FUNC_3(VAR_12 == VAR_5, "DoVerb failed: %08x\n", VAR_12);

    if(!VAR_8) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        VAR_8 = VAR_6;
    }
    FUNC_0(VAR_0);
}
