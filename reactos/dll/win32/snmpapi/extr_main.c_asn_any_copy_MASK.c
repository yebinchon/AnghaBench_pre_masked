
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_9__ {int idLength; size_t* ids; } ;
struct TYPE_8__ {size_t length; int dynamic; int * stream; } ;
struct TYPE_10__ {TYPE_2__ object; TYPE_1__ string; int ticks; int gauge; int counter; int counter64; int unsigned32; int number; } ;
struct TYPE_11__ {int asnType; TYPE_3__ asnValue; } ;
typedef int INT ;
typedef int BYTE ;
typedef TYPE_4__ AsnAny ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;

__attribute__((used)) static INT FUNC_5(AsnAny *VAR_3, const AsnAny *VAR_4)
{
    FUNC_4(VAR_3, 0, sizeof(AsnAny));
    switch (VAR_4->asnType)
    {
    case 135: VAR_3->asnValue.number = VAR_4->asnValue.number; break;
    case 128: VAR_3->asnValue.unsigned32 = VAR_4->asnValue.unsigned32; break;
    case 137: VAR_3->asnValue.counter64 = VAR_4->asnValue.counter64; break;
    case 138: VAR_3->asnValue.counter = VAR_4->asnValue.counter; break;
    case 136: VAR_3->asnValue.gauge = VAR_4->asnValue.gauge; break;
    case 129: VAR_3->asnValue.ticks = VAR_4->asnValue.ticks; break;

    case 132:
    case 139:
    case 130:
    case 134:
    case 131:
    {
        BYTE *VAR_5;
        UINT VAR_6 = VAR_4->asnValue.string.length;

        if (!(VAR_5 = FUNC_1(FUNC_0(), 0, VAR_6))) return VAR_0;
        FUNC_3(VAR_5, VAR_4->asnValue.string.stream, VAR_6);

        VAR_3->asnValue.string.stream = VAR_5;
        VAR_3->asnValue.string.length = VAR_6;
        VAR_3->asnValue.string.dynamic = VAR_2;
        break;
    }
    case 133:
    {
        UINT *VAR_7, VAR_8, VAR_9 = VAR_4->asnValue.object.idLength * sizeof(UINT);

        if (!(VAR_7 = FUNC_1(FUNC_0(), 0, VAR_9))) return VAR_0;

        VAR_3->asnValue.object.ids = VAR_7;
        VAR_3->asnValue.object.idLength = VAR_4->asnValue.object.idLength;

        for (VAR_8 = 0; VAR_8 < VAR_3->asnValue.object.idLength; VAR_8++)
            VAR_3->asnValue.object.ids[VAR_8] = VAR_4->asnValue.object.ids[VAR_8];
        break;
    }
    default:
    {
        FUNC_2("unknown ASN type: %d\n", VAR_4->asnType);
        return VAR_0;
    }
    }
    VAR_3->asnType = VAR_4->asnType;
    return VAR_1;
}
