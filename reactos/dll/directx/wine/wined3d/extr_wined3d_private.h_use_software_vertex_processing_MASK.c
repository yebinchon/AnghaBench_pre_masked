
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct wined3d_device {int softwareVertexProcessing; TYPE_1__ create_parms; int * shader_backend; } ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline BOOL FUNC_0(const struct wined3d_device *VAR_5)
{
    if (VAR_5->shader_backend != &VAR_4)
        return VAR_0;

    if (VAR_5->create_parms.flags & VAR_3)
        return VAR_1;

    if (!(VAR_5->create_parms.flags & VAR_2))
        return VAR_0;

    return VAR_5->softwareVertexProcessing;
}
