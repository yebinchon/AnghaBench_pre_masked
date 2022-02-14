
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char const*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(uint64_t (*VAR_3)(uint64_t VAR_4, uint64_t VAR_5),
                             const char *VAR_6, uint64_t VAR_7, uint64_t VAR_8,
                             int VAR_9)
{
    uint64_t VAR_10 = VAR_3(VAR_7, VAR_8);

    if (VAR_9 && VAR_10 != VAR_1) {
        FUNC_1("TRUE %s op failed", VAR_6);
        FUNC_0(VAR_2, "a=%jx b=%jx\n", VAR_7, VAR_8);
        return 0;
    } else if (!VAR_9 && VAR_10 != VAR_0) {
        FUNC_1("FALSE %s op failed", VAR_6);
        FUNC_0(VAR_2, "a=%jx b=%jx\n", VAR_7, VAR_8);
        return 0;
    }
    return 1;
}
