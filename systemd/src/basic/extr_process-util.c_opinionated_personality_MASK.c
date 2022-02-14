
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ) ;

int FUNC_1(unsigned long *VAR_3) {
        int VAR_4;





        VAR_4 = FUNC_0(VAR_0);
        if (VAR_4 < 0)
                return VAR_4;

        if (((unsigned long) VAR_4 & 0xffff) == VAR_2)
                *VAR_3 = VAR_2;
        else
                *VAR_3 = VAR_1;

        return 0;
}
