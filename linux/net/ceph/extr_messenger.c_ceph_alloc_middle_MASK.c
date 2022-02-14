
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int middle_len; int type; } ;
struct ceph_msg {int middle; TYPE_1__ hdr; } ;
struct ceph_connection {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,struct ceph_msg*,int,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct ceph_connection *VAR_2, struct ceph_msg *VAR_3)
{
 int VAR_4 = FUNC_4(VAR_3->hdr.type);
 int VAR_5 = FUNC_5(VAR_3->hdr.middle_len);

 FUNC_3("alloc_middle %p type %d %s middle_len %d\n", VAR_3, VAR_4,
      FUNC_2(VAR_4), VAR_5);
 FUNC_0(!VAR_5);
 FUNC_0(VAR_3->middle);

 VAR_3->middle = FUNC_1(VAR_5, VAR_1);
 if (!VAR_3->middle)
  return -VAR_0;
 return 0;
}
