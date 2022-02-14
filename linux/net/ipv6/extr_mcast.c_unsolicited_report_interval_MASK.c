
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mldv1_unsolicited_report_interval; int mldv2_unsolicited_report_interval; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 scalar_t__ FUNC_0 (struct inet6_dev*) ;

__attribute__((used)) static int FUNC_1(struct inet6_dev *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0))
  VAR_1 = VAR_0->cnf.mldv1_unsolicited_report_interval;
 else
  VAR_1 = VAR_0->cnf.mldv2_unsolicited_report_interval;

 return VAR_1 > 0 ? VAR_1 : 1;
}
