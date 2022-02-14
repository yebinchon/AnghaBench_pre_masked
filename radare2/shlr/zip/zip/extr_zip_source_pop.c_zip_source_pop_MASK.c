
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l ) (struct zip_source*,int ,int *,int ,int ) ;} ;
struct zip_source {int ud; TYPE_1__ cb; scalar_t__ is_open; struct zip_source* src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zip_source*) ;
 int FUNC_1 (struct zip_source*,int ,int *,int ,int ) ;
 int FUNC_2 (struct zip_source*,int ,int *,int ,int ) ;
 int FUNC_3 (struct zip_source*) ;

struct zip_source *
FUNC_4(struct zip_source *VAR_2)
{
    struct zip_source *VAR_3;

    if (VAR_2 == ((void*)0))
 return ((void*)0);

    VAR_3 = VAR_2->src;

    if (VAR_3 == ((void*)0))
 FUNC_3(VAR_2);
    else {
 if (VAR_2->is_open)
     (void)VAR_2->cb.l(VAR_2, VAR_2->ud, ((void*)0), 0, VAR_0);
 (void)VAR_2->cb.l(VAR_2, VAR_2->ud, ((void*)0), 0, VAR_1);

 FUNC_0(VAR_2);
    }

    return VAR_3;
}
