
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TEST_PACKAGE ;
typedef int TEST_CUSTOM_DATA ;
typedef int EXPECTED ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,size_t,int const*,size_t,int const*) ;
 size_t FUNC_2 (int const*,unsigned char**,int) ;

__attribute__((used)) static int FUNC_3(const TEST_CUSTOM_DATA *VAR_0,
                            const EXPECTED *VAR_1, size_t VAR_2,
                            const TEST_PACKAGE *VAR_3)
{
    unsigned char *VAR_4 = ((void*)0);




    size_t VAR_5 = FUNC_2(VAR_0, &VAR_4, 1);
    int VAR_6;

    if (VAR_5 == 0)
        return -1;

    VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_1, VAR_2,
                    VAR_3);
    FUNC_0(VAR_4);

    return VAR_6;
}
