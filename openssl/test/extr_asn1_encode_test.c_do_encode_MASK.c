
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ success; } ;
struct TYPE_6__ {int (* i2d ) (TYPE_2__*,unsigned char**) ;} ;
typedef TYPE_1__ TEST_PACKAGE ;
typedef TYPE_2__ EXPECTED ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char*) ;
 scalar_t__ FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char**) ;

__attribute__((used)) static int FUNC_4(EXPECTED *VAR_0,
                     const unsigned char *VAR_1, size_t VAR_2,
                     const TEST_PACKAGE *VAR_3)
{
    unsigned char *VAR_4 = ((void*)0);
    int VAR_5;
    int VAR_6 = 0;

    VAR_5 = VAR_3->i2d(VAR_0, &VAR_4);
    if (VAR_5 < 0)
        return -1;

    if ((size_t)VAR_5 != VAR_2
        || FUNC_2(VAR_4, VAR_1, VAR_2) != 0) {
        if (VAR_0->success == 0) {
            VAR_6 = 1;
            FUNC_0();
        } else {
            VAR_6 = 0;
        }
    } else {
        VAR_6 = 1;
    }

    FUNC_1(VAR_4);
    return VAR_6;
}
