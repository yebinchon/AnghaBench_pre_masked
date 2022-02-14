
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int byteorder; } ;
typedef TYPE_1__ PyArray_Descr ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static PyArray_Descr *
FUNC_3(PyArray_Descr *VAR_1)
{
    if (FUNC_1(VAR_1->byteorder)) {
        FUNC_2(VAR_1);
        return VAR_1;
    }
    else {
        return FUNC_0(VAR_1, VAR_0);
    }
}
