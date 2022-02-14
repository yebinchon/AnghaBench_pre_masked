
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sidtab {int dummy; } ;
struct policydb {struct ocontext** ocontexts; } ;
struct TYPE_3__ {int name; } ;
struct ocontext {scalar_t__* sid; TYPE_1__ u; TYPE_2__* context; struct ocontext* next; } ;
struct TYPE_4__ {int user; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct sidtab*) ;
 int FUNC_2 (struct sidtab*) ;
 int FUNC_3 (struct sidtab*,scalar_t__,TYPE_2__*) ;

int FUNC_4(struct policydb *VAR_4, struct sidtab *VAR_5)
{
 struct ocontext *VAR_6, *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5);
 if (VAR_8) {
  FUNC_0("SELinux:  out of memory on SID table init\n");
  goto out;
 }

 VAR_6 = VAR_4->ocontexts[VAR_1];
 for (VAR_7 = VAR_6; VAR_7; VAR_7 = VAR_7->next) {
  VAR_8 = -VAR_0;
  if (!VAR_7->context[0].user) {
   FUNC_0("SELinux:  SID %s was never defined.\n",
    VAR_7->u.name);
   FUNC_1(VAR_5);
   goto out;
  }
  if (VAR_7->sid[0] == VAR_3 || VAR_7->sid[0] > VAR_2) {
   FUNC_0("SELinux:  Initial SID %s out of range.\n",
    VAR_7->u.name);
   FUNC_1(VAR_5);
   goto out;
  }

  VAR_8 = FUNC_3(VAR_5, VAR_7->sid[0], &VAR_7->context[0]);
  if (VAR_8) {
   FUNC_0("SELinux:  unable to load initial SID %s.\n",
    VAR_7->u.name);
   FUNC_1(VAR_5);
   goto out;
  }
 }
 VAR_8 = 0;
out:
 return VAR_8;
}
