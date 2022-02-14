
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {struct scatterlist* partially_sent_record; } ;
struct sock {int dummy; } ;
struct scatterlist {int length; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct sock*,int ) ;

bool FUNC_4(struct sock *VAR_0, struct tls_context *VAR_1)
{
 struct scatterlist *VAR_2;

 VAR_2 = VAR_1->partially_sent_record;
 if (!VAR_2)
  return 0;

 while (1) {
  FUNC_0(FUNC_2(VAR_2));
  FUNC_3(VAR_0, VAR_2->length);

  if (FUNC_1(VAR_2))
   break;
  VAR_2++;
 }
 VAR_1->partially_sent_record = ((void*)0);
 return 1;
}
