
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int period; } ;
struct hist_entry {int sorted_chain; TYPE_2__* stat_acc; TYPE_1__ stat; } ;
struct TYPE_8__ {int mode; } ;
struct TYPE_7__ {scalar_t__ cumulate_callchain; } ;
struct TYPE_6__ {int period; } ;
typedef int FILE ;







 size_t FUNC_0 (int *,int *,int ) ;
 size_t FUNC_1 (int *,int *,int ) ;
 size_t FUNC_2 (int *,int *,int ,int ,int) ;
 TYPE_4__ VAR_0 ;
 int FUNC_3 (char*) ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static size_t FUNC_4(struct hist_entry *VAR_2,
         u64 VAR_3, int VAR_4,
         FILE *VAR_5)
{
 u64 VAR_6 = VAR_2->stat.period;

 if (VAR_1.cumulate_callchain)
  VAR_6 = VAR_2->stat_acc->period;

 switch (VAR_0.mode) {
 case 129:
  return FUNC_2(VAR_5, &VAR_2->sorted_chain, VAR_3,
      VAR_6, VAR_4);
  break;
 case 130:
  return FUNC_2(VAR_5, &VAR_2->sorted_chain, VAR_3,
      VAR_6, VAR_4);
  break;
 case 132:
  return FUNC_0(VAR_5, &VAR_2->sorted_chain, VAR_3);
  break;
 case 131:
  return FUNC_1(VAR_5, &VAR_2->sorted_chain, VAR_3);
  break;
 case 128:
  break;
 default:
  FUNC_3("Bad callchain mode\n");
 }

 return 0;
}
