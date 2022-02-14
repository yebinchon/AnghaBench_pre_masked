
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tls_context {int in_tcp_sendpages; int partially_sent_offset; void* partially_sent_record; } ;
struct sock {int dummy; } ;
struct scatterlist {int length; int offset; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct page*,int,size_t,int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct scatterlist*) ;
 struct scatterlist* FUNC_3 (struct scatterlist*) ;
 struct page* FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct sock*,int) ;
 int FUNC_6 (struct sock*) ;

int FUNC_7(struct sock *VAR_1,
  struct tls_context *VAR_2,
  struct scatterlist *VAR_3,
  u16 VAR_4,
  int VAR_5)
{
 int VAR_6 = VAR_5 | VAR_0;
 int VAR_7 = 0;
 struct page *VAR_8;
 size_t VAR_9;
 int VAR_10 = VAR_4;

 VAR_9 = VAR_3->length - VAR_10;
 VAR_10 += VAR_3->offset;

 VAR_2->in_tcp_sendpages = 1;
 while (1) {
  if (FUNC_2(VAR_3))
   VAR_6 = VAR_5;


  FUNC_6(VAR_1);
  VAR_8 = FUNC_4(VAR_3);
retry:
  VAR_7 = FUNC_0(VAR_1, VAR_8, VAR_10, VAR_9, VAR_6);

  if (VAR_7 != VAR_9) {
   if (VAR_7 > 0) {
    VAR_10 += VAR_7;
    VAR_9 -= VAR_7;
    goto retry;
   }

   VAR_10 -= VAR_3->offset;
   VAR_2->partially_sent_offset = VAR_10;
   VAR_2->partially_sent_record = (void *)VAR_3;
   VAR_2->in_tcp_sendpages = 0;
   return VAR_7;
  }

  FUNC_1(VAR_8);
  FUNC_5(VAR_1, VAR_3->length);
  VAR_3 = FUNC_3(VAR_3);
  if (!VAR_3)
   break;

  VAR_10 = VAR_3->offset;
  VAR_9 = VAR_3->length;
 }

 VAR_2->in_tcp_sendpages = 0;

 return 0;
}
