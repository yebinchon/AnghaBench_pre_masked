
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int len; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {int len; } ;
struct TYPE_6__ {int len; } ;


 int * VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
    VAR_1.len = sizeof("1970/09/28 12:00:00") - 1;
    VAR_4.len = sizeof("Mon, 28 Sep 1970 06:00:00 GMT") - 1;
    VAR_3.len = sizeof("28/Sep/1970:12:00:00 +0600") - 1;
    VAR_2 = sizeof("1970-09-28T12:00:00+06:00") - 1;
    VAR_5.len = sizeof("Sep 28 12:00:00") - 1;

    VAR_6 = &VAR_0[0];

    FUNC_0();
}
