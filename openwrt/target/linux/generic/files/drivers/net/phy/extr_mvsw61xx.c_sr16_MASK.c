
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;
struct mvsw61xx_state {int base_addr; int is_indirect; int bus; } ;


 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (int ,int ,int ,int,int) ;

__attribute__((used)) static inline u16
FUNC_2(struct switch_dev *VAR_0, int VAR_1, int VAR_2)
{
 struct mvsw61xx_state *VAR_3 = FUNC_0(VAR_0);

 return FUNC_1(VAR_3->bus, VAR_3->is_indirect, VAR_3->base_addr, VAR_1, VAR_2);
}
