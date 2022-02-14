
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_GROUP ;
typedef int ECPKPARAMETERS ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned char**) ;

int FUNC_4(const EC_GROUP *VAR_3, unsigned char **VAR_4)
{
    int VAR_5 = 0;
    ECPKPARAMETERS *VAR_6 = FUNC_1(VAR_3, ((void*)0));
    if (VAR_6 == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return 0;
    }
    if ((VAR_5 = FUNC_3(VAR_6, VAR_4)) == 0) {
        FUNC_2(VAR_0, VAR_2);
        FUNC_0(VAR_6);
        return 0;
    }
    FUNC_0(VAR_6);
    return VAR_5;
}
