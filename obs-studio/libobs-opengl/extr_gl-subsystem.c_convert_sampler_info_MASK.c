
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gs_sampler_state {int max_anisotropy; void* address_w; void* address_v; void* address_u; int mag_filter; int min_filter; } ;
struct gs_sampler_info {int max_anisotropy; int address_w; int address_v; int address_u; int filter; } ;
typedef int GLint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (char*) ;

void FUNC_5(struct gs_sampler_state *VAR_3,
     const struct gs_sampler_info *VAR_4)
{
 GLint VAR_5;
 FUNC_2(VAR_4->filter, &VAR_3->min_filter,
         &VAR_3->mag_filter);
 VAR_3->address_u = FUNC_1(VAR_4->address_u);
 VAR_3->address_v = FUNC_1(VAR_4->address_v);
 VAR_3->address_w = FUNC_1(VAR_4->address_w);
 VAR_3->max_anisotropy = VAR_4->max_anisotropy;

 VAR_5 = 1;
 if (VAR_0) {
  FUNC_3(VAR_1,
         &VAR_5);
  FUNC_4("glGetIntegerv(GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT)");
 }

 if (1 <= VAR_3->max_anisotropy &&
     VAR_3->max_anisotropy <= VAR_5)
  return;

 if (VAR_3->max_anisotropy < 1)
  VAR_3->max_anisotropy = 1;
 else if (VAR_3->max_anisotropy > VAR_5)
  VAR_3->max_anisotropy = VAR_5;

 FUNC_0(VAR_2,
      "convert_sampler_info: 1 <= max_anisotropy <= "
      "%d violated, selected: %d, set: %d",
      VAR_5, VAR_4->max_anisotropy, VAR_3->max_anisotropy);
}
