
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_6__ {int overflow; scalar_t__ value; int str; } ;
typedef scalar_t__ LONGLONG ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    int VAR_2;
    UNICODE_STRING VAR_3;
    LONGLONG VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
 FUNC_2(&VAR_3, VAR_1[VAR_2].str);
 VAR_4 = FUNC_4(VAR_3.Buffer);
        if (VAR_1[VAR_2].overflow)
            FUNC_1(VAR_4 == VAR_1[VAR_2].value ||
               (VAR_4 == ((VAR_1[VAR_2].overflow == -1) ?
                FUNC_0(0x80000000,0x00000000) : FUNC_0(0x7fffffff,0xffffffff))),
               "(test %d): call failed: _atoi64(\"%s\") has result 0x%s, expected: 0x%s\n",
               VAR_2, VAR_1[VAR_2].str, FUNC_5(VAR_4),
               FUNC_5(VAR_1[VAR_2].value));
        else
            FUNC_1(VAR_4 == VAR_1[VAR_2].value,
               "(test %d): call failed: _atoi64(\"%s\") has result 0x%s, expected: 0x%s\n",
               VAR_2, VAR_1[VAR_2].str, FUNC_5(VAR_4),
               FUNC_5(VAR_1[VAR_2].value));
 FUNC_3(&VAR_3);
    }
}
