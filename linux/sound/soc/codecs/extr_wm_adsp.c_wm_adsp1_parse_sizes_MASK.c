
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmfw_adsp1_sizes {int zm; int pm; int dm; } ;
struct wm_adsp {int dummy; } ;
struct firmware {int * data; } ;


 int FUNC_0 (struct wm_adsp*,char*,char const* const,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct wm_adsp *VAR_0,
      const char * const VAR_1,
      unsigned int VAR_2,
      const struct firmware *VAR_3)
{
 const struct wmfw_adsp1_sizes *VAR_4;

 VAR_4 = (void *)&VAR_3->data[VAR_2];

 FUNC_0(VAR_0, "%s: %d DM, %d PM, %d ZM\n", VAR_1,
   FUNC_1(VAR_4->dm), FUNC_1(VAR_4->pm),
   FUNC_1(VAR_4->zm));

 return VAR_2 + sizeof(*VAR_4);
}
