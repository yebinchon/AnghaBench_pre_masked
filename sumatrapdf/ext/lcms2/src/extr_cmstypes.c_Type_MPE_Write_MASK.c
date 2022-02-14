
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct _cms_typehandler_struct {int dummy; } ;
typedef size_t cmsUInt32Number ;
typedef size_t cmsUInt16Number ;
typedef int cmsTagTypeSignature ;
struct TYPE_24__ {int (* WritePtr ) (int ,struct _cms_typehandler_struct*,TYPE_4__*,TYPE_2__*,int) ;} ;
typedef TYPE_1__ cmsTagTypeHandler ;
typedef int cmsTagSignature ;
typedef size_t cmsStageSignature ;
struct TYPE_25__ {size_t Type; struct TYPE_25__* Next; } ;
typedef TYPE_2__ cmsStage ;
struct TYPE_26__ {TYPE_2__* Elements; } ;
typedef TYPE_3__ cmsPipeline ;
struct TYPE_27__ {size_t (* Tell ) (int ,TYPE_4__*) ;int (* Seek ) (int ,TYPE_4__*,size_t) ;} ;
typedef TYPE_4__ cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_28__ {int TagTypes; } ;
typedef TYPE_5__ _cmsTagTypePluginChunkType ;
typedef int _cmsTagBase ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,size_t,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,size_t*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,TYPE_4__*) ;
 int FUNC_6 (int ,TYPE_4__*,size_t) ;
 int FUNC_7 (int ,TYPE_4__*,size_t) ;
 int VAR_4 ;
 size_t FUNC_8 (int ,TYPE_3__*) ;
 size_t FUNC_9 (int ,TYPE_3__*) ;
 size_t FUNC_10 (int ,TYPE_3__*) ;
 int FUNC_11 (int ,int ,char*,char*) ;
 int FUNC_12 (size_t) ;
 size_t FUNC_13 (int ,TYPE_4__*) ;
 size_t FUNC_14 (int ,TYPE_4__*) ;
 size_t FUNC_15 (int ,TYPE_4__*) ;
 size_t FUNC_16 (int ,TYPE_4__*) ;
 int FUNC_17 (int ,struct _cms_typehandler_struct*,TYPE_4__*,TYPE_2__*,int) ;
 size_t FUNC_18 (int ,TYPE_4__*) ;
 size_t FUNC_19 (int ,TYPE_4__*) ;
 int FUNC_20 (int ,TYPE_4__*,size_t) ;
 int FUNC_21 (int ,TYPE_4__*,size_t) ;

__attribute__((used)) static
cmsBool FUNC_22(cmsContext VAR_5, struct _cms_typehandler_struct* VAR_6, cmsIOHANDLER* VAR_7, void* VAR_8, cmsUInt32Number VAR_9)
{
    cmsUInt32Number VAR_10, VAR_11, VAR_12, VAR_13;
    cmsUInt32Number VAR_14, VAR_15;
    cmsUInt32Number VAR_16;
    cmsUInt32Number *VAR_17 = ((void*)0), *VAR_18 = ((void*)0), VAR_19;
    cmsStageSignature VAR_20;
    cmsPipeline* VAR_21 = (cmsPipeline*) VAR_8;
    cmsStage* VAR_22 = VAR_21 ->Elements;
    cmsTagTypeHandler* VAR_23;
    _cmsTagTypePluginChunkType* VAR_24 = ( _cmsTagTypePluginChunkType*) FUNC_2(VAR_5, VAR_1);

    VAR_11 = VAR_7 ->Tell(VAR_5, VAR_7) - sizeof(_cmsTagBase);

    VAR_14 = FUNC_8(VAR_5, VAR_21);
    VAR_15 = FUNC_9(VAR_5, VAR_21);
    VAR_16 = FUNC_10(VAR_5, VAR_21);

    VAR_17 = (cmsUInt32Number *) FUNC_1(VAR_5, VAR_16, sizeof(cmsUInt32Number));
    if (VAR_17 == ((void*)0)) goto Error;

    VAR_18 = (cmsUInt32Number *) FUNC_1(VAR_5, VAR_16, sizeof(cmsUInt32Number));
    if (VAR_18 == ((void*)0)) goto Error;


    if (!FUNC_6(VAR_5, VAR_7, (cmsUInt16Number) VAR_14)) goto Error;
    if (!FUNC_6(VAR_5, VAR_7, (cmsUInt16Number) VAR_15)) goto Error;
    if (!FUNC_7(VAR_5, VAR_7, (cmsUInt16Number) VAR_16)) goto Error;

    VAR_12 = VAR_7 ->Tell(VAR_5, VAR_7);


    for (VAR_10=0; VAR_10 < VAR_16; VAR_10++) {
        if (!FUNC_7(VAR_5, VAR_7, 0)) goto Error;
        if (!FUNC_7(VAR_5, VAR_7, 0)) goto Error;
    }


    for (VAR_10=0; VAR_10 < VAR_16; VAR_10++) {

        VAR_17[VAR_10] = VAR_7 ->Tell(VAR_5, VAR_7) - VAR_11;

        VAR_20 = VAR_22 ->Type;

        VAR_23 = FUNC_0((cmsTagTypeSignature) VAR_20, VAR_24->TagTypes, VAR_2);
        if (VAR_23 == ((void*)0)) {

                char VAR_25[5];

                FUNC_4(VAR_25, (cmsTagSignature) VAR_20);


                 FUNC_11(VAR_5, VAR_4, "Found unknown MPE type '%s'", VAR_25);
                 goto Error;
        }

        if (!FUNC_7(VAR_5, VAR_7, VAR_20)) goto Error;
        if (!FUNC_7(VAR_5, VAR_7, 0)) goto Error;
        VAR_19 = VAR_7 ->Tell(VAR_5, VAR_7);
        if (!VAR_23 ->WritePtr(VAR_5, VAR_6, VAR_7, VAR_22, 1)) goto Error;
        if (!FUNC_5(VAR_5, VAR_7)) goto Error;

        VAR_18[VAR_10] = VAR_7 ->Tell(VAR_5, VAR_7) - VAR_19;

        VAR_22 = VAR_22 ->Next;
    }


    VAR_13 = VAR_7 ->Tell(VAR_5, VAR_7);

    if (!VAR_7 ->Seek(VAR_5, VAR_7, VAR_12)) goto Error;

    for (VAR_10=0; VAR_10 < VAR_16; VAR_10++) {
        if (!FUNC_7(VAR_5, VAR_7, VAR_17[VAR_10])) goto Error;
        if (!FUNC_7(VAR_5, VAR_7, VAR_18[VAR_10])) goto Error;
    }

    if (!VAR_7 ->Seek(VAR_5, VAR_7, VAR_13)) goto Error;

    if (VAR_17 != ((void*)0)) FUNC_3(VAR_5, VAR_17);
    if (VAR_18 != ((void*)0)) FUNC_3(VAR_5, VAR_18);
    return VAR_3;

Error:
    if (VAR_17 != ((void*)0)) FUNC_3(VAR_5, VAR_17);
    if (VAR_18 != ((void*)0)) FUNC_3(VAR_5, VAR_18);
    return VAR_0;

    FUNC_12(VAR_9);
}
