
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const sd_bus_message ;
typedef int sd_bus_error ;
typedef char const sd_bus ;
typedef char const ExecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,char*,int ) ;
 char const* FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(
                sd_bus *VAR_3,
                const char *VAR_4,
                const char *VAR_5,
                const char *VAR_6,
                sd_bus_message *VAR_7,
                void *VAR_8,
                sd_bus_error *VAR_9) {

        ExecContext *VAR_10 = VAR_8;
        int VAR_11;

        FUNC_0(VAR_3);
        FUNC_0(VAR_10);
        FUNC_0(VAR_6);
        FUNC_0(VAR_7);

        if (FUNC_3(VAR_6, "StandardInputFileDescriptorName"))
                VAR_11 = VAR_1;
        else if (FUNC_3(VAR_6, "StandardOutputFileDescriptorName"))
                VAR_11 = VAR_2;
        else {
                FUNC_0(FUNC_3(VAR_6, "StandardErrorFileDescriptorName"));
                VAR_11 = VAR_0;
        }

        return FUNC_2(VAR_7, "s", FUNC_1(VAR_10, VAR_11));
}
