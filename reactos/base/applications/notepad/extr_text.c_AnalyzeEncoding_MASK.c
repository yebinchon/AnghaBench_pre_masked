
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int ENCODING ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const*,int,int*) ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ,int ,char const*,int,int *,int ) ;

ENCODING FUNC_3(const char *VAR_9, DWORD VAR_10)
{
    INT VAR_11 = VAR_7;

    if (VAR_10 <= 1)
        return VAR_1;

    if (FUNC_0(VAR_9, VAR_10))
    {
        return VAR_1;
    }

    if (FUNC_1(VAR_9, VAR_10, &VAR_11))
    {
        return VAR_3;
    }

    if ((VAR_11 & VAR_6) && !(VAR_11 & VAR_5))
    {
        return VAR_2;
    }


    if (FUNC_2(VAR_0, VAR_8, VAR_9, VAR_10, ((void*)0), 0))
    {
        return VAR_4;
    }

    return VAR_1;
}
