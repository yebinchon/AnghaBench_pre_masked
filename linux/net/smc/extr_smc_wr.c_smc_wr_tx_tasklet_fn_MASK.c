
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wc ;
struct smc_ib_device {int roce_cq_send; } ;
struct ib_wc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,struct ib_wc*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ib_wc**,int ,int) ;
 int FUNC_3 (struct ib_wc*) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3)
{
 struct smc_ib_device *VAR_4 = (struct smc_ib_device *)VAR_3;
 struct ib_wc VAR_5[VAR_2];
 int VAR_6 = 0, VAR_7;
 int VAR_8 = 0;

again:
 VAR_8++;
 do {
  FUNC_2(&VAR_5, 0, sizeof(VAR_5));
  VAR_7 = FUNC_0(VAR_4->roce_cq_send, VAR_2, VAR_5);
  if (VAR_8 == 1) {
   FUNC_1(VAR_4->roce_cq_send,
      VAR_0 |
      VAR_1);
  }
  if (!VAR_7)
   break;
  for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   FUNC_3(&VAR_5[VAR_6]);
 } while (VAR_7 > 0);
 if (VAR_8 == 1)
  goto again;
}
