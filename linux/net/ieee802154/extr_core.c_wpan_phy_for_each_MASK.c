
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpan_phy_iter_data {int (* fn ) (struct wpan_phy*,void*) ;void* data; } ;


 int FUNC_0 (int *,int *,struct wpan_phy_iter_data*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(int (*VAR_2)(struct wpan_phy *VAR_3, void *VAR_4),
        void *VAR_5)
{
 struct wpan_phy_iter_data VAR_6 = {
  .fn = VAR_2,
  .data = VAR_5,
 };

 return FUNC_0(&VAR_0, ((void*)0),
   &VAR_6, VAR_1);
}
