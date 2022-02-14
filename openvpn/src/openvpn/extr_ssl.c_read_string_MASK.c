
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char*,int const) ;
 int FUNC_1 (struct buffer*) ;

__attribute__((used)) static bool
FUNC_2(struct buffer *VAR_0, char *VAR_1, const unsigned int VAR_2)
{
    const int VAR_3 = FUNC_1(VAR_0);
    if (VAR_3 < 1 || VAR_3 > (int)VAR_2)
    {
        return 0;
    }
    if (!FUNC_0(VAR_0, VAR_1, VAR_3))
    {
        return 0;
    }
    VAR_1[VAR_3-1] = '\0';
    return 1;
}
