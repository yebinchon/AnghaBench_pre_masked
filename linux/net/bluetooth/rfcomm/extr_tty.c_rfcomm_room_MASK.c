
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dlc {unsigned int mtu; } ;
struct rfcomm_dev {int wmem_alloc; struct rfcomm_dlc* dlc; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int ,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct rfcomm_dev *VAR_0)
{
 struct rfcomm_dlc *VAR_1 = VAR_0->dlc;


 int VAR_2 = 40 - FUNC_0(&VAR_0->wmem_alloc);

 return FUNC_1(0, VAR_2) * VAR_1->mtu;
}
