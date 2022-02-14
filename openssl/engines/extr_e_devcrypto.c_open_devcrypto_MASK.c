
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 int VAR_4 ;
 char* FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(void)
{
    if (VAR_2 >= 0)
        return 1;

    if ((VAR_2 = FUNC_1("/dev/crypto", VAR_1, 0)) < 0) {

        if (VAR_3 != VAR_0)

            FUNC_0(VAR_4, "Could not open /dev/crypto: %s\n", FUNC_2(VAR_3));
        return 0;
    }

    return 1;
}
