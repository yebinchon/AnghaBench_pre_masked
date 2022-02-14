
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zip_int64_t ;
struct zip_stat {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* f ) (int ,struct zip_stat*,int,int ) ;scalar_t__ (* l ) (struct zip_source*,int ,struct zip_stat*,int,int ) ;} ;
struct zip_source {void* error_source; int ud; struct zip_source* src; TYPE_1__ cb; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,struct zip_stat*,int,int ) ;
 scalar_t__ FUNC_1 (struct zip_source*,int ,struct zip_stat*,int,int ) ;

int
FUNC_2(struct zip_source *VAR_5, struct zip_stat *VAR_6)
{
    zip_int64_t VAR_7;

    if (VAR_6 == ((void*)0)) {
 VAR_5->error_source = VAR_0;
 return -1;
    }

    if (VAR_5->src == ((void*)0)) {
 if (VAR_5->cb.f(VAR_5->ud, VAR_6, sizeof(*VAR_6), VAR_4) < 0)
     return -1;
 return 0;
    }

    if (FUNC_2(VAR_5->src, VAR_6) < 0) {
 VAR_5->error_source = VAR_1;
 return -1;
    }

    VAR_7 = VAR_5->cb.l(VAR_5->src, VAR_5->ud, VAR_6, sizeof(*VAR_6), VAR_4);

    if (VAR_7 < 0) {
 if (VAR_7 == VAR_3)
     VAR_5->error_source = VAR_1;
 else
     VAR_5->error_source = VAR_2;
 return -1;
    }

    return 0;
}
