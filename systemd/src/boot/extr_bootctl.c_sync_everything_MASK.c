
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(void) {
        int VAR_3 = 0, VAR_4;

        if (VAR_1) {
                VAR_4 = FUNC_1(VAR_0, VAR_1);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_0(VAR_4, "Failed to synchronize the ESP '%s': %m", VAR_1);
        }

        if (VAR_2) {
                VAR_4 = FUNC_1(VAR_0, VAR_2);
                if (VAR_4 < 0)
                        VAR_3 = FUNC_0(VAR_4, "Failed to synchronize $BOOT '%s': %m", VAR_2);
        }

        return VAR_3;
}
