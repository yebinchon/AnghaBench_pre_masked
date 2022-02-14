
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {char* name; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_7__ {TYPE_1__ ins; } ;
struct TYPE_8__ {TYPE_2__ locked; } ;
struct disasm_line {TYPE_4__ ins; TYPE_3__ ops; } ;
struct annotate_browser {int arch; } ;
struct TYPE_10__ {int node; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ,char const*,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 struct disasm_line* FUNC_2 (struct disasm_line*,int ) ;

__attribute__((used)) static bool FUNC_3(struct annotate_browser *VAR_1, struct disasm_line *VAR_2)
{
 struct disasm_line *VAR_3 = FUNC_2(VAR_2, VAR_0.node);
 const char *VAR_4;

 if (!VAR_3)
  return 0;

 if (FUNC_1(&VAR_3->ins))
  VAR_4 = VAR_3->ops.locked.ins.name;
 else
  VAR_4 = VAR_3->ins.name;

 if (!VAR_4 || !VAR_2->ins.name)
  return 0;

 return FUNC_0(VAR_1->arch, VAR_4, VAR_2->ins.name);
}
