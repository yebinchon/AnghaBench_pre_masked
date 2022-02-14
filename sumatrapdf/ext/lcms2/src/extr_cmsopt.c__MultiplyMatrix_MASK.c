
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ Implements; struct TYPE_10__* Next; } ;
typedef TYPE_1__ cmsStage ;
struct TYPE_11__ {TYPE_1__* Elements; } ;
typedef TYPE_2__ cmsPipeline ;
typedef int cmsMAT3 ;
typedef int cmsFloat64Number ;
typedef int cmsContext ;
typedef int cmsBool ;
struct TYPE_12__ {scalar_t__ Double; int * Offset; } ;
typedef TYPE_3__ _cmsStageMatrixData ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__**) ;
 int FUNC_1 (int ,int *,int *,int *) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int,int,int const*,int *) ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static
cmsBool FUNC_7(cmsContext VAR_3, cmsPipeline* VAR_4)
{
       cmsStage** VAR_5;
       cmsStage** VAR_6;
       cmsStage* VAR_7;
       cmsBool VAR_8 = VAR_0;

       VAR_5 = &VAR_4->Elements;
       if (*VAR_5 == ((void*)0)) return VAR_8;

       while (*VAR_5 != ((void*)0)) {

              VAR_6 = &((*VAR_5)->Next);
              if (*VAR_6 == ((void*)0)) return VAR_8;

              if ((*VAR_5)->Implements == VAR_2 && (*VAR_6)->Implements == VAR_2) {


                     _cmsStageMatrixData* VAR_9 = (_cmsStageMatrixData*) FUNC_3(VAR_3, *VAR_5);
                     _cmsStageMatrixData* VAR_10 = (_cmsStageMatrixData*) FUNC_3(VAR_3, *VAR_6);
                     cmsMAT3 VAR_11;


                     if (VAR_9->Offset != ((void*)0) || VAR_10 ->Offset != ((void*)0) ||
                            FUNC_4(VAR_3, *VAR_5) != 3 || FUNC_5(VAR_3, *VAR_5) != 3 ||
                            FUNC_4(VAR_3, *VAR_6) != 3 || FUNC_5(VAR_3, *VAR_6) != 3)
                            return VAR_0;


                     FUNC_1(VAR_3, &VAR_11, (cmsMAT3*)VAR_10->Double, (cmsMAT3*)VAR_9->Double);


                     VAR_7 = (*VAR_6)->Next;


                     FUNC_0(VAR_3, VAR_6);
                     FUNC_0(VAR_3, VAR_5);


                     if (!FUNC_6(VAR_3, &VAR_11)) {


                            cmsStage* VAR_12 = FUNC_2(VAR_3, 3, 3, (const cmsFloat64Number*) &VAR_11, ((void*)0));
                            if (VAR_12 == ((void*)0)) return VAR_0;


                            VAR_12->Next = VAR_7;
                            *VAR_5 = VAR_12;
                     }

                     VAR_8 = VAR_1;
              }
              else
                     VAR_5 = &((*VAR_5)->Next);
       }

       return VAR_8;
}
