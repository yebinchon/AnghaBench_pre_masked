
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int,char*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, char *VAR_1, int VAR_2)
{
    if (VAR_2 > 0)
    {
        ssize_t VAR_3;
        FUNC_0(VAR_1, 0, VAR_2);
        VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
        VAR_1[VAR_2-1] = 0;
        if (VAR_3 >= 1)
        {
            return (int)VAR_3;
        }
    }
    return -1;
}
