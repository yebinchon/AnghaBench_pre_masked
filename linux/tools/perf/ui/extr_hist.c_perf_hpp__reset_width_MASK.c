
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_hpp_fmt {int idx; int len; } ;
struct hists {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct perf_hpp_fmt*) ;
 scalar_t__ FUNC_2 (struct perf_hpp_fmt*) ;
 void FUNC_3 (struct perf_hpp_fmt*,struct hists*) ;

void FUNC_4(struct perf_hpp_fmt *VAR_1, struct hists *VAR_2)
{
 if (FUNC_2(VAR_1))
  return FUNC_3(VAR_1, VAR_2);

 if (FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_1->idx >= VAR_0);

 switch (VAR_1->idx) {
 case 135:
 case 131:
 case 130:
 case 134:
  VAR_1->len = 8;
  break;

 case 133:
 case 132:
  VAR_1->len = 9;
  break;

 case 128:
 case 129:
  VAR_1->len = 12;
  break;

 default:
  break;
 }
}
