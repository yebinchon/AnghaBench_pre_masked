
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_connection {int in_base_pos; int sock; } ;


 int FUNC_0 (int ,void*,int) ;

__attribute__((used)) static int FUNC_1(struct ceph_connection *VAR_0,
   int VAR_1, int VAR_2, void *VAR_3)
{
 while (VAR_0->in_base_pos < VAR_1) {
  int VAR_4 = VAR_1 - VAR_0->in_base_pos;
  int VAR_5 = VAR_2 - VAR_4;
  int VAR_6 = FUNC_0(VAR_0->sock, VAR_3 + VAR_5, VAR_4);
  if (VAR_6 <= 0)
   return VAR_6;
  VAR_0->in_base_pos += VAR_6;
 }
 return 1;
}
