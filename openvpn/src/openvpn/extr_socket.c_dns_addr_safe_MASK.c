
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,int,int ) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static bool
FUNC_2(const char *VAR_3)
{
    if (VAR_3)
    {
        const size_t VAR_4 = FUNC_1(VAR_3);
        return VAR_4 > 0 && VAR_4 <= 255 && FUNC_0(VAR_3, VAR_0|VAR_1|VAR_2, 0);
    }
    else
    {
        return 0;
    }
}
