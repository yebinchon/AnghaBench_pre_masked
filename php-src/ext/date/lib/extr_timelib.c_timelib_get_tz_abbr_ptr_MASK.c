
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* tz_abbr; int sse_uptodate; } ;
typedef TYPE_1__ timelib_time ;


 int FUNC_0 (TYPE_1__*,int *) ;

char *FUNC_1(timelib_time *VAR_0)
{
 if (!VAR_0->sse_uptodate) {
  FUNC_0(VAR_0, ((void*)0));
 };
 return VAR_0->tz_abbr;
}
