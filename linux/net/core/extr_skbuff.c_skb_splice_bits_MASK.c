
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct splice_pipe_desc {int nr_pages_max; scalar_t__ nr_pages; int spd_release; int * ops; struct partial_page* partial; struct page** pages; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pipe_inode_info {int dummy; } ;
struct partial_page {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct pipe_inode_info*,unsigned int*,unsigned int*,struct splice_pipe_desc*,struct sock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct pipe_inode_info*,struct splice_pipe_desc*) ;

int FUNC_2(struct sk_buff *VAR_3, struct sock *VAR_4, unsigned int VAR_5,
      struct pipe_inode_info *VAR_6, unsigned int VAR_7,
      unsigned int VAR_8)
{
 struct partial_page VAR_9[VAR_0];
 struct page *VAR_10[VAR_0];
 struct splice_pipe_desc VAR_11 = {
  .pages = VAR_10,
  .partial = VAR_9,
  .nr_pages_max = VAR_0,
  .ops = &VAR_1,
  .spd_release = VAR_2,
 };
 int VAR_12 = 0;

 FUNC_0(VAR_3, VAR_6, &VAR_5, &VAR_7, &VAR_11, VAR_4);

 if (VAR_11.nr_pages)
  VAR_12 = FUNC_1(VAR_6, &VAR_11);

 return VAR_12;
}
