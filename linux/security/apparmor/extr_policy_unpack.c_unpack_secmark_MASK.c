
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aa_secmark {int dummy; } ;
struct aa_profile {int secmark_count; TYPE_1__* secmark; } ;
struct aa_ext {void* pos; } ;
struct TYPE_4__ {struct TYPE_4__* label; int deny; int audit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct aa_ext*,int *) ;
 scalar_t__ FUNC_3 (struct aa_ext*,int ,char*) ;
 int FUNC_4 (struct aa_ext*,TYPE_1__**,int *) ;
 int FUNC_5 (struct aa_ext*,int *,int *) ;

__attribute__((used)) static bool FUNC_6(struct aa_ext *VAR_4, struct aa_profile *VAR_5)
{
 void *VAR_6 = VAR_4->pos;
 int VAR_7, VAR_8;

 if (FUNC_3(VAR_4, VAR_1, "secmark")) {
  VAR_8 = FUNC_2(VAR_4, ((void*)0));

  VAR_5->secmark = FUNC_0(VAR_8, sizeof(struct aa_secmark),
        VAR_3);
  if (!VAR_5->secmark)
   goto fail;

  VAR_5->secmark_count = VAR_8;

  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   if (!FUNC_5(VAR_4, &VAR_5->secmark[VAR_7].audit, ((void*)0)))
    goto fail;
   if (!FUNC_5(VAR_4, &VAR_5->secmark[VAR_7].deny, ((void*)0)))
    goto fail;
   if (!FUNC_4(VAR_4, &VAR_5->secmark[VAR_7].label, ((void*)0)))
    goto fail;
  }
  if (!FUNC_3(VAR_4, VAR_0, ((void*)0)))
   goto fail;
  if (!FUNC_3(VAR_4, VAR_2, ((void*)0)))
   goto fail;
 }

 return 1;

fail:
 if (VAR_5->secmark) {
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
   FUNC_1(VAR_5->secmark[VAR_7].label);
  FUNC_1(VAR_5->secmark);
  VAR_5->secmark_count = 0;
  VAR_5->secmark = ((void*)0);
 }

 VAR_4->pos = VAR_6;
 return 0;
}
