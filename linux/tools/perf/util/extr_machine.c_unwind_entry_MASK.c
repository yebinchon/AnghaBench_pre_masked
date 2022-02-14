
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct unwind_entry {int * sym; int map; int ip; } ;
struct callchain_cursor {int dummy; } ;
struct TYPE_2__ {scalar_t__ hide_unresolved; } ;


 scalar_t__ FUNC_0 (struct callchain_cursor*,int ,int *,int ) ;
 int FUNC_1 (struct callchain_cursor*,int ,int ,int *,int,int *,int ,int ,int ,char const*) ;
 char* FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct unwind_entry *VAR_1, void *VAR_2)
{
 struct callchain_cursor *VAR_3 = VAR_2;
 const char *VAR_4 = ((void*)0);
 u64 VAR_5 = VAR_1->ip;

 if (VAR_0.hide_unresolved && VAR_1->sym == ((void*)0))
  return 0;

 if (FUNC_0(VAR_3, VAR_1->map, VAR_1->sym, VAR_1->ip) == 0)
  return 0;





 if (VAR_1->map)
  VAR_5 = FUNC_3(VAR_1->map, VAR_1->ip);

 VAR_4 = FUNC_2(VAR_1->map, VAR_1->sym, VAR_5);
 return FUNC_1(VAR_3, VAR_1->ip,
           VAR_1->map, VAR_1->sym,
           0, ((void*)0), 0, 0, 0, VAR_4);
}
