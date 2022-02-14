
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {unsigned long mc_qrv; unsigned long mc_qi; unsigned long mc_qri; scalar_t__ mc_v1_seen; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct inet6_dev *VAR_1)
{






 unsigned long VAR_2;

 VAR_2 = (VAR_1->mc_qrv * VAR_1->mc_qi) + VAR_1->mc_qri;

 VAR_1->mc_v1_seen = VAR_0 + VAR_2;
}
