
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zip_source_layered_callback ;
struct TYPE_2__ {int l; } ;
struct zip_source {void* ud; TYPE_1__ cb; struct zip_source* src; } ;
struct zip {int dummy; } ;


 struct zip_source* FUNC_0 (struct zip*) ;

struct zip_source *
FUNC_1(struct zip *VAR_0, struct zip_source *VAR_1,
     zip_source_layered_callback VAR_2, void *VAR_3)
{
    struct zip_source *VAR_4;

    if (VAR_0 == ((void*)0))
 return ((void*)0);

    if ((VAR_4=FUNC_0(VAR_0)) == ((void*)0))
 return ((void*)0);

    VAR_4->src = VAR_1;
    VAR_4->cb.l = VAR_2;
    VAR_4->ud = VAR_3;

    return VAR_4;
}
