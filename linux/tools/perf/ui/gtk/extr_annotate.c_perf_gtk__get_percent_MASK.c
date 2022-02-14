
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct symbol {int dummy; } ;
struct sym_hist {double nr_samples; TYPE_1__* addr; } ;
struct TYPE_5__ {size_t offset; } ;
struct disasm_line {TYPE_2__ al; } ;
typedef size_t s64 ;
struct TYPE_6__ {int event_group; } ;
struct TYPE_4__ {double nr_samples; } ;


 struct sym_hist* FUNC_0 (int ,int) ;
 char* FUNC_1 (double) ;
 scalar_t__ FUNC_2 (char*,size_t,char*,...) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct symbol*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_5(char *VAR_1, size_t VAR_2, struct symbol *VAR_3,
     struct disasm_line *VAR_4, int VAR_5)
{
 struct sym_hist *VAR_6;
 double VAR_7 = 0.0;
 const char *VAR_8;
 int VAR_9 = 0;

 FUNC_3(VAR_1, "");

 if (VAR_4->al.offset == (s64) -1)
  return 0;

 VAR_6 = FUNC_0(FUNC_4(VAR_3), VAR_5);
 if (!VAR_0.event_group && !VAR_6->addr[VAR_4->al.offset].nr_samples)
  return 0;

 VAR_7 = 100.0 * VAR_6->addr[VAR_4->al.offset].nr_samples / VAR_6->nr_samples;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  VAR_9 += FUNC_2(VAR_1, VAR_2, "%s", VAR_8);
 VAR_9 += FUNC_2(VAR_1 + VAR_9, VAR_2 - VAR_9, "%6.2f%%", VAR_7);
 if (VAR_8)
  VAR_9 += FUNC_2(VAR_1 + VAR_9, VAR_2 - VAR_9, "</span>");

 return VAR_9;
}
