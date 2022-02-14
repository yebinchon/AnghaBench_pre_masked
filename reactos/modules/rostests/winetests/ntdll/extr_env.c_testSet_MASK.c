
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int *,char*,char*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    LPWSTR VAR_4;
    char VAR_5[16];
    int VAR_6;

    FUNC_0(FUNC_1(VAR_0, &VAR_4) == VAR_2, "Creating environment\n");

    FUNC_4(&VAR_4, "cat", "dog", VAR_2, 0);
    FUNC_4(&VAR_4, "cat", "horse", VAR_2, 0);
    FUNC_4(&VAR_4, "cat", "zz", VAR_2, 0);
    FUNC_4(&VAR_4, "cat", ((void*)0), VAR_2, 0);
    FUNC_4(&VAR_4, "cat", ((void*)0), VAR_2, VAR_3);
    FUNC_4(&VAR_4, "foo", "meouw", VAR_2, 0);
    FUNC_4(&VAR_4, "me=too", "also", VAR_2, VAR_1);
    FUNC_4(&VAR_4, "me", "too=also", VAR_2, 0);
    FUNC_4(&VAR_4, "=too", "also", VAR_2, 0);
    FUNC_4(&VAR_4, "=", "also", VAR_2, 0);

    for (VAR_6 = 0; VAR_6 < 128; VAR_6++)
    {
        FUNC_3(VAR_5, "zork%03d", VAR_6);
        FUNC_4(&VAR_4, VAR_5, "is alive", VAR_2, 0);
    }

    for (VAR_6 = 0; VAR_6 < 128; VAR_6++)
    {
        FUNC_3(VAR_5, "zork%03d", VAR_6);
        FUNC_4(&VAR_4, VAR_5, ((void*)0), VAR_2, 0);
    }
    FUNC_4(&VAR_4, "fOo", ((void*)0), VAR_2, 0);

    FUNC_0(FUNC_2(VAR_4) == VAR_2, "Destroying environment\n");
}
