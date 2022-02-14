
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct splice_pipe_desc {int nr_pages; TYPE_1__* partial; struct page** pages; } ;
struct sock {int dummy; } ;
struct pipe_inode_info {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_2__ {unsigned int len; unsigned int offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct page*,unsigned int*,unsigned int*,struct sock*) ;
 scalar_t__ FUNC_2 (struct splice_pipe_desc*,struct page*,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct splice_pipe_desc *VAR_1,
     struct pipe_inode_info *VAR_2, struct page *VAR_3,
     unsigned int *VAR_4, unsigned int VAR_5,
     bool VAR_6,
     struct sock *VAR_7)
{
 if (FUNC_3(VAR_1->nr_pages == VAR_0))
  return 1;

 if (VAR_6) {
  VAR_3 = FUNC_1(VAR_3, VAR_4, &VAR_5, VAR_7);
  if (!VAR_3)
   return 1;
 }
 if (FUNC_2(VAR_1, VAR_3, VAR_5)) {
  VAR_1->partial[VAR_1->nr_pages - 1].len += *VAR_4;
  return 0;
 }
 FUNC_0(VAR_3);
 VAR_1->pages[VAR_1->nr_pages] = VAR_3;
 VAR_1->partial[VAR_1->nr_pages].len = *VAR_4;
 VAR_1->partial[VAR_1->nr_pages].offset = VAR_5;
 VAR_1->nr_pages++;

 return 0;
}
