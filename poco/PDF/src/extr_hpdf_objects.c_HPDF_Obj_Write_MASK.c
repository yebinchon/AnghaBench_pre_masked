
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int obj_id; scalar_t__ obj_class; int gen_no; } ;
struct TYPE_3__ {scalar_t__ obj; } ;
typedef int HPDF_UINT ;
typedef int HPDF_Stream ;
typedef int HPDF_STATUS ;
typedef TYPE_1__* HPDF_Proxy ;
typedef TYPE_2__ HPDF_Obj_Header ;
typedef int HPDF_Encrypt ;


 char* FUNC_0 (char*,int,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,char*) ;
 int FUNC_4 (int ,char*) ;

HPDF_STATUS
FUNC_5 (void *VAR_4,
                 HPDF_Stream VAR_5,
                 HPDF_Encrypt VAR_6)
{
    HPDF_Obj_Header *VAR_7 = (HPDF_Obj_Header *)VAR_4;

    FUNC_2((" HPDF_Obj_Write\n"));

    if (VAR_7->obj_id & VAR_2) {
         FUNC_2(("#HPDF_Obj_Write obj=0x%08X skipped\n", (HPDF_UINT)VAR_4));
         return VAR_1;
    }

    if (VAR_7->obj_class == VAR_0) {
        char VAR_8[VAR_3];
        char *VAR_9 = VAR_8;
        char *VAR_10 = VAR_8 + VAR_3 - 1;
        HPDF_Proxy VAR_11 = VAR_4;

        VAR_7 = (HPDF_Obj_Header*)VAR_11->obj;

        VAR_9 = FUNC_0 (VAR_9, VAR_7->obj_id & 0x00FFFFFF, VAR_10);
        *VAR_9++ = ' ';
        VAR_9 = FUNC_0 (VAR_9, VAR_7->gen_no, VAR_10);
        FUNC_3(VAR_9, " R", VAR_10);

        return FUNC_4(VAR_5, VAR_8);
    }

    return FUNC_1(VAR_4, VAR_5, VAR_6);
}
