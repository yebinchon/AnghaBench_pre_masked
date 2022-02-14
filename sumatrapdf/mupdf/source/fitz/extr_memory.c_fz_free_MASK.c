
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int user; int (* free ) (int ,void*) ;} ;
struct TYPE_7__ {TYPE_1__ alloc; } ;
typedef TYPE_2__ fz_context ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,void*) ;

void
FUNC_3(fz_context *VAR_1, void *VAR_2)
{
 if (VAR_2)
 {
  FUNC_0(VAR_1, VAR_0);
  VAR_1->alloc.free(VAR_1->alloc.user, VAR_2);
  FUNC_1(VAR_1, VAR_0);
 }
}
