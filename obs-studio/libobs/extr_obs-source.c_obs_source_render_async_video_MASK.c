
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ async_active; scalar_t__* async_textures; } ;
typedef TYPE_1__ obs_source_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(obs_source_t *VAR_0)
{
 if (VAR_0->async_textures[0] && VAR_0->async_active)
  FUNC_0(VAR_0);
}
