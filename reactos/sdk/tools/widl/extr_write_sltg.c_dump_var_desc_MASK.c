
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(const char *VAR_4, int VAR_5)
{
    const unsigned char *VAR_6 = (const unsigned char *)VAR_4;
    int VAR_7;

    if (!(VAR_2 & (VAR_1 | VAR_0))) return;

    FUNC_0("dump_var_desc: size %d bytes\n", VAR_5);

    for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
        FUNC_1(VAR_3, " %02x", *VAR_6++);

    FUNC_1(VAR_3, "\n");
}
