
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hists {int dummy; } ;
struct TYPE_2__ {int dso_list; int field_sep; int col_width_list_str; } ;


 int VAR_0 ;
 unsigned int const FUNC_0 (struct hists*,int) ;
 int FUNC_1 (struct hists*,int,unsigned int const) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct hists *VAR_2, int VAR_3)
{
 const unsigned int VAR_4 = VAR_0 / 4;

 if (FUNC_0(VAR_2, VAR_3) < VAR_4 &&
     !VAR_1.col_width_list_str && !VAR_1.field_sep &&
     !VAR_1.dso_list)
  FUNC_1(VAR_2, VAR_3, VAR_4);
}
