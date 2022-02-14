
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int flags; int list; scalar_t__ pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct swap_info_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_4(struct swap_info_struct *VAR_6)
{
 VAR_6->flags |= VAR_1 | VAR_0;
 FUNC_2(VAR_6->pages, &VAR_2);
 VAR_5 += VAR_6->pages;

 FUNC_1(&VAR_4);
 FUNC_3(&VAR_6->list, &VAR_3);
 FUNC_0(VAR_6);
}
