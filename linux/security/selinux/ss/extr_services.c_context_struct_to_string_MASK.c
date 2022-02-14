
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct policydb {int dummy; } ;
struct context {scalar_t__ type; scalar_t__ role; scalar_t__ user; int str; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (scalar_t__,int ) ;
 char* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct policydb*,struct context*) ;
 int FUNC_3 (struct policydb*,struct context*,char**) ;
 int FUNC_4 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (struct policydb*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct policydb *VAR_5,
        struct context *VAR_6,
        char **VAR_7, u32 *VAR_8)
{
 char *VAR_9;

 if (VAR_7)
  *VAR_7 = ((void*)0);
 *VAR_8 = 0;

 if (VAR_6->len) {
  *VAR_8 = VAR_6->len;
  if (VAR_7) {
   *VAR_7 = FUNC_1(VAR_6->str, VAR_1);
   if (!(*VAR_7))
    return -VAR_0;
  }
  return 0;
 }


 *VAR_8 += FUNC_5(FUNC_6(VAR_5, VAR_4, VAR_6->user - 1)) + 1;
 *VAR_8 += FUNC_5(FUNC_6(VAR_5, VAR_2, VAR_6->role - 1)) + 1;
 *VAR_8 += FUNC_5(FUNC_6(VAR_5, VAR_3, VAR_6->type - 1)) + 1;
 *VAR_8 += FUNC_2(VAR_5, VAR_6);

 if (!VAR_7)
  return 0;


 VAR_9 = FUNC_0(*VAR_8, VAR_1);
 if (!VAR_9)
  return -VAR_0;
 *VAR_7 = VAR_9;




 VAR_9 += FUNC_4(VAR_9, "%s:%s:%s",
  FUNC_6(VAR_5, VAR_4, VAR_6->user - 1),
  FUNC_6(VAR_5, VAR_2, VAR_6->role - 1),
  FUNC_6(VAR_5, VAR_3, VAR_6->type - 1));

 FUNC_3(VAR_5, VAR_6, &VAR_9);

 *VAR_9 = 0;

 return 0;
}
