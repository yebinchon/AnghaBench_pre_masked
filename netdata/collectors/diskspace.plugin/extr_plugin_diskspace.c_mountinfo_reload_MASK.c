
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(int VAR_2) {
    static time_t VAR_3 = 0;
    time_t VAR_4 = FUNC_2();

    if(VAR_2 || VAR_4 - VAR_3 >= VAR_0) {

        FUNC_0(VAR_1);


        VAR_1 = FUNC_1(0);

        VAR_3 = VAR_4;
    }
}
