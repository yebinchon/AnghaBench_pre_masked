
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dummy; } ;
struct stat {int st_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vo*,char*,char*) ;
 int FUNC_1 (struct vo*,char*,char const*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (char const*,int) ;
 char* FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;

__attribute__((used)) static bool FUNC_6(struct vo *VAR_2, const char *VAR_3)
{
    FUNC_1(VAR_2, "Creating output directory '%s'...\n", VAR_3);
    if (FUNC_3(VAR_3, 0755) < 0) {
        char *VAR_4 = FUNC_4(VAR_1);
        if (VAR_1 == VAR_0) {
            struct stat VAR_5;
            if (FUNC_5(VAR_3, &VAR_5 ) == 0 && FUNC_2(VAR_5.st_mode))
                return 1;
        }
        FUNC_0(VAR_2, "Error creating output directory: %s\n", VAR_4);
        return 0;
    }
    return 1;
}
