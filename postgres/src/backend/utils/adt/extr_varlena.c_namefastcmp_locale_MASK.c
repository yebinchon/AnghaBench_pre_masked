
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SortSupport ;
typedef int * Name ;
typedef int Datum ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(Datum VAR_0, Datum VAR_1, SortSupport VAR_2)
{
 Name VAR_3 = FUNC_0(VAR_0);
 Name VAR_4 = FUNC_0(VAR_1);

 return FUNC_3(FUNC_1(*VAR_3), FUNC_2(FUNC_1(*VAR_3)),
        FUNC_1(*VAR_4), FUNC_2(FUNC_1(*VAR_4)),
        VAR_2);
}
