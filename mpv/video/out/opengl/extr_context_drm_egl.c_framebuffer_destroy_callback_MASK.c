
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gbm_bo {int dummy; } ;
struct framebuffer {int id; int fd; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gbm_bo *VAR_0, void *VAR_1)
{
    struct framebuffer *VAR_2 = VAR_1;
    if (VAR_2) {
        FUNC_0(VAR_2->fd, VAR_2->id);
    }
}
