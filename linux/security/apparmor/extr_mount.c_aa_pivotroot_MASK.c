
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct aa_profile {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct aa_label*) ;
 int VAR_3 ;
 int FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct aa_label*) ;
 int FUNC_4 (struct aa_label*) ;
 int FUNC_5 (struct aa_profile*,int ,int *,int *,int *,int *,int ,int *,int ,int *,char*,int) ;
 int FUNC_6 (struct aa_profile*,struct path const*,char*,struct path const*,char*) ;
 int FUNC_7 (struct aa_label*,struct aa_profile*,int ) ;
 struct aa_label* FUNC_8 (struct aa_label*,struct aa_profile*,int ,int ) ;
 int FUNC_9 (char*,char*) ;
 int VAR_4 ;
 int FUNC_10 (char*,char*) ;

int FUNC_11(struct aa_label *VAR_5, const struct path *VAR_6,
   const struct path *VAR_7)
{
 struct aa_profile *VAR_8;
 struct aa_label *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 int VAR_13;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_6);
 FUNC_0(!VAR_7);

 FUNC_9(VAR_10, VAR_11);
 VAR_9 = FUNC_8(VAR_5, VAR_8, VAR_2,
   FUNC_6(VAR_8, VAR_7, VAR_11,
     VAR_6, VAR_10));
 if (!VAR_9) {
  VAR_12 = "label build failed";
  VAR_13 = -VAR_1;
  goto fail;
 } else if (!FUNC_1(VAR_9)) {
  VAR_13 = FUNC_4(VAR_9);
  if (VAR_13) {

   FUNC_3(VAR_9);
   goto out;
  }
 } else

  VAR_13 = FUNC_2(VAR_9);
out:
 FUNC_10(VAR_10, VAR_11);

 return VAR_13;

fail:

 VAR_13 = FUNC_7(VAR_5, VAR_8,
   FUNC_5(VAR_8, VAR_3, ((void*)0) ,
        ((void*)0) ,
        ((void*)0), ((void*)0),
        0, ((void*)0), VAR_0, &VAR_4, VAR_12,
        VAR_13));
 goto out;
}
