
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct ceph_object_id {int name_len; int inline_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ceph_object_id*) ;
 int FUNC_2 (int ,int,char const*,int ) ;

int FUNC_3(struct ceph_object_id *VAR_0, const char *VAR_1, va_list VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_1(VAR_0));

 VAR_3 = FUNC_2(VAR_0->inline_name, sizeof(VAR_0->inline_name), VAR_1, VAR_2);
 if (VAR_3 >= sizeof(VAR_0->inline_name))
  return VAR_3;

 VAR_0->name_len = VAR_3;
 return 0;
}
