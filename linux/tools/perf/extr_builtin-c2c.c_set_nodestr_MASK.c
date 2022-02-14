
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2c_hist_entry {int nodestr; int nodeset; } ;
typedef int buf ;
struct TYPE_2__ {int nodes_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*,int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (struct c2c_hist_entry*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct c2c_hist_entry *VAR_2)
{
 char VAR_3[30];
 int VAR_4;

 if (VAR_2->nodestr)
  return 0;

 if (FUNC_1(VAR_2->nodeset, VAR_1.nodes_cnt)) {
  VAR_4 = FUNC_0(VAR_2->nodeset, VAR_1.nodes_cnt,
          VAR_3, sizeof(VAR_3));
 } else {
  VAR_4 = FUNC_2(VAR_3, sizeof(VAR_3), "N/A");
 }

 FUNC_3(VAR_2, VAR_4);
 VAR_2->nodestr = FUNC_4(VAR_3);
 return VAR_2->nodestr ? 0 : -VAR_0;
}
