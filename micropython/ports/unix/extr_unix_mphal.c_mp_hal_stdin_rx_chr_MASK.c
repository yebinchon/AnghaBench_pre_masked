
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,unsigned char*,int) ;

int FUNC_3(void) {
    unsigned char VAR_2;
        int VAR_3 = FUNC_2(0, &VAR_2, 1);
        if (VAR_3 == 0) {
            VAR_2 = 4;
        } else if (VAR_2 == '\n') {
            VAR_2 = '\r';
        }
        return VAR_2;



}
