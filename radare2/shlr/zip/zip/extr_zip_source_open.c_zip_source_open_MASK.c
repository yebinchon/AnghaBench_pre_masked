
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zip_int64_t ;
struct TYPE_2__ {scalar_t__ (* f ) (int ,int *,int ,int ) ;scalar_t__ (* l ) (struct zip_source*,int ,int *,int ,int ) ;} ;
struct zip_source {int is_open; void* error_source; struct zip_source* src; int ud; TYPE_1__ cb; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct zip_source*,int ,int *,int ,int ) ;
 int FUNC_2 (struct zip_source*) ;

int
FUNC_3(struct zip_source *VAR_5)
{
    zip_int64_t VAR_6;

    if (VAR_5->is_open) {
 VAR_5->error_source = VAR_0;
 return -1;
    }

    if (VAR_5->src == ((void*)0)) {
 if (VAR_5->cb.f(VAR_5->ud, ((void*)0), 0, VAR_4) < 0)
     return -1;
    }
    else {
 if (FUNC_3(VAR_5->src) < 0) {
     VAR_5->error_source = VAR_1;
     return -1;
 }

 VAR_6 = VAR_5->cb.l(VAR_5->src, VAR_5->ud, ((void*)0), 0, VAR_4);

 if (VAR_6 < 0) {
     FUNC_2(VAR_5->src);

     if (VAR_6 == VAR_3)
  VAR_5->error_source = VAR_1;
     else
  VAR_5->error_source = VAR_2;
     return -1;
 }
    }

    VAR_5->is_open = 1;

    return 0;
}
