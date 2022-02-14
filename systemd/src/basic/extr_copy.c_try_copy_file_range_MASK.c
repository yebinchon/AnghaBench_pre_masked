
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,int *,int,int *,size_t,unsigned int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static ssize_t FUNC_1(
                int VAR_2, loff_t *VAR_3,
                int VAR_4, loff_t *VAR_5,
                size_t VAR_6,
                unsigned VAR_7) {

        static int VAR_8 = -1;
        ssize_t VAR_9;

        if (VAR_8 == 0)
                return -VAR_0;

        VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
        if (VAR_8 < 0)
                VAR_8 = VAR_9 >= 0 || VAR_1 != VAR_0;
        if (VAR_9 < 0)
                return -VAR_1;

        return VAR_9;
}
