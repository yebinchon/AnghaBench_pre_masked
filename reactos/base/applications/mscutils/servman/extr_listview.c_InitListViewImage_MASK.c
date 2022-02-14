
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int hListView; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef scalar_t__ HIMAGELIST ;
typedef scalar_t__ HICON ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int,int,int ) ;
 int FUNC_6 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static VOID
FUNC_7(PMAIN_WND_INFO VAR_11)
{
    HICON VAR_12, VAR_13;
    HIMAGELIST VAR_14, VAR_15;

    VAR_14 = FUNC_3(FUNC_1(VAR_7),
                              FUNC_1(VAR_9),
                              VAR_2 | VAR_1,
                              1,
                              1);
    if (VAR_14)
    {
        VAR_12 = FUNC_5(VAR_10,
                                 FUNC_6(VAR_0),
                                 VAR_3,
                                 16,
                                 16,
                                 0);
        if (VAR_12)
        {
            FUNC_2(VAR_14,
                              VAR_12);
            (void)FUNC_4(VAR_11->hListView,
                                        VAR_14,
                                        VAR_5);

            FUNC_0(VAR_12);
        }
    }

    VAR_15 = FUNC_3(FUNC_1(VAR_6),
                              FUNC_1(VAR_8),
                              VAR_2 | VAR_1,
                              1,
                              1);
    if (VAR_15)
    {
        VAR_13 = FUNC_5(VAR_10,
                                 FUNC_6(VAR_0),
                                 VAR_3,
                                 32,
                                 32,
                                 0);
        if (VAR_13)
        {
            FUNC_2(VAR_15,
                              VAR_13);
            (void)FUNC_4(VAR_11->hListView,
                                        VAR_15,
                                        VAR_4);
            FUNC_0(VAR_13);
        }
    }
}
