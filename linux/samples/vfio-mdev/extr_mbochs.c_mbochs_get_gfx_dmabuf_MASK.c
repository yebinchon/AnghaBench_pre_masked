
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mdev_state {int ops_lock; } ;
struct mdev_device {int dummy; } ;
struct mbochs_dmabuf {int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mbochs_dmabuf*) ;
 struct mbochs_dmabuf* FUNC_2 (struct mdev_state*,int ) ;
 struct mdev_state* FUNC_3 (struct mdev_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mdev_device *VAR_2,
     u32 VAR_3)
{
 struct mdev_state *VAR_4 = FUNC_3(VAR_2);
 struct mbochs_dmabuf *VAR_5;

 FUNC_4(&VAR_4->ops_lock);

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (!VAR_5) {
  FUNC_5(&VAR_4->ops_lock);
  return -VAR_1;
 }

 if (!VAR_5->buf)
  FUNC_1(VAR_5);

 FUNC_5(&VAR_4->ops_lock);

 if (!VAR_5->buf)
  return -VAR_0;

 return FUNC_0(VAR_5->buf, 0);
}
