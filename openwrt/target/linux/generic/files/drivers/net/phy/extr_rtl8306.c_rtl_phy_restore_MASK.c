
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct rtl_phyregs {int duplex; int speed; int nway; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct switch_dev*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct switch_dev *VAR_3, int VAR_4, struct rtl_phyregs *VAR_5)
{
 FUNC_1(VAR_3, FUNC_0(VAR_4, VAR_1), VAR_5->nway);
 FUNC_1(VAR_3, FUNC_0(VAR_4, VAR_2), VAR_5->speed);
 FUNC_1(VAR_3, FUNC_0(VAR_4, VAR_0), VAR_5->duplex);
}
