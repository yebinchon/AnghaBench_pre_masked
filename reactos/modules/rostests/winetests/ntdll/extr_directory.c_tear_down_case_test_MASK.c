
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,char*,scalar_t__) ;
 int FUNC_4 (char*,char*,char const*,char*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_2)
{
    int VAR_3;
    char VAR_4[VAR_1];

    FUNC_4(VAR_4, "%s\\%s", VAR_2, "TesT");
    VAR_3 = FUNC_0(VAR_4);
    FUNC_3(VAR_3 || (FUNC_1() == VAR_0),
       "Failed to rm %s, error %d\n", VAR_4, FUNC_1());
    FUNC_2(VAR_2);
}
