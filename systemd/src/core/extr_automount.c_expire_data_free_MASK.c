
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expire_data {int ioctl_fd; int dev_autofs_fd; } ;


 int FUNC_0 (struct expire_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct expire_data *VAR_0) {
        if (!VAR_0)
                return;

        FUNC_1(VAR_0->dev_autofs_fd);
        FUNC_1(VAR_0->ioctl_fd);
        FUNC_0(VAR_0);
}
