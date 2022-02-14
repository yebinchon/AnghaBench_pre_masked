
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int _u8 ;
typedef int _i32 ;
struct TYPE_3__ {scalar_t__ FileLen; } ;
typedef TYPE_1__ SlFsFileInfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_4 (int ,int ,unsigned char*,scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6 (_u8 *VAR_3) {
    SlFsFileInfo_t VAR_4;
    _i32 VAR_5;

    if (!FUNC_3(VAR_3, VAR_1, ((void*)0), &VAR_5)) {

        if (!FUNC_2(VAR_3, 0, &VAR_4)) {

            if (VAR_4.FileLen == FUNC_4(VAR_5, 0, (unsigned char *)VAR_0, VAR_4.FileLen)) {

                FUNC_1(VAR_5, 0, 0, 0);

                FUNC_5(VAR_2);

                FUNC_0(VAR_0);
            }
        }
    }
}
