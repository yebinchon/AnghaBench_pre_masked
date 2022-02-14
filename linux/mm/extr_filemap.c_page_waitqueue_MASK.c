
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_head_t ;
struct page {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct page*,int ) ;
 int * VAR_1 ;

__attribute__((used)) static wait_queue_head_t *FUNC_1(struct page *VAR_2)
{
 return &VAR_1[FUNC_0(VAR_2, VAR_0)];
}
