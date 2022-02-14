
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct page {int dummy; } ;
struct msghdr {int msg_flags; int msg_iter; } ;
struct bio_vec {int bv_offset; size_t bv_len; struct page* bv_page; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,struct bio_vec*,int,size_t) ;
 int FUNC_2 (struct socket*,struct msghdr*,int) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_5, struct page *VAR_6,
       int VAR_7, size_t VAR_8)
{
 struct bio_vec VAR_9 = {
  .bv_page = VAR_6,
  .bv_offset = VAR_7,
  .bv_len = VAR_8
 };
 struct msghdr VAR_10 = { .msg_flags = VAR_1 | VAR_2 };
 int VAR_11;

 FUNC_0(VAR_7 + VAR_8 > VAR_3);
 FUNC_1(&VAR_10.msg_iter, VAR_4, &VAR_9, 1, VAR_8);
 VAR_11 = FUNC_2(VAR_5, &VAR_10, VAR_10.msg_flags);
 if (VAR_11 == -VAR_0)
  VAR_11 = 0;
 return VAR_11;
}
