
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smc_ib_device {int * mac; int ibdev; } ;
struct ib_gid_attr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_gid_attr const*) ;
 struct ib_gid_attr* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct ib_gid_attr const*) ;
 int FUNC_3 (struct ib_gid_attr const*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct smc_ib_device *VAR_1, u8 VAR_2)
{
 const struct ib_gid_attr *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_1->ibdev, VAR_2, 0);
 if (FUNC_0(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3, ((void*)0), VAR_1->mac[VAR_2 - 1]);
 FUNC_2(VAR_3);
 return VAR_4;
}
