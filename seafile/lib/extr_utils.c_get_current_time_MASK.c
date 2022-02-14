
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int gint64 ;
struct TYPE_3__ {int tv_sec; int tv_usec; } ;
typedef TYPE_1__ GTimeVal ;


 int FUNC_0 (TYPE_1__*) ;

gint64
FUNC_1()
{
    GTimeVal VAR_0;
    gint64 VAR_1;

    FUNC_0 (&VAR_0);
    VAR_1 = VAR_0.tv_sec * (gint64)1000000 + VAR_0.tv_usec;
    return VAR_1;
}
