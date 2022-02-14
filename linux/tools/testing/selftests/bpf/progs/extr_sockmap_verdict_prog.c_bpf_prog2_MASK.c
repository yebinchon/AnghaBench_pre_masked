
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct __sk_buff {int remote_port; int local_port; scalar_t__ data; scalar_t__ data_end; } ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct __sk_buff*,int *,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(struct __sk_buff *VAR_3)
{
 void *VAR_4 = (void *)(long) VAR_3->data_end;
 void *VAR_5 = (void *)(long) VAR_3->data;
 __u32 VAR_6 = VAR_3->local_port;
 __u32 VAR_7 = VAR_3->remote_port;
 __u8 *VAR_8 = VAR_5;
 __u8 VAR_9, VAR_10;

 if (VAR_5 + 8 > VAR_4)
  return VAR_0;

 VAR_10 = VAR_8[0];
 VAR_9 = VAR_8[1];

 VAR_8[0] = 0xd;
 VAR_8[1] = 0xe;
 VAR_8[2] = 0xa;
 VAR_8[3] = 0xd;
 VAR_8[4] = 0xb;
 VAR_8[5] = 0xe;
 VAR_8[6] = 0xe;
 VAR_8[7] = 0xf;

 if (!VAR_10)
  return FUNC_0(VAR_3, &VAR_1, VAR_9, 0);
 return FUNC_0(VAR_3, &VAR_2, VAR_9, 0);
}
