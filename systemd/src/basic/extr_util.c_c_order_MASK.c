
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_0) {
        if (VAR_0 == 0 || FUNC_0(VAR_0))
                return 0;

        if ((VAR_0 >= 'a') && (VAR_0 <= 'z'))
                return VAR_0;

        return VAR_0 + 0x10000;
}
