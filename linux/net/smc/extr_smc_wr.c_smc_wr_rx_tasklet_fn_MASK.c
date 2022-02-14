
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wc ;
struct smc_ib_device {int roce_cq_recv; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,struct ib_wc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ib_wc**,int ,int) ;
 int FUNC_3 (struct ib_wc*,int) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct smc_ib_device *VAR_4 = (struct smc_ib_device *)VAR_3;
 struct ib_wc VAR_5[VAR_2];
 int VAR_6 = 0;
 int VAR_7;

again:
 VAR_6++;
 do {
  FUNC_2(&VAR_5, 0, sizeof(VAR_5));
  VAR_7 = FUNC_0(VAR_4->roce_cq_recv, VAR_2, VAR_5);
  if (VAR_6 == 1) {
   FUNC_1(VAR_4->roce_cq_recv,
      VAR_1
      | VAR_0);
  }
  if (!VAR_7)
   break;
  FUNC_3(&VAR_5[0], VAR_7);
 } while (VAR_7 > 0);
 if (VAR_6 == 1)
  goto again;
}
