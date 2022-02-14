
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * object; int image_attributes; int font; int image; int region; int path; int pen; int brush; } ;
struct emfplus_object {int type; TYPE_1__ u; } ;
struct TYPE_5__ {struct emfplus_object* objtable; } ;
typedef TYPE_2__ GpMetafile ;
typedef size_t BYTE ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
__attribute__((used)) static void FUNC_8(GpMetafile *VAR_0, BYTE VAR_1)
{
    struct emfplus_object *VAR_2 = &VAR_0->objtable[VAR_1];

    switch (VAR_2->type)
    {
    case 131:
        break;
    case 135:
        FUNC_1(VAR_2->u.brush);
        break;
    case 129:
        FUNC_4(VAR_2->u.pen);
        break;
    case 130:
        FUNC_3(VAR_2->u.path);
        break;
    case 128:
        FUNC_5(VAR_2->u.region);
        break;
    case 133:
        FUNC_6(VAR_2->u.image);
        break;
    case 134:
        FUNC_2(VAR_2->u.font);
        break;
    case 132:
        FUNC_7(VAR_2->u.image_attributes);
        break;
    default:
        FUNC_0("not implemented for object type %u.\n", VAR_2->type);
        return;
    }

    VAR_2->type = 131;
    VAR_2->u.object = ((void*)0);
}
