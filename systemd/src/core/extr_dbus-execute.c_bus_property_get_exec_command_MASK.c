
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef int ExecCommand ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char,char*) ;

int FUNC_4(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        ExecCommand *VAR_7 = (ExecCommand*) VAR_5;
        int VAR_8;

        FUNC_1(VAR_0);
        FUNC_1(VAR_4);

        VAR_8 = FUNC_3(VAR_4, 'a', "(sasbttttuii)");
        if (VAR_8 < 0)
                return VAR_8;

        VAR_8 = FUNC_0(VAR_4, VAR_7);
        if (VAR_8 < 0)
                return VAR_8;

        return FUNC_2(VAR_4);
}
