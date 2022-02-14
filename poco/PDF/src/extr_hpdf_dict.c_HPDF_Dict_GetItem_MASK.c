
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int error; } ;
struct TYPE_10__ {TYPE_1__* value; int key; } ;
struct TYPE_9__ {int obj_class; } ;
struct TYPE_8__ {void* obj; } ;
typedef int HPDF_UINT16 ;
typedef int HPDF_UINT ;
typedef TYPE_1__* HPDF_Proxy ;
typedef TYPE_2__ HPDF_Obj_Header ;
typedef TYPE_3__* HPDF_DictElement ;
typedef TYPE_4__* HPDF_Dict ;


 TYPE_3__* FUNC_0 (TYPE_4__*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (char const*,int ) ;

void*
FUNC_4 (HPDF_Dict VAR_3,
                    const char *VAR_4,
                    HPDF_UINT16 VAR_5)
{
    HPDF_DictElement VAR_6 = FUNC_0 (VAR_3, VAR_4);
    void *VAR_7;

    if (VAR_6 && FUNC_3(VAR_4, VAR_6->key) == 0) {
        HPDF_Obj_Header *VAR_8 = (HPDF_Obj_Header *)VAR_6->value;

        if (VAR_8->obj_class == VAR_2) {
            HPDF_Proxy VAR_9 = VAR_6->value;
            VAR_8 = (HPDF_Obj_Header *)VAR_9->obj;
            VAR_7 = VAR_9->obj;
        } else
            VAR_7 = VAR_6->value;

        if ((VAR_8->obj_class & VAR_1) != VAR_5) {
            FUNC_1((" HPDF_Dict_GetItem dict=%p key=%s obj_class=0x%08X\n",
                    VAR_3, VAR_4, (HPDF_UINT)VAR_8->obj_class));
            FUNC_2 (VAR_3->error, VAR_0, 0);

            return ((void*)0);
        }

        return VAR_7;
    }

    return ((void*)0);
}
