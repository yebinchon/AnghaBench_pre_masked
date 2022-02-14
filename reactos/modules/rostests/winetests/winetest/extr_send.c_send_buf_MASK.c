
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCKET ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,size_t,int ) ;

__attribute__((used)) static int
FUNC_1 (SOCKET VAR_1, const char *VAR_2, size_t VAR_3)
{
    int VAR_4;

    while (VAR_3 > 0) {
        VAR_4 = FUNC_0 (VAR_1, VAR_2, VAR_3, 0);
        if (VAR_4 == VAR_0) return 1;
        VAR_2 += VAR_4;
        VAR_3 -= VAR_4;
    }
    return 0;
}
