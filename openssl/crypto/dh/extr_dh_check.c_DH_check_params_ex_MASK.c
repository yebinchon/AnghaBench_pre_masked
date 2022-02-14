
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
 int FUNC_0 (int const*,int*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const DH *VAR_9)
{
    int VAR_10 = 0;

    if (!FUNC_0(VAR_9, &VAR_10))
        return 0;

    if ((VAR_10 & VAR_0) != 0)
        FUNC_1(VAR_1, VAR_5);
    if ((VAR_10 & VAR_4) != 0)
        FUNC_1(VAR_1, VAR_8);
    if ((VAR_10 & VAR_3) != 0)
        FUNC_1(VAR_1, VAR_7);
    if ((VAR_10 & VAR_2) != 0)
        FUNC_1(VAR_1, VAR_6);

    return VAR_10 == 0;
}
