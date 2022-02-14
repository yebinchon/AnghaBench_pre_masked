
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {char* id; TYPE_1__* proc_root; int dev; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_card*,char*) ;
 int FUNC_1 (struct snd_card*,char const*,char const*) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,scalar_t__,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;

__attribute__((used)) static void FUNC_8(struct snd_card *VAR_1, const char *VAR_2,
        const char *VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6 = 0;
 char *VAR_7;

 FUNC_1(VAR_1, VAR_2, VAR_3);
 VAR_7 = VAR_1->id;

 again:



 if (!*VAR_7 || !FUNC_7(VAR_7, "card", 4)) {
  FUNC_4(VAR_7, "Default");
  VAR_6 = 1;
 }

 VAR_4 = FUNC_6(VAR_7);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  char *VAR_8;
  char VAR_9[5];
  int VAR_10;

  if (FUNC_0(VAR_1, VAR_7))
   return;


  FUNC_3(VAR_9, "_%X", VAR_5 + 1);
  VAR_10 = FUNC_6(VAR_9);
  if (VAR_4 + VAR_10 >= sizeof(VAR_1->id))
   VAR_8 = VAR_7 + sizeof(VAR_1->id) - VAR_10 - 1;
  else
   VAR_8 = VAR_7 + VAR_4;
  FUNC_4(VAR_8, VAR_9);
 }

 if (!VAR_6) {
  *VAR_7 = 0;
  goto again;
 }

 FUNC_2(VAR_1->dev, "unable to set card id (%s)\n", VAR_7);
 if (VAR_1->proc_root->name)
  FUNC_5(VAR_1->id, VAR_1->proc_root->name, sizeof(VAR_1->id));
}
