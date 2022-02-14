
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wmfw_adsp_alg_data {int ncoeff; int name; int id; int * data; } ;
struct wm_coeff_parsed_alg {void* ncoeff; int name; int name_len; void* id; } ;
struct wm_adsp {int fw_ver; } ;


 int FUNC_0 (struct wm_adsp*,char*,void*,...) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int,int const**) ;
 int FUNC_4 (int,int const**,int *) ;

__attribute__((used)) static inline void FUNC_5(struct wm_adsp *VAR_0, const u8 **VAR_1,
          struct wm_coeff_parsed_alg *VAR_2)
{
 const struct wmfw_adsp_alg_data *VAR_3;

 switch (VAR_0->fw_ver) {
 case 0:
 case 1:
  VAR_3 = (const struct wmfw_adsp_alg_data *)*VAR_1;
  *VAR_1 = VAR_3->data;

  VAR_2->id = FUNC_1(VAR_3->id);
  VAR_2->name = VAR_3->name;
  VAR_2->name_len = FUNC_2(VAR_3->name);
  VAR_2->ncoeff = FUNC_1(VAR_3->ncoeff);
  break;
 default:
  VAR_2->id = FUNC_3(sizeof(VAR_3->id), VAR_1);
  VAR_2->name_len = FUNC_4(sizeof(u8), VAR_1,
            &VAR_2->name);
  FUNC_4(sizeof(u16), VAR_1, ((void*)0));
  VAR_2->ncoeff = FUNC_3(sizeof(VAR_3->ncoeff), VAR_1);
  break;
 }

 FUNC_0(VAR_0, "Algorithm ID: %#x\n", VAR_2->id);
 FUNC_0(VAR_0, "Algorithm name: %.*s\n", VAR_2->name_len, VAR_2->name);
 FUNC_0(VAR_0, "# of coefficient descriptors: %#x\n", VAR_2->ncoeff);
}
