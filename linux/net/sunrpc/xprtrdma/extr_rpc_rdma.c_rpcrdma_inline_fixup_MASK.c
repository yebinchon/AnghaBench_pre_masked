
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {TYPE_5__* tail; TYPE_1__* head; } ;
struct TYPE_10__ {int page_base; int page_len; TYPE_3__* tail; struct page** pages; TYPE_2__* head; } ;
struct rpc_rqst {TYPE_6__ rq_private_buf; TYPE_4__ rq_rcv_buf; } ;
struct page {int dummy; } ;
struct TYPE_11__ {char* iov_base; } ;
struct TYPE_9__ {char* iov_base; } ;
struct TYPE_8__ {char* iov_base; int iov_len; } ;
struct TYPE_7__ {char* iov_base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct rpc_rqst*,int,int) ;
 int FUNC_7 (struct rpc_rqst*,int,char*,int,int) ;

__attribute__((used)) static unsigned long
FUNC_8(struct rpc_rqst *VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8, VAR_9;
 char *VAR_10;
 struct page **VAR_11;
 int VAR_12;




 VAR_2->rq_rcv_buf.head[0].iov_base = VAR_3;
 VAR_2->rq_private_buf.head[0].iov_base = VAR_3;




 VAR_9 = VAR_2->rq_rcv_buf.head[0].iov_len;
 if (VAR_9 > VAR_4)
  VAR_9 = VAR_4;
 FUNC_6(VAR_2, VAR_4, VAR_9);
 VAR_3 += VAR_9;
 VAR_4 -= VAR_9;

 VAR_11 = VAR_2->rq_rcv_buf.pages +
  (VAR_2->rq_rcv_buf.page_base >> VAR_0);
 VAR_12 = FUNC_5(VAR_2->rq_rcv_buf.page_base);
 VAR_6 = 0;
 if (VAR_4 && VAR_2->rq_rcv_buf.page_len) {
  int VAR_13;

  VAR_13 = VAR_2->rq_rcv_buf.page_len;
  if (VAR_13 > VAR_4)
   VAR_13 = VAR_4;
  VAR_8 = FUNC_0(VAR_12 + VAR_13) >> VAR_0;
  for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
   VAR_9 = VAR_1 - VAR_12;
   if (VAR_9 > VAR_13)
    VAR_9 = VAR_13;

   FUNC_7(VAR_2, VAR_7, VAR_3,
      VAR_4, VAR_9);
   VAR_10 = FUNC_2(VAR_11[VAR_7]);
   FUNC_4(VAR_10 + VAR_12, VAR_3, VAR_9);
   FUNC_1(VAR_11[VAR_7]);
   FUNC_3(VAR_10);
   VAR_3 += VAR_9;
   VAR_4 -= VAR_9;
   VAR_6 += VAR_9;
   VAR_13 -= VAR_9;
   if (!VAR_13)
    break;
   VAR_12 = 0;
  }







  if (VAR_5)
   VAR_3 -= VAR_5;
 }




 if (VAR_4 || VAR_5) {
  VAR_2->rq_rcv_buf.tail[0].iov_base = VAR_3;
  VAR_2->rq_private_buf.tail[0].iov_base = VAR_3;
 }

 return VAR_6;
}
