
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int gl_target; TYPE_2__* cur_sampler; } ;
typedef TYPE_1__ gs_texture_t ;
struct TYPE_10__ {int max_anisotropy; int address_w; int address_v; int address_u; int mag_filter; int min_filter; } ;
typedef TYPE_2__ gs_samplerstate_t ;
typedef int GLint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static bool FUNC_6(gs_texture_t *VAR_7, gs_samplerstate_t *VAR_8)
{
 bool VAR_9 = 1;
 GLint VAR_10;

 if (VAR_7->cur_sampler == VAR_8)
  return 1;

 if (VAR_7->cur_sampler)
  FUNC_4(VAR_7->cur_sampler);
 VAR_7->cur_sampler = VAR_8;
 if (!VAR_8)
  return 1;

 FUNC_3(VAR_8);

 VAR_10 = VAR_8->min_filter;
 if (FUNC_2(VAR_7))
  FUNC_5(&VAR_10);

 if (!FUNC_1(VAR_7->gl_target, VAR_3, VAR_10))
  VAR_9 = 0;
 if (!FUNC_1(VAR_7->gl_target, VAR_1,
       VAR_8->mag_filter))
  VAR_9 = 0;
 if (!FUNC_1(VAR_7->gl_target, VAR_5, VAR_8->address_u))
  VAR_9 = 0;
 if (!FUNC_1(VAR_7->gl_target, VAR_6, VAR_8->address_v))
  VAR_9 = 0;
 if (!FUNC_1(VAR_7->gl_target, VAR_4, VAR_8->address_w))
  VAR_9 = 0;
 if (VAR_0) {
  if (!FUNC_1(VAR_7->gl_target,
        VAR_2,
        VAR_8->max_anisotropy))
   VAR_9 = 0;
 }

 FUNC_0(VAR_7);

 return VAR_9;
}
