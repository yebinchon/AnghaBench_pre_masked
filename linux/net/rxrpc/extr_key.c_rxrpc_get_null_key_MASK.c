
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct cred {int dummy; } ;


 struct key* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cred* FUNC_2 () ;
 struct key* FUNC_3 (int *,char const*,int ,int ,struct cred const*,int ,int ,int *) ;
 int FUNC_4 (struct key*,int *,int ,int *,int *) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int VAR_4 ;

struct key *FUNC_7(const char *VAR_5)
{
 const struct cred *VAR_6 = FUNC_2();
 struct key *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(&VAR_4, VAR_5,
   VAR_1, VAR_0, VAR_6,
   VAR_3, VAR_2, ((void*)0));
 if (FUNC_1(VAR_7))
  return VAR_7;

 VAR_8 = FUNC_4(VAR_7, ((void*)0), 0, ((void*)0), ((void*)0));
 if (VAR_8 < 0) {
  FUNC_6(VAR_7);
  FUNC_5(VAR_7);
  return FUNC_0(VAR_8);
 }

 return VAR_7;
}
