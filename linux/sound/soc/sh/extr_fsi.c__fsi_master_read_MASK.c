
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct fsi_master {int lock; scalar_t__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_3(struct fsi_master *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0->base + VAR_1);
 FUNC_2(&VAR_0->lock, VAR_3);

 return VAR_2;
}
