
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(int VAR_6)
{
    int VAR_7 = FUNC_0(VAR_6, VAR_1);
    if (VAR_7 < 0)
        FUNC_1("Could not obtain socket flags");
    if (FUNC_0(VAR_6, VAR_3, VAR_7 | VAR_0) < 0)
        FUNC_1("Could not set socket flags");

    VAR_7 = FUNC_0(VAR_6, VAR_2);
    if (VAR_7 < 0)
        FUNC_1("Could not obtain socket flags");
    if (FUNC_0(VAR_6, VAR_4, VAR_7 | VAR_5) < 0)
        FUNC_1("Could not set socket flags");

    return VAR_6;
}
