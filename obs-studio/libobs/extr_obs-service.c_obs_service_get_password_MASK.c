
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; } ;
struct TYPE_6__ {char const* (* get_password ) (int ) ;} ;
struct TYPE_8__ {TYPE_2__ context; TYPE_1__ info; } ;
typedef TYPE_3__ obs_service_t ;


 int FUNC_0 (TYPE_3__ const*,char*) ;
 char const* FUNC_1 (int ) ;

const char *FUNC_2(const obs_service_t *VAR_0)
{
 if (!FUNC_0(VAR_0, "obs_service_get_password"))
  return ((void*)0);

 if (!VAR_0->info.get_password)
  return ((void*)0);
 return VAR_0->info.get_password(VAR_0->context.data);
}
