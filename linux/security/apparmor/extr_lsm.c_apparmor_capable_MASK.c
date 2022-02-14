
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int dummy; } ;
struct cred {int dummy; } ;
struct aa_label {int dummy; } ;


 int FUNC_0 (struct aa_label*,int,unsigned int) ;
 struct aa_label* FUNC_1 (struct cred const*) ;
 int FUNC_2 (struct aa_label*) ;
 int FUNC_3 (struct aa_label*) ;

__attribute__((used)) static int FUNC_4(const struct cred *VAR_0, struct user_namespace *VAR_1,
       int VAR_2, unsigned int VAR_3)
{
 struct aa_label *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_0);
 if (!FUNC_3(VAR_4))
  VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3);
 FUNC_2(VAR_4);

 return VAR_5;
}
