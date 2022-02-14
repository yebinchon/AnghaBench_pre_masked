
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct TYPE_2__ {struct symbol* sym; } ;
struct expr {TYPE_1__ left; int type; } ;


 int VAR_0 ;
 struct expr* FUNC_0 (int,int) ;

struct expr *FUNC_1(struct symbol *VAR_1)
{
 struct expr *VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 VAR_2->type = VAR_0;
 VAR_2->left.sym = VAR_1;
 return VAR_2;
}
