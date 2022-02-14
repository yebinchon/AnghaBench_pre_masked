
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ zip_uint64_t ;
typedef int zip_int64_t ;
struct TYPE_2__ {int (* f ) (int ,void*,scalar_t__,int ) ;int (* l ) (int *,int ,void*,scalar_t__,int ) ;} ;
struct zip_source {int error_source; int ud; int * src; TYPE_1__ cb; int is_open; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,void*,scalar_t__,int ) ;
 int FUNC_1 (int *,int ,void*,scalar_t__,int ) ;

zip_int64_t
FUNC_2(struct zip_source *VAR_6, void *VAR_7, zip_uint64_t VAR_8)
{
    zip_int64_t VAR_9;

    if (!VAR_6->is_open || VAR_8 > VAR_0 || (VAR_8 > 0 && VAR_7 == ((void*)0))) {
 VAR_6->error_source = VAR_1;
 return -1;
    }

    if (VAR_6->src == ((void*)0))
 return VAR_6->cb.f(VAR_6->ud, VAR_7, VAR_8, VAR_5);

    VAR_9 = VAR_6->cb.l(VAR_6->src, VAR_6->ud, VAR_7, VAR_8, VAR_5);

    if (VAR_9 < 0) {
 if (VAR_9 == VAR_4)
     VAR_6->error_source = VAR_2;
 else
     VAR_6->error_source = VAR_3;
 return -1;
    }

    return VAR_9;
}
