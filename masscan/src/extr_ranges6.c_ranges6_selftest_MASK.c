
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int targets ;
struct Range6List {int dummy; } ;
struct TYPE_2__ {int hi; int lo; } ;
struct Range6 {TYPE_1__ begin; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct Range6List*,int ,int) ;
 struct Range6 FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 () ;

int
FUNC_4(void)
{
    struct Range6 VAR_0;
    struct Range6List VAR_1[1];

    FUNC_0(FUNC_3() == 0);

    FUNC_1(VAR_1, 0, sizeof(VAR_1[0]));




    VAR_0 = FUNC_2("2001:0db8:85a3:0000:0000:8a2e:0370:7334", 0, 0);
    if (VAR_0.begin.hi != 0x20010db885a30000)
        return 1;
    if (VAR_0.begin.lo != 0x00008a2e03707334)
        return 1;

    return 0;
}
