
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {char tableType; int lookup_count; int* lookups; TYPE_4__ const* feature; int tag; } ;
struct TYPE_14__ {unsigned int feature_count; TYPE_6__* features; int features_size; } ;
struct TYPE_13__ {int * LookupListIndex; int LookupCount; } ;
struct TYPE_12__ {TYPE_2__* FeatureRecord; } ;
struct TYPE_11__ {int * FeatureTag; int Feature; } ;
struct TYPE_10__ {int * FeatureIndex; int FeatureCount; } ;
typedef TYPE_1__ OT_LangSys ;
typedef TYPE_2__ OT_FeatureRecord ;
typedef TYPE_3__ OT_FeatureList ;
typedef TYPE_4__ OT_Feature ;
typedef TYPE_5__ LoadedLanguage ;
typedef TYPE_6__ LoadedFeature ;
typedef int BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,char,unsigned int) ;
 int* FUNC_3 (int,int) ;
 int FUNC_4 (void**,int *,unsigned int,int) ;

__attribute__((used)) static void FUNC_5(LoadedLanguage *VAR_0, char VAR_1,
        const OT_LangSys *VAR_2, const OT_FeatureList *VAR_3)
{
    unsigned int VAR_4 = FUNC_0(VAR_2->FeatureCount);
    unsigned int VAR_5, VAR_6;

    FUNC_2("table_type %#x, %u features.\n", VAR_1, VAR_4);

    if (!VAR_4 || !FUNC_4((void **)&VAR_0->features, &VAR_0->features_size,
            VAR_0->feature_count + VAR_4, sizeof(*VAR_0->features)))
        return;

    for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5)
    {
        const OT_FeatureRecord *VAR_7;
        LoadedFeature *VAR_8;
        const OT_Feature *VAR_9;

        VAR_7 = &VAR_3->FeatureRecord[FUNC_0(VAR_2->FeatureIndex[VAR_5])];
        VAR_9 = (const OT_Feature *)((const BYTE *)VAR_3 + FUNC_0(VAR_7->Feature));

        VAR_8 = &VAR_0->features[VAR_0->feature_count + VAR_5];
        VAR_8->tag = FUNC_1(VAR_7->FeatureTag[0], VAR_7->FeatureTag[1],
                VAR_7->FeatureTag[2], VAR_7->FeatureTag[3]);
        VAR_8->tableType = VAR_1;
        VAR_8->feature = VAR_9;
        VAR_8->lookup_count = FUNC_0(VAR_9->LookupCount);
        VAR_8->lookups = FUNC_3(VAR_8->lookup_count, sizeof(*VAR_8->lookups));
        for (VAR_6 = 0; VAR_6 < VAR_8->lookup_count; ++VAR_6)
            VAR_8->lookups[VAR_6] = FUNC_0(VAR_9->LookupListIndex[VAR_6]);
    }
    VAR_0->feature_count += VAR_4;
}
