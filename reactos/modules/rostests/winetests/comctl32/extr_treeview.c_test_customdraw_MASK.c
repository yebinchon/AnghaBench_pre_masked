
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lf ;
typedef int WPARAM ;
struct TYPE_4__ {int lfHeight; } ;
typedef TYPE_1__ LOGFONTA ;
typedef int HWND ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int * VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (int ,int ,int ,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_11(void)
{
    LOGFONTA VAR_11;
    HWND VAR_12;

    VAR_12 = FUNC_7(0);
    FUNC_8(VAR_12);
    FUNC_4(VAR_12, VAR_6, VAR_5, (WPARAM)VAR_8);


    FUNC_5(VAR_3, sizeof(VAR_11), &VAR_11, 0);
    VAR_11.lfHeight *= 2;
    VAR_7 = FUNC_0(&VAR_11);
    FUNC_9(VAR_10, VAR_1);
    FUNC_3(VAR_12, ((void*)0), VAR_4);
    FUNC_6(VAR_12);
    FUNC_10(VAR_10, VAR_2, VAR_9, "custom draw notifications", VAR_0);
    FUNC_1(VAR_7);
    VAR_7 = ((void*)0);

    FUNC_2(VAR_12);
}
