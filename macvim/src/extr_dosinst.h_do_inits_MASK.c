
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static void
FUNC_7(char **VAR_4)
{
    if (FUNC_2(VAR_2, VAR_4[0], VAR_0) == ((void*)0))
    {
 FUNC_4("ERROR: Cannot get name of executable\n");
 FUNC_3(1);
    }

    FUNC_6(VAR_2);


    FUNC_1(VAR_2);



    VAR_3 = FUNC_0("SYSTEMDRIVE");
    if (VAR_3 == ((void*)0) || *VAR_3 == VAR_1)
 VAR_3 = "C:\\";
}
