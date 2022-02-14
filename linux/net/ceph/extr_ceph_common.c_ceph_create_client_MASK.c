
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_entity_addr {int dummy; } ;
struct ceph_options {struct ceph_entity_addr my_addr; } ;
struct ceph_client {int msgr; int monc; int osdc; struct ceph_options* options; int required_features; int supported_features; int * extra_mon_dispatch; scalar_t__ auth_err; int auth_wq; int mount_mutex; void* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceph_client* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ceph_entity_addr*) ;
 int FUNC_3 (int *,struct ceph_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct ceph_client*) ;
 scalar_t__ FUNC_6 (struct ceph_client*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct ceph_client*) ;
 struct ceph_client* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

struct ceph_client *FUNC_12(struct ceph_options *VAR_7, void *VAR_8)
{
 struct ceph_client *VAR_9;
 struct ceph_entity_addr *VAR_10 = ((void*)0);
 int VAR_11;

 VAR_11 = FUNC_11();
 if (VAR_11 < 0)
  return FUNC_0(VAR_11);

 VAR_9 = FUNC_9(sizeof(*VAR_9), VAR_4);
 if (VAR_9 == ((void*)0))
  return FUNC_0(-VAR_3);

 VAR_9->private = VAR_8;
 VAR_9->options = VAR_7;

 FUNC_10(&VAR_9->mount_mutex);
 FUNC_7(&VAR_9->auth_wq);
 VAR_9->auth_err = 0;

 VAR_9->extra_mon_dispatch = ((void*)0);
 VAR_9->supported_features = VAR_1;
 VAR_9->required_features = VAR_0;

 if (!FUNC_6(VAR_9, VAR_6))
  VAR_9->required_features |= VAR_2;


 if (FUNC_6(VAR_9, VAR_5))
  VAR_10 = &VAR_9->options->my_addr;

 FUNC_2(&VAR_9->msgr, VAR_10);


 VAR_11 = FUNC_3(&VAR_9->monc, VAR_9);
 if (VAR_11 < 0)
  goto fail;
 VAR_11 = FUNC_5(&VAR_9->osdc, VAR_9);
 if (VAR_11 < 0)
  goto fail_monc;

 return VAR_9;

fail_monc:
 FUNC_4(&VAR_9->monc);
fail:
 FUNC_1(&VAR_9->msgr);
 FUNC_8(VAR_9);
 return FUNC_0(VAR_11);
}
