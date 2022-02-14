
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int data_length; int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,char*,...) ;
 int FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(Jbig2Ctx *VAR_3, Jbig2Segment *VAR_4, const uint8_t *VAR_5)
{
    uint32_t VAR_6;
    bool VAR_7;
    bool VAR_8;

    if (VAR_4->data_length < 4)
        return FUNC_0(VAR_3, VAR_0, VAR_4->number, "segment too short");

    VAR_6 = FUNC_1(VAR_5);
    VAR_7 = VAR_6 & 0x20000000;




    VAR_8 = VAR_6 & 0x80000000;

    if (VAR_8 && !VAR_7) {
        FUNC_0(VAR_3, VAR_2, VAR_4->number, "extension segment is marked 'necessary' but not 'reserved' contrary to spec");
    }

    switch (VAR_6) {
    case 0x20000000:
        FUNC_0(VAR_3, VAR_1, VAR_4->number, "ignoring ASCII comment");
        break;
    case 0x20000002:
        FUNC_0(VAR_3, VAR_1, VAR_4->number, "ignoring UCS-2 comment");
        break;
    default:
        if (VAR_8) {
            return FUNC_0(VAR_3, VAR_0, VAR_4->number, "unhandled necessary extension segment type 0x%08x", VAR_6);
        } else {
            FUNC_0(VAR_3, VAR_2, VAR_4->number, "unhandled non-necessary extension segment, skipping");
        }
    }

    return 0;
}
