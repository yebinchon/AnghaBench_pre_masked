
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {int basenamelen; int * name; } ;
struct dt_info {int dummy; } ;
struct check {int data; } ;


 int FUNC_0 (struct check*,struct dt_info*,struct node*,char*,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct check *VAR_0, struct dt_info *VAR_1,
      struct node *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_2->name, VAR_0->data);

 if (VAR_3 < VAR_2->basenamelen)
  FUNC_0(VAR_0, VAR_1, VAR_2, "Character '%c' not recommended in node name",
       VAR_2->name[VAR_3]);
}
