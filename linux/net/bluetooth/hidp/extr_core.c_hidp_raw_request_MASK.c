
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hid_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;


 int FUNC_0 (struct hid_device*,unsigned char,int *,size_t,unsigned char) ;
 int FUNC_1 (struct hid_device*,unsigned char,int *,size_t,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct hid_device *VAR_1, unsigned char VAR_2,
       __u8 *VAR_3, size_t VAR_4, unsigned char VAR_5,
       int VAR_6)
{
 switch (VAR_6) {
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
}
