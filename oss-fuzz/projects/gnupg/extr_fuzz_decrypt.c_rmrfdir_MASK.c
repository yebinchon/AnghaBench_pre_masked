
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(char *VAR_2)
{
    FUNC_0(VAR_2, VAR_1, 16);
    if (FUNC_2(VAR_2) != 0) {
        FUNC_1("failed rmdir, errno=%d\n", VAR_0);
    }
}
