
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
typedef scalar_t__ uint64_t ;
typedef int le64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(le64_t VAR_1, usec_t *VAR_2) {
        uint64_t VAR_3;

        FUNC_1(VAR_2);

        VAR_3 = FUNC_2(VAR_1);
        if (FUNC_0(VAR_3, 0, (uint64_t) -1))
                return -VAR_0;

        *VAR_2 = (usec_t) VAR_3;
        return 0;
}
