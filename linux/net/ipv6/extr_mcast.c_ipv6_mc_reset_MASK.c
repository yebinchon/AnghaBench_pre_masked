
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int mc_maxdelay; scalar_t__ mc_v1_seen; int mc_qri; int mc_qi; int mc_qrv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inet6_dev*) ;

__attribute__((used)) static void FUNC_1(struct inet6_dev *VAR_3)
{
 VAR_3->mc_qrv = VAR_2;
 VAR_3->mc_qi = VAR_0;
 VAR_3->mc_qri = VAR_1;
 VAR_3->mc_v1_seen = 0;
 VAR_3->mc_maxdelay = FUNC_0(VAR_3);
}
