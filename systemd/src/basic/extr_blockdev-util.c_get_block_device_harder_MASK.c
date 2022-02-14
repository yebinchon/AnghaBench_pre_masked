
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const dev_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char const,char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int,char*,char const*) ;

int FUNC_4(const char *VAR_0, dev_t *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);




        VAR_2 = FUNC_2(VAR_0, VAR_1);
        if (VAR_2 <= 0)
                return VAR_2;

        VAR_2 = FUNC_1(*VAR_1, VAR_1);
        if (VAR_2 < 0)
                FUNC_3(VAR_2, "Failed to chase block device '%s', ignoring: %m", VAR_0);

        return 1;
}
