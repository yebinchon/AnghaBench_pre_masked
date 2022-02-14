
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct detail_data {int dummy; } ;
struct TYPE_3__ {int (* add ) (int ,struct detail_data*) ;} ;
typedef int HWND ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (int ,struct detail_data*) ;

__attribute__((used)) static void FUNC_4(HWND VAR_3, struct detail_data *VAR_4, int VAR_5)
{
    HWND VAR_6 = FUNC_1(VAR_3, VAR_0);

    if (VAR_5 >= 0 && VAR_5 < FUNC_0(VAR_2))
    {
        FUNC_2(VAR_6, VAR_1, 0, 0);
        VAR_2[VAR_5].add(VAR_6, VAR_4);
    }
}
