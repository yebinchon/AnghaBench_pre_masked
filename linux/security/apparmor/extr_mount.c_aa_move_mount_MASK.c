
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
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int ,struct path*) ;
 int FUNC_4 (struct aa_profile*,struct path const*,char*,struct path*,char*,int *,int ,int *,int) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(struct aa_label *VAR_3, const struct path *VAR_4,
    const char *VAR_5)
{
 struct aa_profile *VAR_6;
 char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct path VAR_9;
 int VAR_10;

 FUNC_0(!VAR_3);
 FUNC_0(!VAR_4);

 if (!VAR_5 || !*VAR_5)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_5, VAR_1, &VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_2(VAR_7, VAR_8);
 VAR_10 = FUNC_1(VAR_3, VAR_6,
   FUNC_4(VAR_6, VAR_4, VAR_7, &VAR_9, VAR_8,
      ((void*)0), VAR_2, ((void*)0), 0));
 FUNC_6(VAR_7, VAR_8);
 FUNC_5(&VAR_9);

 return VAR_10;
}
