
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char const*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, const char *VAR_2, int VAR_3)
{
    if (VAR_3 != VAR_1) {
        FUNC_0(VAR_0, "# FATAL: %s != %d\n", VAR_2, VAR_1);
        return 0;
    }
    return 1;
}
