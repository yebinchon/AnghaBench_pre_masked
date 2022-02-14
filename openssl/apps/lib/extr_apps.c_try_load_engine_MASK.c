
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,char const*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ENGINE *FUNC_3(const char *VAR_0)
{
    ENGINE *VAR_1 = FUNC_0("dynamic");
    if (VAR_1) {
        if (!FUNC_1(VAR_1, "SO_PATH", VAR_0, 0)
            || !FUNC_1(VAR_1, "LOAD", ((void*)0), 0)) {
            FUNC_2(VAR_1);
            VAR_1 = ((void*)0);
        }
    }
    return VAR_1;
}
