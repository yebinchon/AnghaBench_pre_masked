
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline usec_t FUNC_0(usec_t VAR_1, usec_t VAR_2) {
        usec_t VAR_3;




        VAR_3 = VAR_1 + VAR_2;
        if (VAR_3 < VAR_1 || VAR_3 < VAR_2)
                return VAR_0;

        return VAR_3;
}
