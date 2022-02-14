
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_31__ {int state; } ;
struct TYPE_30__ {int flags; int number; int data_length; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_11 (TYPE_2__*,TYPE_1__*,int const*) ;
 int FUNC_12 (TYPE_2__*,TYPE_1__*,int const*) ;

int
FUNC_13(Jbig2Ctx *VAR_4, Jbig2Segment *VAR_5, const uint8_t *VAR_6)
{
    FUNC_2(VAR_4, VAR_2, VAR_5->number,
                "segment %d, flags=%x, type=%d, data_length=%d", VAR_5->number, VAR_5->flags, VAR_5->flags & 63, VAR_5->data_length);
    switch (VAR_5->flags & 63) {
    case 0:
        return FUNC_10(VAR_4, VAR_5, VAR_6);
    case 4:
    case 6:
    case 7:
        return FUNC_12(VAR_4, VAR_5, VAR_6);
    case 16:
        return FUNC_8(VAR_4, VAR_5, VAR_6);
    case 20:
    case 22:
    case 23:
        return FUNC_3(VAR_4, VAR_5, VAR_6);
    case 36:
        return FUNC_2(VAR_4, VAR_1, VAR_5->number, "unhandled segment type 'intermediate generic region' (NYI)");
    case 38:
    case 39:
        return FUNC_4(VAR_4, VAR_5, VAR_6);
    case 40:
    case 42:
    case 43:
        return FUNC_9(VAR_4, VAR_5, VAR_6);
    case 48:
        return FUNC_5(VAR_4, VAR_5, VAR_6);
    case 49:
        return FUNC_0(VAR_4, VAR_5, VAR_6);
    case 50:
        return FUNC_1(VAR_4, VAR_5, VAR_6);
    case 51:
        VAR_4->state = VAR_0;
        FUNC_2(VAR_4, VAR_2, VAR_5->number, "end of file");
        break;
    case 52:
        return FUNC_7(VAR_4, VAR_5, VAR_6);
    case 53:
        return FUNC_11(VAR_4, VAR_5, VAR_6);
    case 54:
        return FUNC_2(VAR_4, VAR_3, VAR_5->number, "unhandled segment type 'color palette' (NYI)");
    case 62:
        return FUNC_6(VAR_4, VAR_5, VAR_6);
    default:
        FUNC_2(VAR_4, VAR_3, VAR_5->number, "unknown segment type %d", VAR_5->flags & 63);
    }
    return 0;
}
