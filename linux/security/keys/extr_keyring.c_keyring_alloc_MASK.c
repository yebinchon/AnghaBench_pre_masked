
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_restriction {int dummy; } ;
struct key {int dummy; } ;
struct cred {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;
typedef int key_perm_t ;


 struct key* FUNC_0 (int) ;
 int FUNC_1 (struct key*) ;
 struct key* FUNC_2 (int *,char const*,int ,int ,struct cred const*,int ,unsigned long,struct key_restriction*) ;
 int FUNC_3 (struct key*,int *,int ,struct key*,int *) ;
 int FUNC_4 (struct key*) ;
 int VAR_0 ;

struct key *FUNC_5(const char *VAR_1, kuid_t VAR_2, kgid_t VAR_3,
     const struct cred *VAR_4, key_perm_t VAR_5,
     unsigned long VAR_6,
     struct key_restriction *VAR_7,
     struct key *VAR_8)
{
 struct key *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(&VAR_0, VAR_1,
       VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (!FUNC_1(VAR_9)) {
  VAR_10 = FUNC_3(VAR_9, ((void*)0), 0, VAR_8, ((void*)0));
  if (VAR_10 < 0) {
   FUNC_4(VAR_9);
   VAR_9 = FUNC_0(VAR_10);
  }
 }

 return VAR_9;
}
