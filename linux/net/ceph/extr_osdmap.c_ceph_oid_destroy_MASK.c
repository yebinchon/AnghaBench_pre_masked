
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_object_id {scalar_t__ name; scalar_t__ inline_name; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct ceph_object_id *VAR_0)
{
 if (VAR_0->name != VAR_0->inline_name)
  FUNC_0(VAR_0->name);
}
