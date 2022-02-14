
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_8__ {scalar_t__ Data; } ;
typedef TYPE_2__ cmsStage ;
struct TYPE_9__ {int FirstComponent; int SecondComponent; char const* PreMaj; char const* PostMaj; char const* PreMin; char const* PostMin; int FixWhite; TYPE_4__* Pipeline; int ColorSpace; int * m; } ;
typedef TYPE_3__ cmsPsSamplerCargo ;
typedef int cmsIOHANDLER ;
typedef int cmsContext ;
typedef int cmsColorSpaceSignature ;
struct TYPE_10__ {TYPE_1__* Params; } ;
typedef TYPE_4__ _cmsStageCLutData ;
struct TYPE_7__ {size_t nInputs; int * nSamples; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char const*,...) ;
 int FUNC_1 (int ,TYPE_2__*,int ,void*,int ) ;

__attribute__((used)) static
void FUNC_2(cmsContext VAR_2, cmsIOHANDLER* VAR_3, cmsStage* VAR_4, const char* VAR_5,
                                             const char* VAR_6,
                                             const char* VAR_7,
                                             const char* VAR_8,
                                             int VAR_9,
                                             cmsColorSpaceSignature VAR_10)
{
    cmsUInt32Number VAR_11;
    cmsPsSamplerCargo VAR_12;

    VAR_12.FirstComponent = -1;
    VAR_12.SecondComponent = -1;
    VAR_12.Pipeline = (_cmsStageCLutData *) VAR_4 ->Data;
    VAR_12.m = VAR_3;
    VAR_12.PreMaj = VAR_5;
    VAR_12.PostMaj= VAR_6;

    VAR_12.PreMin = VAR_7;
    VAR_12.PostMin = VAR_8;
    VAR_12.FixWhite = VAR_9;
    VAR_12.ColorSpace = VAR_10;

    FUNC_0(VAR_2, VAR_3, "[");

    for (VAR_11=0; VAR_11 < VAR_12.Pipeline->Params->nInputs; VAR_11++)
        FUNC_0(VAR_2, VAR_3, " %d ", VAR_12.Pipeline->Params->nSamples[VAR_11]);

    FUNC_0(VAR_2, VAR_3, " [\n");

    FUNC_1(VAR_2, VAR_4, VAR_0, (void*) &VAR_12, VAR_1);

    FUNC_0(VAR_2, VAR_3, VAR_8);
    FUNC_0(VAR_2, VAR_3, VAR_6);
    FUNC_0(VAR_2, VAR_3, "] ");

}
