
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ECPGtype* element; } ;
struct ECPGtype {TYPE_1__ u; } ;


 struct ECPGtype* FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;

struct ECPGtype *
FUNC_1(struct ECPGtype *VAR_1, char *VAR_2)
{
 struct ECPGtype *VAR_3 = FUNC_0(VAR_0, VAR_2, 0);

 VAR_3->u.element = VAR_1;

 return VAR_3;
}
