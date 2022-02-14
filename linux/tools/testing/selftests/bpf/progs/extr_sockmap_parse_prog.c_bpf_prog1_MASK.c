
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int len; scalar_t__ data; scalar_t__ data_end; scalar_t__ remote_port; scalar_t__ local_port; } ;
typedef int __u8 ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct __sk_buff*,int) ;

int FUNC_1(struct __sk_buff *VAR_1)
{
 void *VAR_2 = (void *)(long) VAR_1->data_end;
 void *VAR_3 = (void *)(long) VAR_1->data;
 __u32 VAR_4 = VAR_1->local_port;
 __u32 VAR_5 = VAR_1->remote_port;
 __u8 *VAR_6 = VAR_3;
 __u32 VAR_7 = (__u32) VAR_2 - (__u32) VAR_3;
 int VAR_8;

 if (VAR_3 + 10 > VAR_2) {
  VAR_8 = FUNC_0(VAR_1, 10);
  if (VAR_8)
   return VAR_0;

  VAR_2 = (void *)(long)VAR_1->data_end;
  VAR_3 = (void *)(long)VAR_1->data;
  if (VAR_3 + 10 > VAR_2)
   return VAR_0;
 }





 VAR_6 = VAR_3;
 VAR_6[7] = 1;
 return VAR_1->len;
}
