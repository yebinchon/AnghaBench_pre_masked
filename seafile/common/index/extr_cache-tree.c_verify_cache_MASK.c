
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_flags; char* name; int sha1; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cache_entry*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (char*,char const*,char const*) ;
 char* FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_6(struct cache_entry **VAR_2,
                        int VAR_3)
{
    int VAR_4, VAR_5;


    VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        struct cache_entry *VAR_6 = VAR_2[VAR_4];
        if (FUNC_0(VAR_6) || (VAR_6->ce_flags & VAR_0)) {
            if (10 < ++VAR_5) {

                break;
            }
        }
    }
    if (VAR_5)
        return -1;





    VAR_5 = 0;
    for (VAR_4 = 0; VAR_4 < VAR_3 - 1; VAR_4++) {




        const char *VAR_7 = VAR_2[VAR_4]->name;
        const char *VAR_8 = VAR_2[VAR_4+1]->name;
        int VAR_9 = FUNC_4(VAR_7);
        if (VAR_9 < FUNC_4(VAR_8) &&
            FUNC_5(VAR_7, VAR_8, VAR_9) == 0 &&
            VAR_8[VAR_9] == '/') {
            if (10 < ++VAR_5) {
                FUNC_1(VAR_1, "...\n");
                break;
            }
            FUNC_2("You have both %s and %s\n",
                      VAR_7, VAR_8);
        }
    }
    if (VAR_5)
        return -1;
    return 0;
}
