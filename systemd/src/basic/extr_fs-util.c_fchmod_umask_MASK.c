
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_1, mode_t VAR_2) {
        mode_t VAR_3;
        int VAR_4;

        VAR_3 = FUNC_1(0777);
        VAR_4 = FUNC_0(VAR_1, VAR_2 & (~VAR_3)) < 0 ? -VAR_0 : 0;
        FUNC_1(VAR_3);

        return VAR_4;
}
