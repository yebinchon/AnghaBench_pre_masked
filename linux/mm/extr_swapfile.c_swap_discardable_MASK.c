
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swap_info_struct {int bdev; } ;
struct request_queue {int dummy; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static bool FUNC_2(struct swap_info_struct *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_0(VAR_0->bdev);

 if (!VAR_1 || !FUNC_1(VAR_1))
  return 0;

 return 1;
}
