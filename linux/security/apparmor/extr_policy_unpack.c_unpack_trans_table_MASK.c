
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char** table; int size; } ;
struct TYPE_3__ {TYPE_2__ trans; } ;
struct aa_profile {TYPE_1__ file; } ;
struct aa_ext {void* pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (char) ;
 char** FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct aa_ext*,int *) ;
 scalar_t__ FUNC_4 (struct aa_ext*,int ,char*) ;
 int FUNC_5 (struct aa_ext*,char**,int *) ;

__attribute__((used)) static bool FUNC_6(struct aa_ext *VAR_4, struct aa_profile *VAR_5)
{
 void *VAR_6 = VAR_4->pos;


 if (FUNC_4(VAR_4, VAR_1, "xtable")) {
  int VAR_7, VAR_8;

  VAR_8 = FUNC_3(VAR_4, ((void*)0));

  if (VAR_8 > 16 - 4)
   goto fail;
  VAR_5->file.trans.table = FUNC_2(VAR_8, sizeof(char *),
          VAR_3);
  if (!VAR_5->file.trans.table)
   goto fail;

  VAR_5->file.trans.size = VAR_8;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   char *VAR_9;
   int VAR_10, VAR_11, VAR_12, VAR_13 = FUNC_5(VAR_4, &VAR_9, ((void*)0));



   if (!VAR_13)
    goto fail;
   VAR_5->file.trans.table[VAR_7] = VAR_9;

   if (FUNC_1(*VAR_9))
    goto fail;


   for (VAR_10 = VAR_11 = 0; VAR_11 < VAR_13 - 1; VAR_11++) {
    if (!VAR_9[VAR_11]) {
     VAR_12 = VAR_11;
     VAR_10++;
    }
   }
   if (*VAR_9 == ':') {

    if (!VAR_9[1])
     goto fail;






    if (VAR_10 == 1)
     VAR_9[VAR_12] = ':';
    else if (VAR_10 > 1)
     goto fail;
   } else if (VAR_10)

    goto fail;
  }
  if (!FUNC_4(VAR_4, VAR_0, ((void*)0)))
   goto fail;
  if (!FUNC_4(VAR_4, VAR_2, ((void*)0)))
   goto fail;
 }
 return 1;

fail:
 FUNC_0(&VAR_5->file.trans);
 VAR_4->pos = VAR_6;
 return 0;
}
