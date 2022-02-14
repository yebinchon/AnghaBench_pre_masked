
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int const*,int*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const DH *VAR_19)
{
    int VAR_20 = 0;

    if (!FUNC_0(VAR_19, &VAR_20))
        return 0;

    if ((VAR_20 & VAR_8) != 0)
        FUNC_1(VAR_5, VAR_16);
    if ((VAR_20 & VAR_4) != 0)
        FUNC_1(VAR_5, VAR_13);
    if ((VAR_20 & VAR_1) != 0)
        FUNC_1(VAR_5, VAR_10);
    if ((VAR_20 & VAR_0) != 0)
        FUNC_1(VAR_5, VAR_9);
    if ((VAR_20 & VAR_18) != 0)
        FUNC_1(VAR_5, VAR_17);
    if ((VAR_20 & VAR_2) != 0)
        FUNC_1(VAR_5, VAR_11);
    if ((VAR_20 & VAR_3) != 0)
        FUNC_1(VAR_5, VAR_12);
    if ((VAR_20 & VAR_7) != 0)
        FUNC_1(VAR_5, VAR_15);
    if ((VAR_20 & VAR_6) != 0)
        FUNC_1(VAR_5, VAR_14);

    return VAR_20 == 0;
}
