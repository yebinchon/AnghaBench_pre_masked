
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,void*,size_t,int) ;

int FUNC_1(int VAR_1, void *VAR_2, size_t VAR_3, bool VAR_4) {
        ssize_t VAR_5;

        VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_5 < 0)
                return (int) VAR_5;
        if ((size_t) VAR_5 != VAR_3)
                return -VAR_0;

        return 0;
}
