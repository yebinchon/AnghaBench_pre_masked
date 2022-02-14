
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char const*,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1) {
        int VAR_2;

        (void) FUNC_0(VAR_1);

        VAR_2 = FUNC_2("/proc/sys/fs/binfmt_misc/register", VAR_1, VAR_0);
        if (VAR_2 < 0)
                return FUNC_1(VAR_2, "Failed to add binary format: %m");

        return 0;
}
