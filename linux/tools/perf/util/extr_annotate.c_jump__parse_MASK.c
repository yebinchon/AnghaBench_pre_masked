
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct symbol {int end; int start; } ;
struct map_symbol {struct symbol* sym; struct map* map; } ;
struct map {scalar_t__ (* unmap_ip ) (struct map*,int ) ;int (* map_ip ) (struct map*,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ addr; int outside; int offset_avail; scalar_t__ offset; int sym; } ;
struct ins_operands {char const* raw; TYPE_2__ target; void* raw_comment; } ;
struct TYPE_3__ {char comment_char; } ;
struct arch {TYPE_1__ objdump; } ;
struct addr_map_symbol {scalar_t__ addr; int sym; struct map* map; } ;


 scalar_t__ FUNC_0 (struct map*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct map*,int ) ;
 scalar_t__ FUNC_2 (struct addr_map_symbol*) ;
 void* FUNC_3 (char const*,char) ;
 void* FUNC_4 (char const*,int *,int) ;
 scalar_t__ FUNC_5 (struct map*,int ) ;
 scalar_t__ FUNC_6 (struct map*,int ) ;
 int FUNC_7 (struct map*,scalar_t__) ;
 char* FUNC_8 (char const*,struct ins_operands*) ;

__attribute__((used)) static int FUNC_9(struct arch *VAR_0, struct ins_operands *VAR_1, struct map_symbol *VAR_2)
{
 struct map *VAR_3 = VAR_2->map;
 struct symbol *VAR_4 = VAR_2->sym;
 struct addr_map_symbol VAR_5 = {
  .map = VAR_3,
 };
 const char *VAR_6 = FUNC_3(VAR_1->raw, ',');
 u64 VAR_7, VAR_8;

 VAR_1->raw_comment = FUNC_3(VAR_1->raw, VAR_0->objdump.comment_char);
 VAR_6 = FUNC_8(VAR_6, VAR_1);
 if (VAR_6++ != ((void*)0)) {
  VAR_1->target.addr = FUNC_4(VAR_6, ((void*)0), 16);
  if (!VAR_1->target.addr) {
   VAR_6 = FUNC_3(VAR_6, ',');
   VAR_6 = FUNC_8(VAR_6, VAR_1);
   if (VAR_6++ != ((void*)0))
    VAR_1->target.addr = FUNC_4(VAR_6, ((void*)0), 16);
  }
 } else {
  VAR_1->target.addr = FUNC_4(VAR_1->raw, ((void*)0), 16);
 }

 VAR_5.addr = FUNC_0(VAR_3, VAR_1->target.addr);
 VAR_7 = VAR_3->unmap_ip(VAR_3, VAR_4->start),
 VAR_8 = VAR_3->unmap_ip(VAR_3, VAR_4->end);

 VAR_1->target.outside = VAR_5.addr < VAR_7 || VAR_5.addr > VAR_8;
 if (FUNC_2(&VAR_5) == 0 &&
     FUNC_1(VAR_5.map, VAR_3->map_ip(VAR_5.map, VAR_5.addr)) == VAR_1->target.addr)
  VAR_1->target.sym = VAR_5.sym;

 if (!VAR_1->target.outside) {
  VAR_1->target.offset = VAR_5.addr - VAR_7;
  VAR_1->target.offset_avail = 1;
 } else {
  VAR_1->target.offset_avail = 0;
 }

 return 0;
}
