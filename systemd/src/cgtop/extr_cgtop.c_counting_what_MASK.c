
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static const char* FUNC_0(void) {
        if (VAR_2 == VAR_1)
                return "tasks";
        else if (VAR_2 == VAR_0)
                return "all processes (incl. kernel)";
        else
                return "userspace processes (excl. kernel)";
}
