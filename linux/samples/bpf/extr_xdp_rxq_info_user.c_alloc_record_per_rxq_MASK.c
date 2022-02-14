
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct record {int dummy; } ;
struct TYPE_2__ {unsigned int max_entries; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 struct record* FUNC_3 (size_t) ;
 int FUNC_4 (struct record*,int ,size_t) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct record *FUNC_5(void)
{
 unsigned int VAR_3 = FUNC_0(VAR_1)->max_entries;
 struct record *VAR_4;
 size_t VAR_5;

 VAR_5 = sizeof(struct record) * VAR_3;
 VAR_4 = FUNC_3(VAR_5);
 FUNC_4(VAR_4, 0, VAR_5);
 if (!VAR_4) {
  FUNC_2(VAR_2, "Mem alloc error (nr_rxqs:%u)\n", VAR_3);
  FUNC_1(VAR_0);
 }
 return VAR_4;
}
