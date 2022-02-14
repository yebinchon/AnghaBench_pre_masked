
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * f; } ;
struct zip_source {scalar_t__ is_open; int error_source; int * ud; TYPE_1__ cb; int * src; } ;
struct zip {int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 scalar_t__ FUNC_1 (int) ;

struct zip_source *
FUNC_2(struct zip *VAR_2)
{
    struct zip_source *VAR_3;

    if ((VAR_3=(struct zip_source *)FUNC_1(sizeof(*VAR_3))) == ((void*)0)) {
 FUNC_0(&VAR_2->error, VAR_0, 0);
 return ((void*)0);
    }

    VAR_3->src = ((void*)0);
    VAR_3->cb.f = ((void*)0);
    VAR_3->ud = ((void*)0);
    VAR_3->error_source = VAR_1;
    VAR_3->is_open = 0;

    return VAR_3;
}
