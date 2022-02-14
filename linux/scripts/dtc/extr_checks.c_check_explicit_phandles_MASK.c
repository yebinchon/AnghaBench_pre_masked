
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {scalar_t__ phandle; int fullpath; } ;
struct dt_info {struct node* dt; } ;
struct check {int dummy; } ;
typedef scalar_t__ cell_t ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct check*,struct dt_info*,struct node*,char*) ;
 struct node* FUNC_3 (struct node*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct check *VAR_0, struct dt_info *VAR_1,
        struct node *VAR_2)
{
 struct node *VAR_3 = VAR_1->dt;
 struct node *VAR_4;
 cell_t VAR_5, VAR_6;


 FUNC_1(!VAR_2->phandle);

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, "phandle");

 VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2, "linux,phandle");

 if (!VAR_5 && !VAR_6)

  return;

 if (VAR_6 && VAR_5 && (VAR_5 != VAR_6))
  FUNC_0(VAR_0, VAR_1, VAR_2, "mismatching 'phandle' and 'linux,phandle'"
       " properties");

 if (VAR_6 && !VAR_5)
  VAR_5 = VAR_6;

 VAR_4 = FUNC_3(VAR_3, VAR_5);
 if (VAR_4 && (VAR_4 != VAR_2)) {
  FUNC_0(VAR_0, VAR_1, VAR_2, "duplicated phandle 0x%x (seen before at %s)",
       VAR_5, VAR_4->fullpath);
  return;
 }

 VAR_2->phandle = VAR_5;
}
