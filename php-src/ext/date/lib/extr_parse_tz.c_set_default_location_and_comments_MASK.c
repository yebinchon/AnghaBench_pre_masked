
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* comments; scalar_t__ longitude; scalar_t__ latitude; } ;
struct TYPE_5__ {TYPE_1__ location; } ;
typedef TYPE_2__ timelib_tzinfo ;


 char* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(const unsigned char **VAR_0, timelib_tzinfo *VAR_1)
{
 VAR_1->location.latitude = 0;
 VAR_1->location.longitude = 0;
 VAR_1->location.comments = FUNC_0(2);
 VAR_1->location.comments[0] = '?';
 VAR_1->location.comments[1] = '\0';
}
