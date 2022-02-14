
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sort_entry {int se_width_idx; } ;
struct hists {int dummy; } ;
struct TYPE_2__ {int symbol_full; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (struct hists*,int ) ;

__attribute__((used)) static int FUNC_2(struct hists *VAR_2, struct sort_entry *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2, VAR_3->se_width_idx);

 if (!VAR_1.symbol_full)
  VAR_4 = FUNC_0(VAR_4, VAR_0);

 return VAR_4;
}
