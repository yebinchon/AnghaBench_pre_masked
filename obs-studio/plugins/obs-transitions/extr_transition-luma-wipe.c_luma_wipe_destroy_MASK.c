
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct luma_wipe_info {int wipes_list; int luma_image; } ;


 int FUNC_0 (struct luma_wipe_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct luma_wipe_info *VAR_1 = VAR_0;

 FUNC_3();
 FUNC_1(&VAR_1->luma_image);
 FUNC_4();

 FUNC_2(VAR_1->wipes_list);

 FUNC_0(VAR_1);
}
