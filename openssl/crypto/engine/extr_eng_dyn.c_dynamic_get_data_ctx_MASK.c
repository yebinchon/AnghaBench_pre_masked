
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dynamic_data_ctx ;
typedef int ENGINE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int *,int *,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int **) ;
 int VAR_4 ;

__attribute__((used)) static dynamic_data_ctx *FUNC_6(ENGINE *VAR_5)
{
    dynamic_data_ctx *VAR_6;
    if (VAR_3 < 0) {





        int VAR_7 = FUNC_3(0, ((void*)0), ((void*)0), ((void*)0),
                                              VAR_2);
        if (VAR_7 == -1) {
            FUNC_4(VAR_0, VAR_1);
            return ((void*)0);
        }
        FUNC_1(VAR_4);

        if (VAR_3 < 0) {

            VAR_3 = VAR_7;
            VAR_7 = -1;
        }
        FUNC_0(VAR_4);




    }
    VAR_6 = (dynamic_data_ctx *)FUNC_2(VAR_5, VAR_3);

    if ((VAR_6 == ((void*)0)) && !FUNC_5(VAR_5, &VAR_6))

        return ((void*)0);
    return VAR_6;
}
