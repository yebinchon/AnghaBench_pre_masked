
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef int time_t ;
struct TYPE_3__ {int ngx_tm_year; size_t ngx_tm_wday; int ngx_tm_mon; int ngx_tm_sec; int ngx_tm_min; int ngx_tm_hour; int ngx_tm_mday; } ;
typedef TYPE_1__ ngx_tm_t ;


 int * VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int * FUNC_1 (int *,char*,int ,int ,int ,int,int ,int ,int ) ;
 int * VAR_1 ;

u_char *
FUNC_2(u_char *VAR_2, time_t VAR_3)
{
    ngx_tm_t VAR_4;

    FUNC_0(VAR_3, &VAR_4);






    return FUNC_1(VAR_2,
                       (VAR_4.ngx_tm_year > 2037) ?
                                         "%s, %02d-%s-%d %02d:%02d:%02d GMT":
                                         "%s, %02d-%s-%02d %02d:%02d:%02d GMT",
                       VAR_1[VAR_4.ngx_tm_wday],
                       VAR_4.ngx_tm_mday,
                       VAR_0[VAR_4.ngx_tm_mon - 1],
                       (VAR_4.ngx_tm_year > 2037) ? VAR_4.ngx_tm_year:
                                                 VAR_4.ngx_tm_year % 100,
                       VAR_4.ngx_tm_hour,
                       VAR_4.ngx_tm_min,
                       VAR_4.ngx_tm_sec);
}
