
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sst_data {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sst_data*,int ,int ,int ,int ,void*,int ) ;

__attribute__((used)) static int FUNC_3(struct sst_data *VAR_0,
     u8 VAR_1, u8 VAR_2, u8 VAR_3, u8 VAR_4,
     void *VAR_5, u16 VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_0->lock);
 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2,
     VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_1(&VAR_0->lock);

 return VAR_7;
}
