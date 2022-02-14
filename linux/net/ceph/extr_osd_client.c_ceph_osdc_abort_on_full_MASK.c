
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_client {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ceph_osd_client*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ceph_osd_client*,int ,int*) ;
 scalar_t__ FUNC_3 (struct ceph_osd_client*) ;

__attribute__((used)) static void FUNC_4(struct ceph_osd_client *VAR_3)
{
 bool VAR_4 = 0;

 if (FUNC_1(VAR_3->client, VAR_0) &&
     (FUNC_0(VAR_3, VAR_1) || FUNC_3(VAR_3)))
  FUNC_2(VAR_3, VAR_2, &VAR_4);
}
