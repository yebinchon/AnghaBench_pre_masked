
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,unsigned long,unsigned long) ;

__attribute__((used)) static inline pid_t FUNC_3(unsigned long VAR_7) {
        pid_t VAR_8;

        FUNC_0((VAR_7 & (VAR_4|VAR_2|VAR_1|
                         VAR_0|VAR_3)) == 0);
        VAR_8 = (pid_t) FUNC_2(VAR_5, VAR_7, ((void*)0));


        if (VAR_8 == 0)
                FUNC_1();

        return VAR_8;
}
