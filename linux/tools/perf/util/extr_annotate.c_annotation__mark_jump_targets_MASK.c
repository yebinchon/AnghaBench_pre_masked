
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u64 ;
struct symbol {int name; } ;
struct TYPE_3__ {size_t offset; } ;
struct TYPE_4__ {TYPE_1__ target; } ;
struct disasm_line {TYPE_2__ ops; } ;
struct annotation_line {scalar_t__ jump_sources; } ;
struct annotation {scalar_t__ max_jump_sources; int nr_jumps; struct annotation_line** offsets; } ;


 struct disasm_line* FUNC_0 (struct annotation_line*) ;
 int FUNC_1 (struct disasm_line*,struct symbol*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 size_t FUNC_3 (struct symbol*) ;

void FUNC_4(struct annotation *VAR_0, struct symbol *VAR_1)
{
 u64 VAR_2, VAR_3 = FUNC_3(VAR_1);


 if (FUNC_2(VAR_1->name, "@plt"))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  struct annotation_line *VAR_4 = VAR_0->offsets[VAR_2];
  struct disasm_line *VAR_5;

  VAR_5 = FUNC_0(VAR_4);

  if (!FUNC_1(VAR_5, VAR_1))
   continue;

  VAR_4 = VAR_0->offsets[VAR_5->ops.target.offset];





  if (VAR_4 == ((void*)0))
   continue;

  if (++VAR_4->jump_sources > VAR_0->max_jump_sources)
   VAR_0->max_jump_sources = VAR_4->jump_sources;

  ++VAR_0->nr_jumps;
 }
}
