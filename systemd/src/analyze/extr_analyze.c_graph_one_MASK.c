
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const sd_bus ;
typedef int UnitInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,int const*,char*,char*,char**,char**,char**) ;

__attribute__((used)) static int FUNC_3(sd_bus *VAR_4, const UnitInfo *VAR_5, char *VAR_6[], char *VAR_7[], char *VAR_8[]) {
        int VAR_9;

        FUNC_1(VAR_4);
        FUNC_1(VAR_5);

        if (FUNC_0(VAR_3, VAR_1, VAR_0)) {
                VAR_9 = FUNC_2(VAR_4, VAR_5, "After", "green", VAR_6, VAR_7, VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        if (FUNC_0(VAR_3, VAR_2, VAR_0)) {
                VAR_9 = FUNC_2(VAR_4, VAR_5, "Requires", "black", VAR_6, VAR_7, VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;
                VAR_9 = FUNC_2(VAR_4, VAR_5, "Requisite", "darkblue", VAR_6, VAR_7, VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;
                VAR_9 = FUNC_2(VAR_4, VAR_5, "Wants", "grey66", VAR_6, VAR_7, VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;
                VAR_9 = FUNC_2(VAR_4, VAR_5, "Conflicts", "red", VAR_6, VAR_7, VAR_8);
                if (VAR_9 < 0)
                        return VAR_9;
        }

        return 0;
}
