
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
struct symbol {int start; int end; } ;
struct map {int dummy; } ;
struct TYPE_10__ {void* addr; int offset_avail; TYPE_4__* sym; void* offset; } ;
struct TYPE_11__ {TYPE_2__ target; } ;
struct TYPE_15__ {scalar_t__ ops; } ;
struct disasm_line {int al; TYPE_3__ ops; TYPE_8__ ins; } ;
struct annotation {TYPE_5__* src; } ;
struct TYPE_9__ {struct symbol* sym; struct map* map; } ;
struct annotate_args {int offset; char* line; int line_nr; TYPE_1__ ms; } ;
struct addr_map_symbol {void* addr; scalar_t__ al_addr; TYPE_4__* sym; struct map* map; } ;
typedef int s64 ;
struct TYPE_14__ {int rm_so; } ;
typedef TYPE_6__ regmatch_t ;
struct TYPE_13__ {int source; } ;
struct TYPE_12__ {scalar_t__ start; } ;
typedef int FILE ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct disasm_line*) ;
 struct disasm_line* FUNC_3 (struct annotate_args*) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char**,size_t*,int *) ;
 scalar_t__ FUNC_6 (TYPE_8__*) ;
 void* FUNC_7 (struct map*,int ) ;
 int FUNC_8 (struct addr_map_symbol*) ;
 scalar_t__ FUNC_9 (int *,char*,int,TYPE_6__*,int ) ;
 char* FUNC_10 (char*) ;
 char* FUNC_11 (char*) ;
 int FUNC_12 (char*,char**,int) ;
 struct annotation* FUNC_13 (struct symbol*) ;

__attribute__((used)) static int FUNC_14(struct symbol *VAR_1, FILE *VAR_2,
          struct annotate_args *VAR_3,
          int *VAR_4)
{
 struct map *VAR_5 = VAR_3->ms.map;
 struct annotation *VAR_6 = FUNC_13(VAR_1);
 struct disasm_line *VAR_7;
 char *VAR_8 = ((void*)0), *VAR_9, *VAR_10, *VAR_11;
 size_t VAR_12;
 s64 VAR_13, VAR_14 = -1;
 regmatch_t VAR_15[2];

 if (FUNC_5(&VAR_8, &VAR_12, VAR_2) < 0)
  return -1;

 if (!VAR_8)
  return -1;

 VAR_13 = -1;
 VAR_9 = FUNC_11(VAR_8);


 if (FUNC_9(&VAR_0, VAR_9, 2, VAR_15, 0) == 0) {
  *VAR_4 = FUNC_1(VAR_9 + VAR_15[1].rm_so);
  return 0;
 }

 VAR_10 = FUNC_10(VAR_9);
 if (*VAR_10) {



  VAR_13 = FUNC_12(VAR_10, &VAR_11, 16);
  if (*VAR_11 != ':' || VAR_10 == VAR_11 || VAR_11[1] == '\0')
   VAR_13 = -1;
 }

 if (VAR_13 != -1) {
  u64 VAR_16 = FUNC_7(VAR_5, VAR_1->start),
      VAR_17 = FUNC_7(VAR_5, VAR_1->end);

  VAR_14 = VAR_13 - VAR_16;
  if ((u64)VAR_13 < VAR_16 || (u64)VAR_13 >= VAR_17)
   VAR_14 = -1;
  else
   VAR_9 = VAR_11 + 1;
 }

 VAR_3->offset = VAR_14;
 VAR_3->line = VAR_9;
 VAR_3->line_nr = *VAR_4;
 VAR_3->ms.sym = VAR_1;

 VAR_7 = FUNC_3(VAR_3);
 FUNC_4(VAR_8);
 (*VAR_4)++;

 if (VAR_7 == ((void*)0))
  return -1;

 if (!FUNC_2(VAR_7)) {
  VAR_7->ops.target.offset = VAR_7->ops.target.addr -
     FUNC_7(VAR_5, VAR_1->start);
  VAR_7->ops.target.offset_avail = 1;
 }


 if (VAR_7->ins.ops && FUNC_6(&VAR_7->ins) && !VAR_7->ops.target.sym) {
  struct addr_map_symbol VAR_18 = {
   .map = VAR_5,
   .addr = VAR_7->ops.target.addr,
  };

  if (!FUNC_8(&VAR_18) &&
      VAR_18.sym->start == VAR_18.al_addr)
   VAR_7->ops.target.sym = VAR_18.sym;
 }

 FUNC_0(&VAR_7->al, &VAR_6->src->source);

 return 0;
}
