
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;
typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *,int *,char*,char*,char*,char*,int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(Manager *VAR_1, sd_bus *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_1);
        FUNC_0(VAR_2);

        VAR_3 = FUNC_2(
                        VAR_2,
                        ((void*)0),
                        "org.freedesktop.DBus.Local",
                        "/org/freedesktop/DBus/Local",
                        "org.freedesktop.DBus.Local",
                        "Disconnected",
                        VAR_0, ((void*)0), VAR_1);
        if (VAR_3 < 0)
                return FUNC_1(VAR_3, "Failed to request match for Disconnected message: %m");

        return 0;
}
