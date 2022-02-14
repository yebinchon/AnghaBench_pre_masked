
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kvec {unsigned int iov_len; int * iov_base; } ;
struct ceph_connection {int sock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct ceph_connection *VAR_0,
     struct kvec *VAR_1,
     unsigned int VAR_2, u32 *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(!VAR_1);

 while (VAR_1->iov_len < VAR_2) {
  FUNC_0(VAR_1->iov_base == ((void*)0));
  VAR_5 = VAR_2 - VAR_1->iov_len;
  VAR_4 = FUNC_1(VAR_0->sock, (char *)VAR_1->iov_base +
           VAR_1->iov_len, VAR_5);
  if (VAR_4 <= 0)
   return VAR_4;
  VAR_1->iov_len += VAR_4;
 }
 if (VAR_1->iov_len == VAR_2)
  *VAR_3 = FUNC_2(0, VAR_1->iov_base, VAR_1->iov_len);

 return 1;
}
