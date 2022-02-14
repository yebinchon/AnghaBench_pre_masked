
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* i2d ) (void*,unsigned char**) ;} ;
typedef TYPE_1__ TEST_PACKAGE ;
typedef int EXPECTED ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (unsigned char*,int,int *,long,TYPE_1__ const*) ;
 int FUNC_2 (void*,unsigned char**) ;

__attribute__((used)) static int FUNC_3(EXPECTED *VAR_0, long VAR_1,
                      const TEST_PACKAGE *VAR_2)
{
    unsigned char *VAR_3 = ((void*)0);
    int VAR_4;
    int VAR_5 = 0;
    void *VAR_6 = VAR_0;

    VAR_4 = VAR_2->i2d(VAR_6, &VAR_3);
    if (VAR_4 < 0)
        return -1;

    VAR_5 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_1, VAR_2);
    FUNC_0(VAR_3);
    return VAR_5;
}
