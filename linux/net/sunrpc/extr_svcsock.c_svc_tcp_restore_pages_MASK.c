
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_sock {unsigned int sk_datalen; int ** sk_pages; } ;
struct TYPE_4__ {TYPE_1__* head; } ;
struct svc_rqst {int ** rq_pages; TYPE_2__ rq_arg; } ;
struct TYPE_3__ {int iov_base; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct svc_sock *VAR_2, struct svc_rqst *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6;

 if (VAR_2->sk_datalen == 0)
  return 0;
 VAR_5 = VAR_2->sk_datalen;
 VAR_6 = (VAR_5 + VAR_1 - 1) >> VAR_0;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if (VAR_3->rq_pages[VAR_4] != ((void*)0))
   FUNC_2(VAR_3->rq_pages[VAR_4]);
  FUNC_0(VAR_2->sk_pages[VAR_4] == ((void*)0));
  VAR_3->rq_pages[VAR_4] = VAR_2->sk_pages[VAR_4];
  VAR_2->sk_pages[VAR_4] = ((void*)0);
 }
 VAR_3->rq_arg.head[0].iov_base = FUNC_1(VAR_3->rq_pages[0]);
 return VAR_5;
}
