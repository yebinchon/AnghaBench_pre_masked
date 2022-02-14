
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int ,char const*,int *) ;
 int FUNC_1 (int *,int *,int,int *,char*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, int VAR_3, const char *VAR_4,
                     int VAR_5)
{
    in_addr_t VAR_6, VAR_7;
    int VAR_8;

    if (!VAR_2 || !VAR_4)
        return -1;

    VAR_8 = FUNC_0(VAR_0, VAR_2, &VAR_6);
    if (VAR_8 != 1)
        return -1;

    VAR_8 = FUNC_0(VAR_0, VAR_4, &VAR_7);
    if (VAR_8 != 1)
        return -1;

    VAR_6 = FUNC_2(VAR_6);
    VAR_7 = FUNC_2(VAR_7);

    FUNC_3("CMD: ip route add %s/%d dev %s via %s", VAR_2, VAR_3, VAR_1,
           VAR_4);
    if (VAR_5 > 0)
        FUNC_3(" metric %d", VAR_5);
    FUNC_3("\n");

    return FUNC_1(((void*)0), &VAR_6, VAR_3, &VAR_7, VAR_1, 0, VAR_5);
}
