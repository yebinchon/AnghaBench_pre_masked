
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,char*) ;
 int VAR_2 ;
 int FUNC_6 (int,char**,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(int VAR_4, char **VAR_5, void *VAR_6) {
        int VAR_7;

        if (FUNC_4(FUNC_3(VAR_3)) > 0)
                return FUNC_5(FUNC_0(VAR_0),
                                       "Refusing to write message data to console, please redirect output to a file.");

        FUNC_1(VAR_1, VAR_3);

        VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_2);
        if (VAR_7 < 0)
                return VAR_7;

        VAR_7 = FUNC_2(VAR_3);
        if (VAR_7 < 0)
                return FUNC_5(VAR_7, "Couldn't write capture file: %m");

        return VAR_7;
}
