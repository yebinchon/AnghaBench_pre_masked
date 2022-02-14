
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int *,int *,int ) ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,int,...) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void)
{
    int VAR_0, VAR_1 = 0;
    int VAR_2, VAR_3, VAR_4 = -1, VAR_5 = -1;

    for (VAR_0 = 0; FUNC_1(&VAR_2, &VAR_3, VAR_0) != 0; VAR_0++) {
        if (!FUNC_4(FUNC_0(VAR_2, VAR_3, ((void*)0), ((void*)0), 0))) {
            FUNC_3("i=%d, pbe_type=%d, pbe_nid=%d", VAR_0, VAR_2, VAR_3);
            VAR_1 = 1;
            break;
        }
    }

    if (!VAR_1)
        return 1;


    for (VAR_0 = 0; FUNC_1(&VAR_2, &VAR_3, VAR_0) != 0; VAR_0++) {
        VAR_1 = VAR_2 < VAR_4
                 || (VAR_2 == VAR_4 && VAR_3 < VAR_5);
        FUNC_3("PBE type=%d %d (%s): %s\n", VAR_2, VAR_3,
                  FUNC_2(VAR_3), VAR_1 ? "ERROR" : "OK");
        VAR_4 = VAR_2;
        VAR_5 = VAR_3;
    }
    return 0;
}
