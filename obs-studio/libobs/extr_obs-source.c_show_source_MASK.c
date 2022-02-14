
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_6__ {int (* show ) (scalar_t__) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_source_t ;


 int FUNC_0 (TYPE_3__*,char*,char*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(obs_source_t *VAR_0)
{
 if (VAR_0->context.data && VAR_0->info.show)
  VAR_0->info.show(VAR_0->context.data);
 FUNC_0(VAR_0, "source_show", "show");
}
