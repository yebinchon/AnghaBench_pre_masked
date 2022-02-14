
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int members; } ;
struct ECPGtype {char* struct_sizeof; TYPE_1__ u; int type_name; } ;
struct ECPGstruct_member {int dummy; } ;
typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;


 struct ECPGtype* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (struct ECPGstruct_member*) ;
 int FUNC_2 (char*) ;

struct ECPGtype *
FUNC_3(struct ECPGstruct_member *VAR_0, enum ECPGttype VAR_1, char *VAR_2, char *VAR_3)
{
 struct ECPGtype *VAR_4 = FUNC_0(VAR_1, FUNC_2("1"), 0);

 VAR_4->type_name = FUNC_2(VAR_2);
 VAR_4->u.members = FUNC_1(VAR_0);
 VAR_4->struct_sizeof = VAR_3;

 return VAR_4;
}
