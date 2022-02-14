
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
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_1 (struct aa_label*,struct aa_profile*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,int,struct path*) ;
 int FUNC_4 (struct aa_profile*,struct path const*,char*,struct path*,char*,int *,unsigned long,int *,int) ;
 int FUNC_5 (struct path*) ;
 int FUNC_6 (char*,char*) ;

int FUNC_7(struct aa_label *VAR_5, const struct path *VAR_6,
    const char *VAR_7, unsigned long VAR_8)
{
 struct aa_profile *VAR_9;
 char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
 struct path VAR_12;
 int VAR_13;

 FUNC_0(!VAR_5);
 FUNC_0(!VAR_6);

 if (!VAR_7 || !*VAR_7)
  return -VAR_0;

 VAR_8 &= VAR_4 | VAR_3;

 VAR_13 = FUNC_3(VAR_7, VAR_2|VAR_1, &VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_10, VAR_11);
 VAR_13 = FUNC_1(VAR_5, VAR_9,
   FUNC_4(VAR_9, VAR_6, VAR_10, &VAR_12, VAR_11,
      ((void*)0), VAR_8, ((void*)0), 0));
 FUNC_6(VAR_10, VAR_11);
 FUNC_5(&VAR_12);

 return VAR_13;
}
