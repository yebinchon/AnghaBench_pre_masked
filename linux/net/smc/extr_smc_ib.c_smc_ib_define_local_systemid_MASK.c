
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smc_ib_device {int * mac; } ;


 int FUNC_0 (int *,int) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_2(struct smc_ib_device *VAR_1,
      u8 VAR_2)
{
 FUNC_1(&VAR_0[2], &VAR_1->mac[VAR_2 - 1],
        sizeof(VAR_1->mac[VAR_2 - 1]));
 FUNC_0(&VAR_0[0], 2);
}
