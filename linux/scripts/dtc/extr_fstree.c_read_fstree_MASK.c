
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
struct property {int dummy; } ;
struct node {int dummy; } ;
struct dirent {int d_name; } ;
typedef int FILE ;
typedef int DIR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct node*,struct node*) ;
 int FUNC_3 (struct node*,struct property*) ;
 struct node* FUNC_4 (int *,int *,int *) ;
 struct property* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,char const*,char*) ;
 int VAR_0 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,char*) ;
 int FUNC_11 (int ,char*,char*,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char const*,int ) ;
 scalar_t__ FUNC_14 (char*,struct stat*) ;
 struct node* FUNC_15 (struct node*,int ) ;
 int * FUNC_16 (char const*) ;
 struct dirent* FUNC_17 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_18 (int ,char*) ;
 char* FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static struct node *FUNC_21(const char *VAR_2)
{
 DIR *VAR_3;
 struct dirent *VAR_4;
 struct stat VAR_5;
 struct node *VAR_6;

 VAR_3 = FUNC_16(VAR_2);
 if (!VAR_3)
  FUNC_8("Couldn't opendir() \"%s\": %s\n", VAR_2, FUNC_19(VAR_0));

 VAR_6 = FUNC_4(((void*)0), ((void*)0), ((void*)0));

 while ((VAR_4 = FUNC_17(VAR_3)) != ((void*)0)) {
  char *VAR_7;

  if (FUNC_18(VAR_4->d_name, ".")
      || FUNC_18(VAR_4->d_name, ".."))
   continue;

  VAR_7 = FUNC_13(VAR_2, VAR_4->d_name);

  if (FUNC_14(VAR_7, &VAR_5) < 0)
   FUNC_8("stat(%s): %s\n", VAR_7, FUNC_19(VAR_0));

  if (FUNC_1(VAR_5.st_mode)) {
   struct property *VAR_8;
   FILE *VAR_9;

   VAR_9 = FUNC_10(VAR_7, "rb");
   if (! VAR_9) {
    FUNC_11(VAR_1,
     "WARNING: Cannot open %s: %s\n",
     VAR_7, FUNC_19(VAR_0));
   } else {
    VAR_8 = FUNC_5(FUNC_20(VAR_4->d_name),
            FUNC_7(VAR_9,
             VAR_5.st_size),
            ((void*)0));
    FUNC_3(VAR_6, VAR_8);
    FUNC_9(VAR_9);
   }
  } else if (FUNC_0(VAR_5.st_mode)) {
   struct node *VAR_10;

   VAR_10 = FUNC_21(VAR_7);
   VAR_10 = FUNC_15(VAR_10, FUNC_20(VAR_4->d_name));
   FUNC_2(VAR_6, VAR_10);
  }

  FUNC_12(VAR_7);
 }

 FUNC_6(VAR_3);
 return VAR_6;
}
