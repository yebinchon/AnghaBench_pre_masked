
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hists {int dummy; } ;
struct TYPE_2__ {int report_block; int use_callchain; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hists*) ;
 int FUNC_1 (struct hists*,int,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct hists*,int *) ;
 int FUNC_3 (struct hists*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_4(struct hists *VAR_6)
{
 if (VAR_3)
  FUNC_0(VAR_6);

 FUNC_3(VAR_6);
 FUNC_2(VAR_6, ((void*)0));

 if (VAR_1 == VAR_0)
  VAR_5.report_block = 1;

 FUNC_1(VAR_6, !VAR_2, 0, 0, 0, VAR_4,
         !VAR_5.use_callchain);
}
