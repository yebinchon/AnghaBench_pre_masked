
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int BtrfsQuotaInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int,int ,int *) ;

int FUNC_3(int VAR_0, uint64_t VAR_1, BtrfsQuotaInfo *VAR_2) {
        uint64_t VAR_3;
        int VAR_4;

        FUNC_0(VAR_0 >= 0);
        FUNC_0(*VAR_2);
        VAR_4 = FUNC_2(VAR_0, VAR_1, &VAR_3);
        if (VAR_4 < 0)
                return VAR_4;

        return FUNC_1(VAR_0, VAR_3, VAR_2);
}
