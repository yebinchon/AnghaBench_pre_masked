
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ActiveImg; scalar_t__ Status; int PrevImg; } ;
typedef TYPE_1__ sBootInfo_t ;
typedef unsigned char _u8 ;
typedef int _i32 ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (unsigned char*,int ) ;
 int FUNC_4 (unsigned char*,int ,int *,int *) ;
 int FUNC_5 (int ,int ,unsigned char*,int) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(sBootInfo_t *VAR_8) {
    _i32 VAR_9;
    _u8 *VAR_10;


    switch (VAR_8->ActiveImg) {
    case 129:
        VAR_10 = (unsigned char *)VAR_6;
        break;
    case 128:
        VAR_10 = (unsigned char *)VAR_7;
        break;
    default:
        VAR_10 = (unsigned char *)VAR_3;
        break;
    }


    if ((VAR_8->ActiveImg != VAR_1) && (VAR_8->Status == VAR_4)) {
        if (!FUNC_1(VAR_10)) {

            FUNC_3(VAR_10, 0);

            VAR_8->ActiveImg = VAR_8->PrevImg;
            VAR_8->PrevImg = VAR_1;
        }

        VAR_8->Status = VAR_5;

        if (!FUNC_4((unsigned char *)VAR_2, VAR_0, ((void*)0), &VAR_9)) {
            FUNC_5(VAR_9, 0, (unsigned char *)VAR_8, sizeof(sBootInfo_t));

            FUNC_2(VAR_9, 0, 0, 0);
        }
    }



    FUNC_6(VAR_8);


    switch (VAR_8->ActiveImg) {
    case 129:
        VAR_10 = (unsigned char *)VAR_6;
        break;
    case 128:
        VAR_10 = (unsigned char *)VAR_7;
        break;
    default:
        VAR_10 = (unsigned char *)VAR_3;
        break;
    }
    FUNC_0(VAR_10);
}
