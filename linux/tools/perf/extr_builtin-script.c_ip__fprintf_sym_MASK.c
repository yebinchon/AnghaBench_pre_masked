
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
struct thread {int dummy; } ;
struct symbol {scalar_t__ start; scalar_t__ end; char* name; } ;
struct perf_event_attr {int dummy; } ;
struct addr_location {scalar_t__ addr; int cpu; struct symbol* sym; TYPE_1__* map; } ;
typedef int al ;
struct TYPE_3__ {int start; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 struct symbol* FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,char*,int *) ;
 int FUNC_4 (struct addr_location*,int ,int) ;
 int FUNC_5 (struct thread*,int ,int ,struct addr_location*) ;

__attribute__((used)) static int FUNC_6(uint64_t VAR_1, struct thread *VAR_2,
      u8 VAR_3, int VAR_4, struct symbol **VAR_5,
      struct perf_event_attr *VAR_6, FILE *VAR_7)
{
 struct addr_location VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_4(&VAR_8, 0, sizeof(VAR_8));

 FUNC_5(VAR_2, VAR_3, VAR_1, &VAR_8);

 if ((*VAR_5) && VAR_8.addr >= (*VAR_5)->start && VAR_8.addr < (*VAR_5)->end)
  return 0;

 VAR_8.cpu = VAR_4;
 VAR_8.sym = ((void*)0);
 if (VAR_8.map)
  VAR_8.sym = FUNC_2(VAR_8.map, VAR_8.addr);

 if (!VAR_8.sym)
  return 0;

 if (VAR_8.addr < VAR_8.sym->end)
  VAR_9 = VAR_8.addr - VAR_8.sym->start;
 else
  VAR_9 = VAR_8.addr - VAR_8.map->start - VAR_8.sym->start;
 VAR_10 += FUNC_1(VAR_7, "\t%s", VAR_8.sym->name);
 if (VAR_9)
  VAR_10 += FUNC_1(VAR_7, "%+d", VAR_9);
 VAR_10 += FUNC_1(VAR_7, ":");
 if (FUNC_0(VAR_0))
  VAR_10 += FUNC_3(VAR_8.map, VAR_8.addr, "\t", VAR_7);
 VAR_10 += FUNC_1(VAR_7, "\n");
 *VAR_5 = VAR_8.sym;

 return VAR_10;
}
