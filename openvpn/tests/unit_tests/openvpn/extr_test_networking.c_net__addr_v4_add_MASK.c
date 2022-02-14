
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int *,char*,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int,char*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, int VAR_3)
{
    in_addr_t VAR_4;
    int VAR_5;

    VAR_5 = FUNC_0(VAR_0, VAR_2, &VAR_4);
    if (VAR_5 != 1)
        return -1;

    VAR_4 = FUNC_2(VAR_4);

    FUNC_3("CMD: ip addr add %s/%d dev %s\n", VAR_2, VAR_3, VAR_1);

    return FUNC_1(((void*)0), VAR_1, &VAR_4, VAR_3);
}
