
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num; int base; } ;
typedef TYPE_1__ PyArray_DatetimeMetaData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(PyArray_DatetimeMetaData *VAR_1)
{
    PyArray_DatetimeMetaData VAR_2;

    VAR_2.base = VAR_0;
    VAR_2.num = 1;


    if (FUNC_0(
            VAR_1, &VAR_2, VAR_1, 0, 0) < 0) {
        return -1;
    }
    return 0;
}
