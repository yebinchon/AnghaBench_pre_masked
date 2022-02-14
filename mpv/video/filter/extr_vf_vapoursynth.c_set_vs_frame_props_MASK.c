
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct priv {TYPE_1__* vsapi; } ;
struct mp_image {int dummy; } ;
typedef int VSMap ;
typedef int VSFrameRef ;
struct TYPE_2__ {int (* propSetInt ) (int *,char*,int,int ) ;int * (* getFramePropsRW ) (int *) ;} ;


 int FUNC_0 (struct priv*,int *,struct mp_image*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct priv *VAR_0, VSFrameRef *VAR_1,
                              struct mp_image *VAR_2, int VAR_3, int VAR_4)
{
    VSMap *VAR_5 = VAR_0->vsapi->getFramePropsRW(VAR_1);
    if (!VAR_5)
        return -1;
    VAR_0->vsapi->propSetInt(VAR_5, "_DurationNum", VAR_3, 0);
    VAR_0->vsapi->propSetInt(VAR_5, "_DurationDen", VAR_4, 0);
    FUNC_0(VAR_0, VAR_5, VAR_2);
    return 0;
}
