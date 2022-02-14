
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_operands {int raw; } ;
struct ins {int name; } ;


 int FUNC_0 (char*,size_t,char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ins *VAR_0, char *VAR_1, size_t VAR_2,
         struct ins_operands *VAR_3, int VAR_4)
{
 return FUNC_0(VAR_1, VAR_2, "%-*s %s", VAR_4, VAR_0->name, VAR_3->raw);
}
