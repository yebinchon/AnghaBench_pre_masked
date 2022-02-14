
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ins_operands {int dummy; } ;
struct ins {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* scnprintf ) (struct ins*,char*,size_t,struct ins_operands*,int) ;} ;


 int FUNC_0 (struct ins*,char*,size_t,struct ins_operands*,int) ;
 int FUNC_1 (struct ins*,char*,size_t,struct ins_operands*,int) ;

int FUNC_2(struct ins *VAR_0, char *VAR_1, size_t VAR_2,
     struct ins_operands *VAR_3, int VAR_4)
{
 if (VAR_0->ops->scnprintf)
  return VAR_0->ops->scnprintf(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
