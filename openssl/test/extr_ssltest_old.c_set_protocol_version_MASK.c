
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int *,int,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_1, SSL *VAR_2, int VAR_3)
{
    if (VAR_1 != ((void*)0)) {
        int VAR_4 = FUNC_2(VAR_1);
        if (VAR_4 < 0) {
            FUNC_0(VAR_0, "Error parsing: %s\n", VAR_1);
            return 0;
        }
        return FUNC_1(VAR_2, VAR_3, VAR_4, ((void*)0));
    }
    return 1;
}
