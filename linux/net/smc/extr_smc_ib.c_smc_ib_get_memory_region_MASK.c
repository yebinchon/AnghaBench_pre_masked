
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_buf_desc {int order; int ** mr_rx; } ;
struct ib_pd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t VAR_2 ;
 int * FUNC_2 (struct ib_pd*,int ,int) ;
 int FUNC_3 (struct smc_buf_desc*) ;

int FUNC_4(struct ib_pd *VAR_3, int VAR_4,
        struct smc_buf_desc *VAR_5)
{
 if (VAR_5->mr_rx[VAR_2])
  return 0;

 VAR_5->mr_rx[VAR_2] =
  FUNC_2(VAR_3, VAR_1, 1 << VAR_5->order);
 if (FUNC_0(VAR_5->mr_rx[VAR_2])) {
  int VAR_6;

  VAR_6 = FUNC_1(VAR_5->mr_rx[VAR_2]);
  VAR_5->mr_rx[VAR_2] = ((void*)0);
  return VAR_6;
 }

 if (FUNC_3(VAR_5) != 1)
  return -VAR_0;

 return 0;
}
