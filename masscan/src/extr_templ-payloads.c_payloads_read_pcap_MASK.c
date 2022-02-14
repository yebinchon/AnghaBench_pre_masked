
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RangeList {int count; int max; struct Range* list; int member_0; } ;
struct Range {int begin; int end; int member_0; } ;
struct PreprocessedInfo {int found; int transport_length; int transport_offset; int ip_protocol; int app_length; int app_offset; int port_dst; } ;
struct PcapFile {int dummy; } ;
struct PayloadsUDP {int dummy; } ;
typedef int buf ;





 int FUNC_0 (int,char*,char const*,...) ;
 int FUNC_1 (int ,char*,char const*) ;
 unsigned int FUNC_2 (struct PayloadsUDP*,unsigned char*,int ,struct RangeList*,int,int ) ;
 int FUNC_3 (struct PcapFile*) ;
 struct PcapFile* FUNC_4 (char const*) ;
 unsigned int FUNC_5 (struct PcapFile*,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned char*,unsigned int) ;
 unsigned int FUNC_6 (unsigned char*,unsigned int,int,struct PreprocessedInfo*) ;
 int VAR_0 ;

void
FUNC_7(const char *VAR_1,
                   struct PayloadsUDP *VAR_2,
                   struct PayloadsUDP *VAR_3)
{
    struct PcapFile *VAR_4;
    unsigned VAR_5 = 0;

    FUNC_0(2, "payloads:'%s': opening packet capture\n", VAR_1);


    VAR_4 = FUNC_4(VAR_1);
    if (VAR_4 == ((void*)0)) {
        FUNC_1(VAR_0, "payloads: can't read from file '%s'\n", VAR_1);
        return;
    }






    for (;;) {
        unsigned VAR_6;
        unsigned VAR_7;
        unsigned char VAR_8[65536];
        struct PreprocessedInfo VAR_9;
        struct RangeList VAR_10[1] = {{0}};
        struct Range VAR_11[1] = {{0}};




        {
            unsigned VAR_12;
            unsigned VAR_13;
            unsigned VAR_14;

            VAR_6 = FUNC_5(VAR_4,
                    &VAR_12, &VAR_13,
                    &VAR_14, &VAR_7,
                    VAR_8, (unsigned)sizeof(VAR_8));
        }
        if (!VAR_6)
            break;




        VAR_6 = FUNC_6(VAR_8, VAR_7, 1, &VAR_9);
        if (!VAR_6)
            continue;




        switch (VAR_9.found) {
        case 130:
        case 128:



                VAR_10->list = VAR_11;
                VAR_10->count = 1;
                VAR_10->max = 1;
                VAR_11->begin = VAR_9.port_dst;
                VAR_11->end = VAR_11->begin;





                VAR_5 += FUNC_2( VAR_2,
                                          VAR_8 + VAR_9.app_offset,
                                          VAR_9.app_length,
                                          VAR_10,
                                          0x10000,
                                          0);
            break;
        case 129:



                VAR_10->list = VAR_11;
                VAR_10->count = 1;
                VAR_10->max = 1;
                VAR_11->begin = VAR_9.ip_protocol;
                VAR_11->end = VAR_11->begin;





                VAR_5 += FUNC_2(VAR_3,
                                          VAR_8 + VAR_9.transport_offset,
                                          VAR_9.transport_length,
                                          VAR_10,
                                          0x10000,
                                          0);
            break;
        default:
            continue;
        }

    }

    FUNC_0(2, "payloads:'%s': imported %u unique payloads\n", VAR_1, VAR_5);
    FUNC_0(2, "payloads:'%s': closed packet capture\n", VAR_1);
    FUNC_3(VAR_4);
}
