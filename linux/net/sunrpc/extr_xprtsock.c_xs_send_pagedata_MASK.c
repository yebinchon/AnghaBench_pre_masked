
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_buf {scalar_t__ page_base; scalar_t__ page_len; int bvec; } ;
struct socket {int dummy; } ;
struct msghdr {int msg_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,scalar_t__) ;
 int FUNC_1 (struct xdr_buf*,int ) ;
 int FUNC_2 (struct xdr_buf*) ;
 int FUNC_3 (struct socket*,struct msghdr*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_2, struct msghdr *VAR_3, struct xdr_buf *VAR_4, size_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_0);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(&VAR_3->msg_iter, VAR_1, VAR_4->bvec,
   FUNC_2(VAR_4),
   VAR_4->page_len + VAR_4->page_base);
 return FUNC_3(VAR_2, VAR_3, VAR_5 + VAR_4->page_base);
}
