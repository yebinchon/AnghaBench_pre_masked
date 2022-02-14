
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int,char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(BOOL VAR_3)
{
    LONG VAR_4;


    VAR_4 = FUNC_0(VAR_2, "Software\\Wine\\setupapitest");
    FUNC_1((VAR_3 && VAR_4 == VAR_1) ||
       (!VAR_3 && VAR_4 == VAR_0),
       "Expected registry key Software\\Wine\\setupapitest to %s, RegDeleteKey returned %d\n",
       VAR_3 ? "exist" : "not exist",
       VAR_4);
}
