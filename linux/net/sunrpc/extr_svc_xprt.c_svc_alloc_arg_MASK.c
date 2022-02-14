
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_buf {int page_len; int len; TYPE_2__* tail; scalar_t__ page_base; struct page** pages; TYPE_1__* head; } ;
struct svc_serv {int sv_max_mesg; } ;
struct svc_rqst {struct page** rq_pages; struct xdr_buf rq_arg; struct page** rq_page_end; struct svc_serv* rq_server; } ;
struct page {int dummy; } ;
struct TYPE_4__ {scalar_t__ iov_len; } ;
struct TYPE_3__ {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct page* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct svc_rqst *VAR_7)
{
 struct svc_serv *VAR_8 = VAR_7->rq_server;
 struct xdr_buf *VAR_9;
 int VAR_10;
 int VAR_11;


 VAR_10 = (VAR_8->sv_max_mesg + 2 * VAR_3) >> VAR_2;
 if (VAR_10 > VAR_4) {
  FUNC_4("svc: warning: pages=%u > RPCSVC_MAXPAGES=%lu\n",
        VAR_10, VAR_4);

  VAR_10 = VAR_4;
 }
 for (VAR_11 = 0; VAR_11 < VAR_10 ; VAR_11++)
  while (VAR_7->rq_pages[VAR_11] == ((void*)0)) {
   struct page *VAR_12 = FUNC_0(VAR_1);
   if (!VAR_12) {
    FUNC_6(VAR_5);
    if (FUNC_7() || FUNC_1()) {
     FUNC_6(VAR_6);
     return -VAR_0;
    }
    FUNC_5(FUNC_2(500));
   }
   VAR_7->rq_pages[VAR_11] = VAR_12;
  }
 VAR_7->rq_page_end = &VAR_7->rq_pages[VAR_11];
 VAR_7->rq_pages[VAR_11++] = ((void*)0);


 VAR_9 = &VAR_7->rq_arg;
 VAR_9->head[0].iov_base = FUNC_3(VAR_7->rq_pages[0]);
 VAR_9->head[0].iov_len = VAR_3;
 VAR_9->pages = VAR_7->rq_pages + 1;
 VAR_9->page_base = 0;

 VAR_9->page_len = (VAR_10-2)*VAR_3;
 VAR_9->len = (VAR_10-1)*VAR_3;
 VAR_9->tail[0].iov_len = 0;
 return 0;
}
