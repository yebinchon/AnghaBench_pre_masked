
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int lock; int type; } ;
struct swap_cluster_info {int dummy; } ;


 int FUNC_0 (struct swap_info_struct*) ;
 int FUNC_1 (int ,unsigned long*) ;
 int FUNC_2 (struct swap_info_struct*,int,unsigned char*,struct swap_cluster_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct swap_info_struct *VAR_1, int VAR_2,
    unsigned char *VAR_3,
    struct swap_cluster_info *VAR_4,
    unsigned long *VAR_5)
{
 FUNC_1(VAR_1->type, VAR_5);
 FUNC_3(&VAR_0);
 FUNC_3(&VAR_1->lock);
 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_4(&VAR_1->lock);
 FUNC_4(&VAR_0);




 FUNC_5();
 FUNC_3(&VAR_0);
 FUNC_3(&VAR_1->lock);
 FUNC_0(VAR_1);
 FUNC_4(&VAR_1->lock);
 FUNC_4(&VAR_0);
}
