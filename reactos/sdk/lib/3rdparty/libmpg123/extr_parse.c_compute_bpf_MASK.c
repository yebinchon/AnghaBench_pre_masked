
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ framesize; } ;
typedef TYPE_1__ mpg123_handle ;



double FUNC_0(mpg123_handle *VAR_0)
{
 return (VAR_0->framesize > 0) ? VAR_0->framesize + 4.0 : 1.0;
}
