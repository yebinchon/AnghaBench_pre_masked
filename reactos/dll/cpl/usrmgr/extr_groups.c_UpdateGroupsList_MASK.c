
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lvi ;
typedef int VOID ;
struct TYPE_7__ {int mask; scalar_t__ iImage; scalar_t__ state; int pszText; } ;
struct TYPE_6__ {int lgrpi1_comment; int lgrpi1_name; } ;
typedef TYPE_1__* PLOCALGROUP_INFO_1 ;
typedef int NET_API_STATUS ;
typedef TYPE_2__ LV_ITEM ;
typedef int LPBYTE ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD_PTR ;
typedef size_t DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int,int *,int,size_t*,size_t*,int *) ;
 int FUNC_4 (TYPE_2__*,int,int) ;

__attribute__((used)) static VOID
FUNC_5(HWND VAR_5)
{
    NET_API_STATUS VAR_6;
    PLOCALGROUP_INFO_1 VAR_7;
    DWORD VAR_8;
    DWORD VAR_9;
    DWORD_PTR VAR_10 = 0;
    DWORD VAR_11;
    LV_ITEM VAR_12;
    INT VAR_13;

    for (;;)
    {
        VAR_6 = FUNC_3(((void*)0), 1, (LPBYTE*)&VAR_7,
                                      1024, &VAR_8,
                                      &VAR_9, &VAR_10);
        if (VAR_6 != VAR_4 && VAR_6 != VAR_0)
            break;

        for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++)
        {
           FUNC_4(&VAR_12, 0x00, sizeof(VAR_12));
           VAR_12.mask = VAR_3 | VAR_2 | VAR_1;
           VAR_12.pszText = VAR_7[VAR_11].lgrpi1_name;
           VAR_12.state = 0;
           VAR_12.iImage = 0;
           VAR_13 = FUNC_0(VAR_5, &VAR_12);

           FUNC_1(VAR_5, VAR_13, 1,
                                VAR_7[VAR_11].lgrpi1_comment);
        }

        FUNC_2(VAR_7);


        if (VAR_6 != VAR_0)
            break;
    }

}
