
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int date_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
struct TYPE_12__ {int dispex; int daylightBias; int daylightDate; int standardBias; int standardDate; int bias; int time; } ;
struct TYPE_11__ {int DaylightBias; int DaylightDate; int StandardBias; int StandardDate; int Bias; } ;
typedef TYPE_2__ TIME_ZONE_INFORMATION ;
typedef int HRESULT ;
typedef TYPE_3__ DateInstance ;
typedef int DOUBLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_5 (int *,TYPE_1__*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_4, jsdisp_t *VAR_5, DOUBLE VAR_6, jsdisp_t **VAR_7)
{
    DateInstance *VAR_8;
    HRESULT VAR_9;
    TIME_ZONE_INFORMATION VAR_10;

    FUNC_1(&VAR_10);

    VAR_8 = FUNC_2(sizeof(DateInstance));
    if(!VAR_8)
        return VAR_2;

    if(VAR_5)
        VAR_9 = FUNC_4(&VAR_8->dispex, VAR_4, &VAR_1, VAR_5);
    else
        VAR_9 = FUNC_5(&VAR_8->dispex, VAR_4, &VAR_0, VAR_4->date_constr);
    if(FUNC_0(VAR_9)) {
        FUNC_3(VAR_8);
        return VAR_9;
    }

    VAR_8->time = VAR_6;
    VAR_8->bias = VAR_10.Bias;
    VAR_8->standardDate = VAR_10.StandardDate;
    VAR_8->standardBias = VAR_10.StandardBias;
    VAR_8->daylightDate = VAR_10.DaylightDate;
    VAR_8->daylightBias = VAR_10.DaylightBias;

    *VAR_7 = &VAR_8->dispex;
    return VAR_3;
}
