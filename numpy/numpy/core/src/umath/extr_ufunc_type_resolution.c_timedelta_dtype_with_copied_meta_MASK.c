
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int meta; } ;
struct TYPE_6__ {scalar_t__ c_metadata; } ;
typedef TYPE_1__ PyArray_Descr ;
typedef int PyArray_DatetimeMetaData ;
typedef TYPE_2__ PyArray_DatetimeDTypeMetaData ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static PyArray_Descr *
FUNC_1(PyArray_Descr *VAR_1)
{
    PyArray_Descr *VAR_2;
    PyArray_DatetimeMetaData *VAR_3, *VAR_4;
    PyArray_DatetimeDTypeMetaData *VAR_5, *VAR_6;

    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6 = ((PyArray_DatetimeDTypeMetaData *)VAR_1->c_metadata);
    VAR_5 = ((PyArray_DatetimeDTypeMetaData *)VAR_2->c_metadata);
    VAR_4 = &(VAR_6->meta);
    VAR_3 = &(VAR_5->meta);

    *VAR_3 = *VAR_4;

    return VAR_2;
}
