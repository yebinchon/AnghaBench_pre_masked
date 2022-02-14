
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
struct TYPE_3__ {int (* supports_multitrack ) (int ) ;} ;
struct obs_service {TYPE_2__ context; TYPE_1__ info; } ;
struct obs_output {struct obs_service* service; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct obs_output *VAR_0)
{
 const struct obs_service *VAR_1 = VAR_0->service;

 if (!VAR_1 || !VAR_1->info.supports_multitrack) {
  return 0;
 }

 return VAR_1->info.supports_multitrack(VAR_1->context.data);
}
