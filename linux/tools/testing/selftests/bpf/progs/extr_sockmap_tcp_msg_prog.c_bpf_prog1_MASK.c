
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_msg_md {scalar_t__ data; scalar_t__ data_end; } ;
typedef scalar_t__ __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char,...) ;

int FUNC_1(struct sk_msg_md *VAR_2)
{
 void *VAR_3 = (void *)(long) VAR_2->data_end;
 void *VAR_4 = (void *)(long) VAR_2->data;

 char *VAR_5;

 if (VAR_4 + 8 > VAR_3)
  return VAR_0;

 FUNC_0("data length %i\n", (__u64)VAR_2->data_end - (__u64)VAR_2->data);
 VAR_5 = (char *)VAR_4;
 FUNC_0("hello sendmsg hook %i %i\n", VAR_5[0], VAR_5[1]);

 return VAR_1;
}
