
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tls_context {struct scatterlist* partially_sent_record; int partially_sent_offset; } ;
struct sock {int dummy; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct sock*,struct tls_context*,struct scatterlist*,int ,int) ;

int FUNC_1(struct sock *VAR_0, struct tls_context *VAR_1,
       int VAR_2)
{
 struct scatterlist *VAR_3;
 u16 VAR_4;

 VAR_3 = VAR_1->partially_sent_record;
 VAR_4 = VAR_1->partially_sent_offset;

 VAR_1->partially_sent_record = ((void*)0);
 return FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4, VAR_2);
}
