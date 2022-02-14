
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int (* create ) (int ,TYPE_3__*) ;} ;
struct TYPE_9__ {int data; int settings; } ;
struct TYPE_11__ {int initialized; TYPE_2__ orig_info; TYPE_1__ context; TYPE_2__ info; } ;
typedef TYPE_3__ obs_encoder_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static inline bool FUNC_4(obs_encoder_t *VAR_2)
{
 if (FUNC_0(VAR_2))
  return 1;
 if (VAR_2->initialized)
  return 1;

 FUNC_2(VAR_2);

 if (VAR_2->orig_info.create) {
  VAR_1 = 1;
  VAR_2->info = VAR_2->orig_info;
  VAR_2->context.data = VAR_2->orig_info.create(
   VAR_2->context.settings, VAR_2);
  VAR_1 = 0;
 }
 if (!VAR_2->context.data)
  return 0;

 if (VAR_2->orig_info.type == VAR_0)
  FUNC_1(VAR_2);

 VAR_2->initialized = 1;
 return 1;
}
