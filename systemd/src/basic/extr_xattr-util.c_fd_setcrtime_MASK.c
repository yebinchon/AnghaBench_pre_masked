
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef int uint64_t ;
typedef int le64_t ;
typedef int le ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,char*,int *,int,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(int VAR_3, usec_t VAR_4) {
        le64_t VAR_5;

        FUNC_1(VAR_3 >= 0);

        if (FUNC_0(VAR_4, 0, VAR_1))
                VAR_4 = FUNC_4(VAR_0);

        VAR_5 = FUNC_3((uint64_t) VAR_4);
        if (FUNC_2(VAR_3, "user.crtime_usec", &VAR_5, sizeof(VAR_5), 0) < 0)
                return -VAR_2;

        return 0;
}
