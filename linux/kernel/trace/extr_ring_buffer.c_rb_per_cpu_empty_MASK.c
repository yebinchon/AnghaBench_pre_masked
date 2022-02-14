
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer_per_cpu {struct buffer_page* commit_page; struct buffer_page* reader_page; } ;
struct buffer_page {scalar_t__ read; } ;


 scalar_t__ FUNC_0 (struct buffer_page*) ;
 struct buffer_page* FUNC_1 (struct ring_buffer_per_cpu*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct ring_buffer_per_cpu *VAR_0)
{
 struct buffer_page *VAR_1 = VAR_0->reader_page;
 struct buffer_page *VAR_2 = FUNC_1(VAR_0);
 struct buffer_page *VAR_3 = VAR_0->commit_page;


 if (FUNC_2(!VAR_2))
  return 1;

 return VAR_1->read == FUNC_0(VAR_1) &&
  (VAR_3 == VAR_1 ||
   (VAR_3 == VAR_2 &&
    VAR_2->read == FUNC_0(VAR_3)));
}
