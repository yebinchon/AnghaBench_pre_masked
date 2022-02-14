
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {int szPname; } ;
struct TYPE_7__ {scalar_t__ MixersCount; } ;
typedef int PVOID ;
typedef TYPE_1__* PSND_MIXER ;
typedef int (* PFNSNDMIXENUMPRODUCTS ) (TYPE_1__*,scalar_t__,int ,int ) ;
typedef TYPE_3__ MIXERCAPS ;
typedef int HMIXER ;
typedef int Caps ;
typedef int BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ,int ,int ) ;

BOOL
FUNC_4(PSND_MIXER VAR_3,
                     PFNSNDMIXENUMPRODUCTS VAR_4,
                     PVOID VAR_5)
{
    MIXERCAPS VAR_6;
    HMIXER VAR_7;
    UINT VAR_8;
    BOOL VAR_9 = VAR_2;

    for (VAR_8 = 0; VAR_8 < VAR_3->MixersCount; VAR_8++)
    {
        if (FUNC_3(&VAR_7,
                      VAR_8,
                      0,
                      0,
                      0) == VAR_1)
        {
            if (FUNC_2(VAR_8,
                                &VAR_6,
                                sizeof(VAR_6)) == VAR_1)
            {
                if (!VAR_4(VAR_3,
                              VAR_8,
                              VAR_6.szPname,
                              VAR_5))
                {
                    FUNC_1(VAR_7);
                    VAR_9 = VAR_0;
                    break;
                }
            }
            else
            {
                FUNC_0("Failed to get device capabilities for mixer id %d!\n", VAR_8);
            }
            FUNC_1(VAR_7);
        }
    }

    return VAR_9;
}
