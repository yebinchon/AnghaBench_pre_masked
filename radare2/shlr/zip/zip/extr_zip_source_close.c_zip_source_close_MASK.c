
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l ) (struct zip_source*,int ,int *,int ,int ) ;int (* f ) (int ,int *,int ,int ) ;} ;
struct zip_source {scalar_t__ is_open; struct zip_source* src; int ud; TYPE_1__ cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ) ;
 int FUNC_1 (struct zip_source*,int ,int *,int ,int ) ;

void
FUNC_2(struct zip_source *VAR_1)
{
    if (!VAR_1->is_open)
 return;

    if (VAR_1->src == ((void*)0))
 (void)VAR_1->cb.f(VAR_1->ud, ((void*)0), 0, VAR_0);
    else {
 (void)VAR_1->cb.l(VAR_1->src, VAR_1->ud, ((void*)0), 0, VAR_0);
 FUNC_2(VAR_1->src);
    }

    VAR_1->is_open = 0;
}
