
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct route4_head {TYPE_1__* fastmap; } ;
struct route4_filter {int dummy; } ;
struct TYPE_2__ {int iif; struct route4_filter* filter; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct route4_head *VAR_1, u32 VAR_2, int VAR_3,
     struct route4_filter *VAR_4)
{
 int VAR_5 = FUNC_0(VAR_2, VAR_3);


 FUNC_1(&VAR_0);
 VAR_1->fastmap[VAR_5].id = VAR_2;
 VAR_1->fastmap[VAR_5].iif = VAR_3;
 VAR_1->fastmap[VAR_5].filter = VAR_4;
 FUNC_2(&VAR_0);
}
