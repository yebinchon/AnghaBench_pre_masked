
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {TYPE_1__* ops; } ;
struct TYPE_13__ {scalar_t__ offset; } ;
struct TYPE_11__ {scalar_t__ offset; scalar_t__ outside; } ;
struct TYPE_12__ {TYPE_2__ target; } ;
struct disasm_line {TYPE_7__ ins; TYPE_4__ al; TYPE_3__ ops; } ;
struct TYPE_15__ {int max_ins_name; } ;
struct annotation {TYPE_6__ widths; TYPE_5__* options; } ;
struct TYPE_14__ {int use_offset; } ;
struct TYPE_10__ {scalar_t__ scnprintf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct disasm_line*,char*,size_t,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_7__*) ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;

__attribute__((used)) static void FUNC_4(struct disasm_line *VAR_4, struct annotation *VAR_5,
          void *VAR_6, char *VAR_7, size_t VAR_8,
          void (*VAR_9)(void *VAR_10, const char *VAR_11, ...),
          void (*VAR_12)(void *VAR_13, int VAR_14))
{
 if (VAR_4->ins.ops && VAR_4->ins.ops->scnprintf) {
  if (FUNC_2(&VAR_4->ins)) {
   bool VAR_15;

   if (VAR_4->ops.target.outside)
    goto call_like;
   VAR_15 = VAR_4->ops.target.offset > VAR_4->al.offset;
   VAR_12(VAR_6, VAR_15 ? VAR_0 : VAR_3);
   VAR_9(VAR_6, " ");
  } else if (FUNC_1(&VAR_4->ins)) {
call_like:
   VAR_12(VAR_6, VAR_2);
   VAR_9(VAR_6, " ");
  } else if (FUNC_3(&VAR_4->ins)) {
   VAR_12(VAR_6, VAR_1);
   VAR_9(VAR_6, " ");
  } else {
   VAR_9(VAR_6, "  ");
  }
 } else {
  VAR_9(VAR_6, "  ");
 }

 FUNC_0(VAR_4, VAR_7, VAR_8, !VAR_5->options->use_offset, VAR_5->widths.max_ins_name);
}
