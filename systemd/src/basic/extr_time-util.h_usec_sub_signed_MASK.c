
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
typedef scalar_t__ int64_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline usec_t FUNC_2(usec_t VAR_0, int64_t VAR_1) {
        if (VAR_1 < 0)
                return FUNC_0(VAR_0, (usec_t) (-VAR_1));
        else
                return FUNC_1(VAR_0, (usec_t) VAR_1);
}
