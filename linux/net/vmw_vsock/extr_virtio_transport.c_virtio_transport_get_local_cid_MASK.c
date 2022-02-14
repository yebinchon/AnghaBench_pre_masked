
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct virtio_vsock {int guest_cid; } ;


 int VAR_0 ;
 struct virtio_vsock* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static u32 FUNC_3(void)
{
 struct virtio_vsock *VAR_2;
 u32 VAR_3;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  VAR_3 = VAR_0;
  goto out_rcu;
 }

 VAR_3 = VAR_2->guest_cid;
out_rcu:
 FUNC_2();
 return VAR_3;
}
