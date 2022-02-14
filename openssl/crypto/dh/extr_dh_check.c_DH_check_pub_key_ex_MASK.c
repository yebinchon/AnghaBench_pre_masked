
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int BIGNUM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*,int const*,int*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const DH *VAR_7, const BIGNUM *VAR_8)
{
    int VAR_9 = 0;

    if (!FUNC_0(VAR_7, VAR_8, &VAR_9))
        return 0;

    if ((VAR_9 & VAR_2) != 0)
        FUNC_1(VAR_3, VAR_6);
    if ((VAR_9 & VAR_1) != 0)
        FUNC_1(VAR_3, VAR_5);
    if ((VAR_9 & VAR_0) != 0)
        FUNC_1(VAR_3, VAR_4);

    return VAR_9 == 0;
}
