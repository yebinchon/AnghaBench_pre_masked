
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_id128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char**,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(bool VAR_3, sd_id128_t *VAR_4) {
        char *VAR_5;
        int VAR_6;

        VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_5, VAR_4);
        if (VAR_6 == -VAR_0) {
                FUNC_3(VAR_6, "Didn't find an XBOOTLDR partition, using the ESP as $BOOT.");
                if (VAR_4)
                        *VAR_4 = VAR_1;
                VAR_2 = FUNC_4(VAR_2);
                return 0;
        }
        if (VAR_6 < 0)
                return VAR_6;

        FUNC_1(VAR_2, VAR_5);
        FUNC_2("Using XBOOTLDR partition at %s as $BOOT.", VAR_2);

        return 1;
}
