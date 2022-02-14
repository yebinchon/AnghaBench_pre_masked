
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef int Automount ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int *,int,int ) ;
 int FUNC_3 (int ,char*,int **) ;

__attribute__((used)) static int FUNC_4(Automount *VAR_3) {
        Unit *VAR_4;
        int VAR_5;

        FUNC_1(VAR_3);

        VAR_5 = FUNC_3(FUNC_0(VAR_3), ".mount", &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_2(FUNC_0(VAR_3), VAR_0, VAR_2, VAR_4, 1, VAR_1);
}
