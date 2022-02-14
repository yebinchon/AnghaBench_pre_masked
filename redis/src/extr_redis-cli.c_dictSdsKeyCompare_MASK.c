
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void const*,void const*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const void *VAR_1,
        const void *VAR_2)
{
    int VAR_3,VAR_4;
    FUNC_0(VAR_0);

    VAR_3 = FUNC_2((sds)VAR_1);
    VAR_4 = FUNC_2((sds)VAR_2);
    if (VAR_3 != VAR_4) return 0;
    return FUNC_1(VAR_1, VAR_2, VAR_3) == 0;
}
