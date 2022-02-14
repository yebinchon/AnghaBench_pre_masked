
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (int,int ,size_t) ;

__attribute__((used)) static int FUNC_4(size_t VAR_5)
{
    int VAR_6 = FUNC_2("mpv", VAR_4 | VAR_3);
    if (VAR_6 < 0)
        return -1;

    FUNC_1(VAR_6, VAR_0, VAR_2 | VAR_1);

    if (FUNC_3(VAR_6, 0, VAR_5) == 0)
        return VAR_6;

    FUNC_0(VAR_6);
    return -1;
}
