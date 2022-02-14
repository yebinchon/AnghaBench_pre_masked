
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct cmsghdr {int cmsg_type; int cmsg_len; } ;
typedef int __u16 ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;


__attribute__((used)) static int FUNC_2(struct cmsghdr *VAR_1, u16 *VAR_2)
{
 switch (VAR_1->cmsg_type) {
 case 128:
  if (VAR_1->cmsg_len != FUNC_1(sizeof(__u16)))
   return -VAR_0;
  *VAR_2 = *(__u16 *)FUNC_0(VAR_1);
  return 0;
 default:
  return -VAR_0;
 }
}
