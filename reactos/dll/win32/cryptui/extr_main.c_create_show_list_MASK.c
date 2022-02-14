
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct detail_data {int dummy; } ;
struct TYPE_5__ {int id; } ;
typedef TYPE_1__ WCHAR ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,TYPE_1__*,int) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int,int ) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

__attribute__((used)) static void FUNC_4(HWND VAR_7, struct detail_data *VAR_8)
{
    HWND VAR_9 = FUNC_1(VAR_7, VAR_3);
    WCHAR VAR_10[VAR_4];
    int VAR_11;

    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_6); VAR_11++)
    {
        int VAR_12;

        FUNC_2(VAR_5, VAR_6[VAR_11].id, VAR_10, FUNC_0(VAR_10));
        VAR_12 = FUNC_3(VAR_9, VAR_0, -1, (LPARAM)VAR_10);
        FUNC_3(VAR_9, VAR_2, VAR_12, (LPARAM)VAR_8);
    }
    FUNC_3(VAR_9, VAR_1, 0, 0);
}
