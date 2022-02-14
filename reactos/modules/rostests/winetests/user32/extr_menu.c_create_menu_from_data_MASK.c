
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct menu_data {int str; int id; int type; } ;
typedef size_t INT ;
typedef scalar_t__ HMENU ;
typedef int BOOL ;


 int FUNC_0 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,size_t,int ,int ,int ,int ) ;

__attribute__((used)) static HMENU FUNC_6(const struct menu_data *VAR_0, INT VAR_1)
{
    HMENU VAR_2;
    INT VAR_3;
    BOOL VAR_4;

    VAR_2 = FUNC_1();
    FUNC_4(VAR_2 != 0);

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
    {
        FUNC_3(0xdeadbeef);
        VAR_4 = FUNC_0(VAR_2, VAR_0[VAR_3].type, VAR_0[VAR_3].id, VAR_0[VAR_3].str);
        FUNC_5(VAR_4, "%d: AppendMenu(%04x, %04x, %p) error %u\n",
           VAR_3, VAR_0[VAR_3].type, VAR_0[VAR_3].id, VAR_0[VAR_3].str, FUNC_2());
    }
    return VAR_2;
}
