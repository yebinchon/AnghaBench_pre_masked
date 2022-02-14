
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_PACKAGE ;
typedef int TEST_CUSTOM_DATA ;
typedef int EXPECTED ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *,unsigned char*,size_t,int const*) ;
 size_t FUNC_2 (int const*,unsigned char**,int ) ;

__attribute__((used)) static int FUNC_3(EXPECTED *VAR_0,
                            const TEST_CUSTOM_DATA *VAR_1,
                            const TEST_PACKAGE *VAR_2)
{
    unsigned char *VAR_3 = ((void*)0);
    size_t VAR_4 = FUNC_2(VAR_1, &VAR_3, 0);
    int VAR_5;

    if (VAR_4 == 0)
        return -1;

    VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4, VAR_2);
    FUNC_0(VAR_3);

    return VAR_5;
}
