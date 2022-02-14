
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WPARAM ;
struct TYPE_3__ {int * hEdit; int hSelf; } ;
typedef TYPE_1__* PEDIT_WND_INFO ;
typedef scalar_t__ HFONT ;
typedef int * HANDLE ;
typedef int BOOL ;


 int * FUNC_0 (int ,int ,int *,int,int ,int ,int,int,int ,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (char*) ;
 int VAR_12 ;

__attribute__((used)) static BOOL
FUNC_7(PEDIT_WND_INFO VAR_13)
{
    HANDLE VAR_14;
    HFONT VAR_15;

    VAR_14 = FUNC_3(FUNC_6("RICHED20.DLL"));
    if (VAR_14 == ((void*)0))
    {
        FUNC_1(0);
        return VAR_4;
    }

    VAR_13->hEdit = FUNC_0(0,
                                 VAR_5,
                                 ((void*)0),
                                 VAR_8 | VAR_10 | VAR_11 | VAR_9 |
                                   VAR_3 | VAR_2 | VAR_1,
                                 0,
                                 0,
                                 100,
                                 100,
                                 VAR_13->hSelf,
                                 ((void*)0),
                                 VAR_12,
                                 ((void*)0));
    if(VAR_13->hEdit == ((void*)0))
    {
        FUNC_1(0);

        return VAR_4;
    }

    VAR_15 = (HFONT) FUNC_2(VAR_0);
    FUNC_5(VAR_13->hEdit,
                VAR_7,
                (WPARAM)VAR_15,
                FUNC_4(VAR_4, 0));

    return VAR_6;
}
