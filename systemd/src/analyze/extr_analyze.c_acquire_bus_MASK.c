
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int **) ;
 int FUNC_2 (int ,int ,int,int **) ;

__attribute__((used)) static int FUNC_3(sd_bus **VAR_5, bool *VAR_6) {
        bool VAR_7 = VAR_3 != VAR_1;
        int VAR_8;

        if (VAR_6 && *VAR_6) {
                VAR_8 = FUNC_1(VAR_4, VAR_2, VAR_7, VAR_5);
                if (FUNC_0(VAR_8, 0, -VAR_0))
                        return VAR_8;

                *VAR_6 = 0;
        }

        return FUNC_2(VAR_4, VAR_2, VAR_7, VAR_5);
}
