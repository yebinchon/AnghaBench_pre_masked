
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef int cmsUInt32Number ;
typedef int cmsTagTypeSignature ;
struct TYPE_4__ {scalar_t__ (* ReadPtr ) (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;} ;
typedef TYPE_1__ cmsTagTypeHandler ;
typedef int cmsTagSignature ;
typedef scalar_t__ cmsStageSignature ;
typedef int cmsStage ;
typedef int cmsPipeline ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_5__ {int TagTypes; } ;
typedef TYPE_2__ _cmsTagTypePluginChunkType ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *,int ,int *) ;
 int FUNC_5 (int ,int ,char*,char*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,struct _cms_typehandler_struct*,int *,int *,int ) ;

__attribute__((used)) static
cmsBool FUNC_8(cmsContext VAR_6, struct _cms_typehandler_struct* VAR_7,
                    cmsIOHANDLER* VAR_8,
                    void* VAR_9,
                    cmsUInt32Number VAR_10,
                    cmsUInt32Number VAR_11)
{
    cmsStageSignature VAR_12;
    cmsTagTypeHandler* VAR_13;
    cmsUInt32Number VAR_14;
    cmsPipeline *VAR_15 = (cmsPipeline *) VAR_9;
    _cmsTagTypePluginChunkType* VAR_16 = ( _cmsTagTypePluginChunkType*) FUNC_1(VAR_6, VAR_1);



    if (!FUNC_2(VAR_6, VAR_8, (cmsUInt32Number*) &VAR_12)) return VAR_0;


    if (!FUNC_2(VAR_6, VAR_8, ((void*)0))) return VAR_0;


    VAR_13 = FUNC_0((cmsTagTypeSignature) VAR_12, VAR_16 ->TagTypes, VAR_2);
    if (VAR_13 == ((void*)0)) {

        char VAR_17[5];

        FUNC_3(VAR_17, (cmsTagSignature) VAR_12);


        FUNC_5(VAR_6, VAR_5, "Unknown MPE type '%s' found.", VAR_17);
        return VAR_0;
    }



    if (VAR_13 ->ReadPtr != ((void*)0)) {


        if (!FUNC_4(VAR_6, VAR_15, VAR_4, (cmsStage*) VAR_13 ->ReadPtr(VAR_6, VAR_7, VAR_8, &VAR_14, VAR_11)))
            return VAR_0;
    }

    return VAR_3;

    FUNC_6(VAR_11);
    FUNC_6(VAR_10);
}
