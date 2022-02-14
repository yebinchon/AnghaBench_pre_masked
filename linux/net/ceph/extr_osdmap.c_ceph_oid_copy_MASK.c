
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_object_id {scalar_t__ name_len; int name; int inline_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_object_id*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;

void FUNC_3(struct ceph_object_id *VAR_2,
     const struct ceph_object_id *VAR_3)
{
 FUNC_0(VAR_2);

 if (VAR_3->name != VAR_3->inline_name) {

  VAR_2->name = FUNC_1(VAR_3->name_len + 1,
         VAR_0 | VAR_1);
 } else {
  VAR_2->name = VAR_2->inline_name;
 }
 FUNC_2(VAR_2->name, VAR_3->name, VAR_3->name_len + 1);
 VAR_2->name_len = VAR_3->name_len;
}
