
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_POINT ;
typedef int EC_GROUP ;


 int * FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(const EC_GROUP *VAR_1)
{

    const EC_POINT *VAR_2 = FUNC_0(VAR_1);

    if (VAR_2 != ((void*)0) && FUNC_2(VAR_2)) {

        return 1;
    }

    return FUNC_1(VAR_1, VAR_0);
}
