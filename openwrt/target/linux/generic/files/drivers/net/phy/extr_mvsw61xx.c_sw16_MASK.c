
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct switch_dev {int dummy; } ;
struct mvsw61xx_state {int base_addr; int is_indirect; int bus; } ;


 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (int ,int ,int ,int,int,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct switch_dev *VAR_0, int VAR_1, int VAR_2, u16 VAR_3)
{
 struct mvsw61xx_state *VAR_4 = FUNC_0(VAR_0);

 FUNC_1(VAR_4->bus, VAR_4->is_indirect, VAR_4->base_addr, VAR_1, VAR_2, VAR_3);
}
