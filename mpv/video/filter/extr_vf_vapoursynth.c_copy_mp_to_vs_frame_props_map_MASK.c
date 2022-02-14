
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {TYPE_2__* vsapi; } ;
struct TYPE_3__ {scalar_t__ levels; int space; } ;
struct mp_image_params {int p_w; int p_h; scalar_t__ chroma_location; TYPE_1__ color; } ;
struct mp_image {int pict_type; int fields; struct mp_image_params params; } ;
typedef int VSMap ;
struct TYPE_4__ {int (* propSetInt ) (int *,char*,int,int ) ;int (* propSetData ) (int *,char*,char*,int,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int,int ) ;
 int FUNC_2 (int *,char*,int,int ) ;
 int FUNC_3 (int *,char*,int,int ) ;
 int FUNC_4 (int *,char*,int,int ) ;
 int FUNC_5 (int *,char*,int,int ) ;
 int FUNC_6 (int *,char*,char*,int,int ) ;
 int FUNC_7 (int *,char*,int,int ) ;

__attribute__((used)) static void FUNC_8(struct priv *VAR_4, VSMap *VAR_5,
                                          struct mp_image *VAR_6)
{
    struct mp_image_params *VAR_7 = &VAR_6->params;
    VAR_4->vsapi->propSetInt(VAR_5, "_SARNum", VAR_7->p_w, 0);
    VAR_4->vsapi->propSetInt(VAR_5, "_SARDen", VAR_7->p_h, 0);
    if (VAR_7->color.levels) {
        VAR_4->vsapi->propSetInt(VAR_5, "_ColorRange",
                VAR_7->color.levels == VAR_1, 0);
    }

    VAR_4->vsapi->propSetInt(VAR_5, "_ColorSpace",
            FUNC_0(VAR_7->color.space), 0);
    if (VAR_7->chroma_location) {
        VAR_4->vsapi->propSetInt(VAR_5, "_ChromaLocation",
                VAR_7->chroma_location == VAR_0, 0);
    }
    char VAR_8 = 0;
    switch (VAR_6->pict_type) {
    case 1: VAR_8 = 'I'; break;
    case 2: VAR_8 = 'P'; break;
    case 3: VAR_8 = 'B'; break;
    }
    if (VAR_8)
        VAR_4->vsapi->propSetData(VAR_5, "_PictType", &VAR_8, 1, 0);
    int VAR_9 = 0;
    if (VAR_6->fields & VAR_2)
        VAR_9 = VAR_6->fields & VAR_3 ? 2 : 1;
    VAR_4->vsapi->propSetInt(VAR_5, "_FieldBased", VAR_9, 0);
}
