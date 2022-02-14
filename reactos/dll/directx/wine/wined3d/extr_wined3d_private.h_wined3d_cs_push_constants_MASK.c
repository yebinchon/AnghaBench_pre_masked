
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_cs {TYPE_1__* ops; } ;
typedef enum wined3d_push_constants { ____Placeholder_wined3d_push_constants } wined3d_push_constants ;
struct TYPE_2__ {int (* push_constants ) (struct wined3d_cs*,int,unsigned int,unsigned int,void const*) ;} ;


 int FUNC_0 (struct wined3d_cs*,int,unsigned int,unsigned int,void const*) ;

__attribute__((used)) static inline void FUNC_1(struct wined3d_cs *VAR_0, enum wined3d_push_constants VAR_1,
        unsigned int VAR_2, unsigned int VAR_3, const void *VAR_4)
{
    VAR_0->ops->push_constants(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
