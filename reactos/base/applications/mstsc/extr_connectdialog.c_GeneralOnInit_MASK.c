
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WPARAM ;
typedef int VOID ;
struct TYPE_5__ {void* hConn; int hGeneralPage; void* hLogon; } ;
typedef TYPE_1__* PINFO ;
typedef int LONG_PTR ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,int ,int ,int,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int *,int,int,int ,int ,int) ;
 int VAR_12 ;

__attribute__((used)) static VOID
FUNC_7(HWND VAR_13,
              PINFO VAR_14)
{
    FUNC_5(VAR_13,
                      VAR_0,
                      (LONG_PTR)VAR_14);

    VAR_14->hGeneralPage = VAR_13;

    FUNC_6(VAR_14->hGeneralPage,
                 ((void*)0),
                 2,
                 22,
                 0,
                 0,
                 VAR_8 | VAR_9 | VAR_10 | VAR_11);

    VAR_14->hLogon = FUNC_1(VAR_12,
                               FUNC_2(VAR_4),
                               VAR_5,
                               32,
                               32,
                               VAR_6);
    if (VAR_14->hLogon)
    {
        FUNC_4(VAR_14->hGeneralPage,
                            VAR_2,
                            VAR_7,
                            (WPARAM)VAR_14->hLogon,
                            0);
    }

    VAR_14->hConn = FUNC_1(VAR_12,
                              FUNC_2(VAR_3),
                              VAR_5,
                              32,
                              32,
                              VAR_6);
    if (VAR_14->hConn)
    {
        FUNC_4(VAR_14->hGeneralPage,
                            VAR_1,
                            VAR_7,
                            (WPARAM)VAR_14->hConn,
                            0);
    }

    FUNC_0(VAR_14);
    FUNC_3(VAR_14);
}
