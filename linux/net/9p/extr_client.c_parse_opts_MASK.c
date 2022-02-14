
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct p9_client {int proto_version; int msize; int * trans_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int*) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char**,char*) ;
 int VAR_7 ;
 int * FUNC_9 (char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(char *VAR_8, struct p9_client *VAR_9)
{
 char *VAR_10, *VAR_11;
 char *VAR_12;
 substring_t VAR_13[VAR_3];
 int VAR_14;
 char *VAR_15;
 int VAR_16 = 0;

 VAR_9->proto_version = VAR_5;
 VAR_9->msize = 8192;

 if (!VAR_8)
  return 0;

 VAR_11 = FUNC_2(VAR_8, VAR_2);
 if (!VAR_11) {
  FUNC_6(VAR_4,
    "failed to allocate copy of option string\n");
  return -VAR_1;
 }
 VAR_10 = VAR_11;

 while ((VAR_12 = FUNC_8(&VAR_10, ",")) != ((void*)0)) {
  int VAR_17, VAR_18;
  if (!*VAR_12)
   continue;
  VAR_17 = FUNC_5(VAR_12, VAR_7, VAR_13);
  switch (VAR_17) {
  case 130:
   VAR_18 = FUNC_3(&VAR_13[0], &VAR_14);
   if (VAR_18 < 0) {
    FUNC_6(VAR_4,
      "integer field, but no integer?\n");
    VAR_16 = VAR_18;
    continue;
   }
   if (VAR_14 < 4096) {
    FUNC_6(VAR_4,
      "msize should be at least 4k\n");
    VAR_16 = -VAR_0;
    continue;
   }
   VAR_9->msize = VAR_14;
   break;
  case 129:
   VAR_15 = FUNC_4(&VAR_13[0]);
   if (!VAR_15) {
    VAR_16 = -VAR_1;
    FUNC_6(VAR_4,
      "problem allocating copy of trans arg\n");
    goto free_and_return;
   }

   FUNC_10(VAR_9->trans_mod);
   VAR_9->trans_mod = FUNC_9(VAR_15);
   if (VAR_9->trans_mod == ((void*)0)) {
    FUNC_7("Could not find request transport: %s\n",
     VAR_15);
    VAR_16 = -VAR_0;
   }
   FUNC_1(VAR_15);
   break;
  case 131:
   VAR_9->proto_version = VAR_6;
   break;
  case 128:
   VAR_15 = FUNC_4(&VAR_13[0]);
   if (!VAR_15) {
    VAR_16 = -VAR_1;
    FUNC_6(VAR_4,
      "problem allocating copy of version arg\n");
    goto free_and_return;
   }
   VAR_18 = FUNC_0(VAR_15);
   if (VAR_18 < 0)
    VAR_16 = VAR_18;
   else
    VAR_9->proto_version = VAR_18;
   FUNC_1(VAR_15);
   break;
  default:
   continue;
  }
 }

free_and_return:
 if (VAR_16)
  FUNC_10(VAR_9->trans_mod);
 FUNC_1(VAR_11);
 return VAR_16;
}
