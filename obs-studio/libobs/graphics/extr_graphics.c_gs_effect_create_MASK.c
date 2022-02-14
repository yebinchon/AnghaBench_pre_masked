
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gs_effect {int cached; struct gs_effect* next; scalar_t__ effect_path; TYPE_2__* graphics; } ;
struct TYPE_3__ {int error_list; } ;
struct effect_parser {TYPE_1__ cfp; } ;
typedef struct gs_effect gs_effect_t ;
struct TYPE_4__ {int effect_mutex; struct gs_effect* first_effect; } ;


 scalar_t__ FUNC_0 (char const*) ;
 struct gs_effect* FUNC_1 (int) ;
 int FUNC_2 (struct effect_parser*) ;
 int FUNC_3 (struct effect_parser*) ;
 int FUNC_4 (struct effect_parser*,struct gs_effect*,char const*,char const*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (struct gs_effect*) ;
 int FUNC_7 (char*,char const*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 TYPE_2__* VAR_0 ;

gs_effect_t *FUNC_10(const char *VAR_1, const char *VAR_2,
         char **VAR_3)
{
 if (!FUNC_7("gs_effect_create", VAR_1))
  return ((void*)0);

 struct gs_effect *VAR_4 = FUNC_1(sizeof(struct gs_effect));
 struct effect_parser VAR_5;
 bool VAR_6;

 VAR_4->graphics = VAR_0;
 VAR_4->effect_path = FUNC_0(VAR_2);

 FUNC_3(&VAR_5);
 VAR_6 = FUNC_4(&VAR_5, VAR_4, VAR_1, VAR_2);
 if (!VAR_6) {
  if (VAR_3)
   *VAR_3 =
    FUNC_5(&VAR_5.cfp.error_list);
  FUNC_6(VAR_4);
  VAR_4 = ((void*)0);
 }

 if (VAR_4) {
  FUNC_8(&VAR_0->effect_mutex);

  if (VAR_4->effect_path) {
   VAR_4->cached = 1;
   VAR_4->next = VAR_0->first_effect;
   VAR_0->first_effect = VAR_4;
  }

  FUNC_9(&VAR_0->effect_mutex);
 }

 FUNC_2(&VAR_5);
 return VAR_4;
}
