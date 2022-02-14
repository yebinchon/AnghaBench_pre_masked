
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct user_datum {int value; } ;
struct type_datum {int value; scalar_t__ attribute; } ;
struct sidtab {int dummy; } ;
struct role_datum {int value; } ;
struct TYPE_6__ {int table; } ;
struct TYPE_5__ {int table; } ;
struct TYPE_4__ {int table; } ;
struct policydb {TYPE_3__ p_types; TYPE_2__ p_roles; TYPE_1__ p_users; } ;
struct context {int type; int role; int user; } ;


 int VAR_0 ;
 int FUNC_0 (struct context*) ;
 int FUNC_1 (struct context*) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct policydb*,char,char*,struct context*,struct sidtab*,int ) ;
 int FUNC_4 (struct policydb*,struct context*) ;

__attribute__((used)) static int FUNC_5(struct policydb *VAR_1,
        struct sidtab *VAR_2,
        char *VAR_3,
        struct context *VAR_4,
        u32 VAR_5)
{
 struct role_datum *VAR_6;
 struct type_datum *VAR_7;
 struct user_datum *VAR_8;
 char *VAR_9, *VAR_10, VAR_11;
 int VAR_12 = 0;

 FUNC_1(VAR_4);



 VAR_12 = -VAR_0;
 VAR_9 = (char *) VAR_3;


 VAR_10 = VAR_9;
 while (*VAR_10 && *VAR_10 != ':')
  VAR_10++;

 if (*VAR_10 == 0)
  goto out;

 *VAR_10++ = 0;

 VAR_8 = FUNC_2(VAR_1->p_users.table, VAR_9);
 if (!VAR_8)
  goto out;

 VAR_4->user = VAR_8->value;


 VAR_9 = VAR_10;
 while (*VAR_10 && *VAR_10 != ':')
  VAR_10++;

 if (*VAR_10 == 0)
  goto out;

 *VAR_10++ = 0;

 VAR_6 = FUNC_2(VAR_1->p_roles.table, VAR_9);
 if (!VAR_6)
  goto out;
 VAR_4->role = VAR_6->value;


 VAR_9 = VAR_10;
 while (*VAR_10 && *VAR_10 != ':')
  VAR_10++;
 VAR_11 = *VAR_10;
 *VAR_10++ = 0;

 VAR_7 = FUNC_2(VAR_1->p_types.table, VAR_9);
 if (!VAR_7 || VAR_7->attribute)
  goto out;

 VAR_4->type = VAR_7->value;

 VAR_12 = FUNC_3(VAR_1, VAR_11, VAR_10, VAR_4, VAR_2, VAR_5);
 if (VAR_12)
  goto out;


 VAR_12 = -VAR_0;
 if (!FUNC_4(VAR_1, VAR_4))
  goto out;
 VAR_12 = 0;
out:
 if (VAR_12)
  FUNC_0(VAR_4);
 return VAR_12;
}
