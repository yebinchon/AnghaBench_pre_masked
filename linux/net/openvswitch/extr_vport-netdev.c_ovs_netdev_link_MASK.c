
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct vport {TYPE_1__* dev; int dp; } ;
struct TYPE_9__ {int flags; scalar_t__ type; int priv_flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vport* FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,char const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*,int ,int *,int *,int *) ;
 int FUNC_7 (TYPE_1__*,int ,struct vport*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct vport*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;

struct vport *FUNC_14(struct vport *VAR_7, const char *VAR_8)
{
 int VAR_9;

 VAR_7->dev = FUNC_2(FUNC_9(VAR_7->dp), VAR_8);
 if (!VAR_7->dev) {
  VAR_9 = -VAR_3;
  goto error_free_vport;
 }

 if (VAR_7->dev->flags & VAR_4 ||
     (VAR_7->dev->type != VAR_0 &&
      VAR_7->dev->type != VAR_1) ||
     FUNC_10(VAR_7->dev)) {
  VAR_9 = -VAR_2;
  goto error_put;
 }

 FUNC_12();
 VAR_9 = FUNC_6(VAR_7->dev,
        FUNC_5(VAR_7->dp),
        ((void*)0), ((void*)0), ((void*)0));
 if (VAR_9)
  goto error_unlock;

 VAR_9 = FUNC_7(VAR_7->dev, VAR_6,
      VAR_7);
 if (VAR_9)
  goto error_master_upper_dev_unlink;

 FUNC_1(VAR_7->dev);
 FUNC_4(VAR_7->dev, 1);
 VAR_7->dev->priv_flags |= VAR_5;
 FUNC_13();

 return VAR_7;

error_master_upper_dev_unlink:
 FUNC_8(VAR_7->dev, FUNC_5(VAR_7->dp));
error_unlock:
 FUNC_13();
error_put:
 FUNC_3(VAR_7->dev);
error_free_vport:
 FUNC_11(VAR_7);
 return FUNC_0(VAR_9);
}
