
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int,int ,int *) ;

__attribute__((used)) static int FUNC_2(int VAR_0, uint64_t VAR_1, uint64_t VAR_2) {
        uint64_t VAR_3, VAR_4;
        bool VAR_5;
        int VAR_6;


        VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2);
        if (VAR_6 < 0)
                return VAR_6;
        VAR_5 = VAR_6 > 0;


        VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_3);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return VAR_5;

        VAR_6 = FUNC_1(VAR_0, VAR_2, &VAR_4);
        if (VAR_6 < 0)
                return VAR_6;
        if (VAR_6 == 0)
                return VAR_5;

        VAR_6 = FUNC_0(VAR_0, VAR_3, VAR_4);
        if (VAR_6 != 0)
                return VAR_6;

        return VAR_5;
}
