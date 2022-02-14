
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,int ) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,int) ;

__attribute__((used)) static void FUNC_7(const char* VAR_2)
{
    int VAR_3 = FUNC_0(VAR_2);
    char VAR_4[32];
    int VAR_5;

    VAR_5 =FUNC_6(VAR_3, "Success", 8);
    FUNC_3( VAR_5 == 8, "Couldn't write in child process on %d (%s)\n", VAR_3, FUNC_5(VAR_1));
    FUNC_1(VAR_3, 0, VAR_0);
    FUNC_3(FUNC_4(VAR_3, VAR_4, sizeof (VAR_4)) == 8, "Couldn't read back the data\n");
    FUNC_3(FUNC_2(VAR_4, "Success", 8) == 0, "Couldn't read back the data\n");
}
