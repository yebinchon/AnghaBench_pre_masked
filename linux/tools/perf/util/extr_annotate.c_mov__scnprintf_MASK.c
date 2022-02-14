
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int raw; scalar_t__ name; } ;
struct TYPE_3__ {int raw; scalar_t__ name; } ;
struct ins_operands {TYPE_2__ target; TYPE_1__ source; } ;
struct ins {int name; } ;


 int FUNC_0 (char*,size_t,char*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ins *VAR_0, char *VAR_1, size_t VAR_2,
      struct ins_operands *VAR_3, int VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, "%-*s %s,%s", VAR_4, VAR_0->name,
    VAR_3->source.name ?: VAR_3->source.raw,
    VAR_3->target.name ?: VAR_3->target.raw);
}
