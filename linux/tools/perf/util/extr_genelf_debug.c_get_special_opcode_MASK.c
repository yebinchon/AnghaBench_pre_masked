
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long ubyte ;
struct debug_entry {unsigned int lineno; unsigned long addr; } ;
struct TYPE_2__ {unsigned int line_base; unsigned int line_range; unsigned long minimum_instruction_length; unsigned int opcode_base; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static ubyte FUNC_0(struct debug_entry *VAR_1,
    unsigned int VAR_2,
    unsigned long VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5;




 VAR_4 = (VAR_1->lineno - VAR_2) - VAR_0.line_base;

 if (VAR_4 >= VAR_0.line_range)
  return 0;




 VAR_5 = (VAR_1->addr - VAR_3) / VAR_0.minimum_instruction_length;





 if (VAR_5 <= 256 / VAR_0.line_range) {
  unsigned long VAR_6 = VAR_4 +
   (VAR_5 * VAR_0.line_range) +
   VAR_0.opcode_base;

  return VAR_6 <= 255 ? VAR_6 : 0;
 }
 return 0;
}
