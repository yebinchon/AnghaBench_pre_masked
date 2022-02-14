
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct SNMP {scalar_t__ version; scalar_t__ community_length; unsigned char const* community; int pdu_tag; void* error_index; void* error_status; void* request_id; } ;
struct BannerOutput {int dummy; } ;


 void* FUNC_0 (unsigned char const*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_1 (unsigned char const*,scalar_t__,scalar_t__*) ;
 int FUNC_2 (unsigned char const*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct SNMP**,int ,int) ;
 int FUNC_4 (unsigned char const*,size_t,scalar_t__,unsigned char const*,size_t,struct BannerOutput*) ;

__attribute__((used)) static void
FUNC_5(const unsigned char *VAR_0, uint64_t VAR_1,
    struct BannerOutput *VAR_2,
    unsigned *VAR_3)
{
    uint64_t VAR_4=0;
    uint64_t VAR_5;
    struct SNMP VAR_6[1];

    FUNC_3(&VAR_6, 0, sizeof(*VAR_6));


    if (FUNC_2(VAR_0, VAR_1, &VAR_4) != 0x30)
        return;


    VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
    if (VAR_1 > VAR_5 + VAR_4)
        VAR_1 = VAR_5 + VAR_4;


    VAR_6->version = FUNC_0(VAR_0, VAR_1, &VAR_4);
    if (VAR_6->version != 0)
        return;


    if (FUNC_2(VAR_0, VAR_1, &VAR_4) != 0x04)
        return;
    VAR_6->community_length = FUNC_1(VAR_0, VAR_1, &VAR_4);
    VAR_6->community = VAR_0+VAR_4;
    VAR_4 += VAR_6->community_length;


    VAR_6->pdu_tag = FUNC_2(VAR_0, VAR_1, &VAR_4);
    if (VAR_6->pdu_tag < 0xA0 || 0xA5 < VAR_6->pdu_tag)
        return;
    VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
    if (VAR_1 > VAR_5 + VAR_4)
        VAR_1 = VAR_5 + VAR_4;


    VAR_6->request_id = FUNC_0(VAR_0, VAR_1, &VAR_4);
    *VAR_3 = (unsigned)VAR_6->request_id;
    VAR_6->error_status = FUNC_0(VAR_0, VAR_1, &VAR_4);
    VAR_6->error_index = FUNC_0(VAR_0, VAR_1, &VAR_4);


    if (FUNC_2(VAR_0, VAR_1, &VAR_4) != 0x30)
        return;
    VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
    if (VAR_1 > VAR_5 + VAR_4)
        VAR_1 = VAR_5 + VAR_4;



    while (VAR_4 < VAR_1) {
        uint64_t VAR_7;
        uint64_t VAR_8;
        if (VAR_0[VAR_4++] != 0x30) {
            break;
        }
        VAR_7 = FUNC_1(VAR_0, VAR_1, &VAR_4);
        if (VAR_7 == 0xFFFFffff)
            break;
        VAR_8 = VAR_4 + VAR_7;
        if (VAR_8 > VAR_1) {
            return;
        }


        if (FUNC_2(VAR_0,VAR_1,&VAR_4) != 6)
            return;
        else {
            uint64_t VAR_9 = FUNC_1(VAR_0, VAR_1, &VAR_4);
            const unsigned char *VAR_10 = VAR_0+VAR_4;
            uint64_t VAR_11;
            uint64_t VAR_12;
            const unsigned char *VAR_13;

            VAR_4 += VAR_9;
            if (VAR_4 > VAR_1)
                return;

            VAR_11 = FUNC_2(VAR_0,VAR_1,&VAR_4);
            VAR_12 = FUNC_1(VAR_0, VAR_1, &VAR_4);
            VAR_13 = VAR_0+VAR_4;

            VAR_4 += VAR_12;
            if (VAR_4 > VAR_1)
                return;

            if (VAR_11 == 5)
                continue;

            FUNC_4(VAR_10, (size_t)VAR_9, VAR_11, VAR_13, (size_t)VAR_12, VAR_2);
        }
    }
}
