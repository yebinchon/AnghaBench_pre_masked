
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Buffer; } ;
typedef TYPE_1__ UNICODE_STRING ;
struct TYPE_7__ {scalar_t__ flags; int type; int qwattr; int lpattr; int dwattr; } ;
typedef int TAG ;
typedef TYPE_2__* PATTRINFO ;
typedef int LPCWSTR ;
typedef size_t DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;

 int VAR_1 ;


 scalar_t__ FUNC_3 (int ,TYPE_2__**,size_t*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (char*,...) ;

int FUNC_7(int VAR_2, char* VAR_3[], int* VAR_4, const char* VAR_5)
{
    UNICODE_STRING VAR_6;
    PATTRINFO VAR_7;
    DWORD VAR_8, VAR_9;
    int VAR_10 = *VAR_4;
    const char* VAR_11;

    if (!FUNC_0())
        return 1;

    if (FUNC_5(VAR_3[VAR_10]) > (FUNC_5(VAR_5)+1))
    {
        VAR_11 = VAR_3[VAR_10] + FUNC_5(VAR_5);
    }
    else if (VAR_10+1 >= VAR_2)
    {
        FUNC_6("Error: no image name specified\n");
        return 1;
    }
    else
    {
        VAR_11 = VAR_3[VAR_10+1];
        (*VAR_4) += 1;
    }

    FUNC_1(&VAR_6, VAR_11);

    if (FUNC_3(VAR_6.Buffer, &VAR_7, &VAR_8))
    {
        FUNC_6("Dumping attributes for %s\n", VAR_11);
        for (VAR_9 = 0; VAR_9 < VAR_8; ++VAR_9)
        {
            TAG VAR_12;
            LPCWSTR VAR_13;
            if (VAR_7[VAR_9].flags != VAR_0)
                continue;

            VAR_13 = FUNC_4(VAR_7[VAR_9].type);

            VAR_12 = VAR_7[VAR_9].type & VAR_1;
            switch (VAR_12)
            {
            case 130:
                FUNC_6("<%ls>0x%lx</%ls>\n", VAR_13, VAR_7[VAR_9].dwattr, VAR_13);
                break;
            case 128:
                FUNC_6("<%ls>%ls</%ls>\n", VAR_13, VAR_7[VAR_9].lpattr, VAR_13);
                break;
            case 129:
                FUNC_6("<%ls>0x%I64x</%ls>\n", VAR_13, VAR_7[VAR_9].qwattr, VAR_13);
                break;
            default:
                FUNC_6("<!-- Unknown tag type: 0x%x (from 0x%x)\n", VAR_12, VAR_7[VAR_9].type);
                break;
            }
        }
        FUNC_6("Done\n");
    }
    else
    {
        FUNC_6("Unable to get attributes from %s\n", VAR_11);
    }


    FUNC_2(&VAR_6);
    return 0;
}
