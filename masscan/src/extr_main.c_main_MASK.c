
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_11__ {scalar_t__ index; } ;
struct TYPE_9__ {int directory; } ;
struct TYPE_10__ {int is_show_open; int is_status_updates; TYPE_3__ rotate; } ;
struct TYPE_8__ {int oproto; int udp; } ;
struct TYPE_7__ {int one; int of; } ;
struct Masscan {int blackrock_rounds; int wait; double max_rate; int nic_count; int min_packet_size; int is_capture_cert; int is_readscan; int op; TYPE_6__* nic; TYPE_5__ resume; int ports; int targets; int exclude_port; int exclude_ip; scalar_t__ is_scripting; TYPE_4__ output; TYPE_2__ payloads; TYPE_1__ shard; int seed; } ;
typedef int WSADATA ;
struct TYPE_12__ {int ifname; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (char*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 () ;
 int VAR_0 ;
 int FUNC_11 () ;
 int FUNC_12 (struct Masscan*) ;
 int FUNC_13 (struct Masscan*) ;
 int FUNC_14 (struct Masscan*) ;
 int FUNC_15 () ;
 int FUNC_16 (struct Masscan*,int,char**) ;
 scalar_t__ FUNC_17 (char*,int,char**) ;
 int FUNC_18 (struct Masscan*) ;
 int FUNC_19 (struct Masscan*,char*) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (struct Masscan*,int ,int) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 () ;
 int FUNC_28 () ;
 scalar_t__ FUNC_29 () ;
 int FUNC_30 (char*) ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 (char*,unsigned int) ;
 int FUNC_34 () ;
 int FUNC_35 () ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *,int *) ;
 int FUNC_38 () ;
 int FUNC_39 () ;
 int FUNC_40 () ;
 int FUNC_41 () ;
 int FUNC_42 (int ) ;
 int FUNC_43 (struct Masscan*,unsigned int,unsigned int,char**) ;
 int FUNC_44 () ;
 int FUNC_45 () ;
 int FUNC_46 (struct Masscan*) ;
 int FUNC_47 () ;
 int FUNC_48 () ;
 int FUNC_49 () ;
 int FUNC_50 () ;
 int FUNC_51 () ;
 int FUNC_52 () ;
 int VAR_1 ;
 scalar_t__ FUNC_53 (char*,char*) ;
 int FUNC_54 (int ,int,char*) ;
 int FUNC_55 () ;
 int FUNC_56 (int ) ;
 int VAR_2 ;
 int FUNC_57 () ;
 int FUNC_58 () ;

int FUNC_59(int VAR_3, char *VAR_4[])
{
    struct Masscan VAR_5[1];
    unsigned VAR_6;

    VAR_2 = FUNC_31();




    VAR_0 = FUNC_56(0);


    {
        int VAR_7 = 1;
        for (VAR_6=1; VAR_6<(unsigned)VAR_3; VAR_6++) {
            if (FUNC_53(VAR_4[VAR_6], "--nobacktrace") == 0)
                VAR_7 = 0;
        }
        if (VAR_7)
            FUNC_30(VAR_4[0]);
    }




    FUNC_22(VAR_5, 0, sizeof(*VAR_5));
    VAR_5->blackrock_rounds = 4;
    VAR_5->output.is_show_open = 1;
    VAR_5->output.is_status_updates = 1;
    VAR_5->seed = FUNC_10();
    VAR_5->wait = 10;
    VAR_5->max_rate = 100.0;
    VAR_5->nic_count = 1;
    VAR_5->shard.one = 1;
    VAR_5->shard.of = 1;
    VAR_5->min_packet_size = 60;
    VAR_5->payloads.udp = FUNC_27();
    VAR_5->payloads.oproto = FUNC_26();
    FUNC_54( VAR_5->output.rotate.directory,
                sizeof(VAR_5->output.rotate.directory),
                ".");
    VAR_5->is_capture_cert = 1;




    if (FUNC_17("--readscan", VAR_3, VAR_4)) {
        VAR_5->is_readscan = 1;
    }
    if (!VAR_5->is_readscan) {
        if (FUNC_2("/etc/masscan/masscan.conf", 0) == 0) {
            FUNC_19(VAR_5, "/etc/masscan/masscan.conf");
        }
    }






    FUNC_16(VAR_5, VAR_3, VAR_4);




    FUNC_18(VAR_5);





    if (VAR_5->is_scripting)
        FUNC_46(VAR_5);



    if (FUNC_29() != 0)
        FUNC_0(2, "libpcap: failed to load\n");
    FUNC_39();


    FUNC_51();
    FUNC_57();







    {
        uint64_t VAR_8 = FUNC_36(&VAR_5->targets) * FUNC_36(&VAR_5->ports);
        uint64_t VAR_9;
        FUNC_37(&VAR_5->targets, &VAR_5->exclude_ip);
        FUNC_37(&VAR_5->ports, &VAR_5->exclude_port);


        VAR_9 = FUNC_36(&VAR_5->targets) * FUNC_36(&VAR_5->ports);

        if (VAR_8 != 0 && VAR_9 == 0) {
            FUNC_0(0, "FAIL: no ranges left to scan\n");
            FUNC_0(0, "   ...all ranges overlapped something in an excludefile range\n");
            FUNC_8(1);
        }

        if (VAR_9 != VAR_8 && VAR_5->resume.index) {
            FUNC_0(0, "FAIL: Attempted to add additional 'exclude' ranges after scan start.\n");
            FUNC_0(0, "   ...This messes things up the scan randomization, so you have to restart scan\n");
            FUNC_8(1);
        }
    }







    switch (VAR_5->op) {
    case 134:

        FUNC_20();
        break;

    case 129:



        return FUNC_14(VAR_5);

    case 133:

        FUNC_12(VAR_5);
        return 0;

    case 132:

        FUNC_40();
        break;

    case 135:
        for (VAR_6=0; VAR_6<VAR_5->nic_count; VAR_6++)
            FUNC_42(VAR_5->nic[VAR_6].ifname);
        return 0;

    case 131:
        FUNC_13(VAR_5);
        return 0;

    case 130:
        {
            unsigned VAR_10;
            unsigned VAR_11;


            for (VAR_10=1; VAR_10<(unsigned)VAR_3; VAR_10++) {
                if (FUNC_21(VAR_4[VAR_10], "--readscan", 10) == 0) {
                    VAR_10++;
                    break;
                }
            }


            for (VAR_11=VAR_10+1; VAR_11<(unsigned)VAR_3 && VAR_4[VAR_11][0] != '-'; VAR_11++)
                ;





            FUNC_43(VAR_5, VAR_10, VAR_11, VAR_4);

        }
        break;

    case 136:
        FUNC_33("=== benchmarking (%u-bits) ===\n\n", (unsigned)sizeof(void*)*8);
        FUNC_6(VAR_5->blackrock_rounds);
        FUNC_5(VAR_5->blackrock_rounds);
        FUNC_49();
        FUNC_8(1);
        break;

    case 128:



        {
            int VAR_12 = 0;
            VAR_12 += FUNC_34();
            VAR_12 += FUNC_50();
            VAR_12 += FUNC_47();
            VAR_12 += FUNC_4();
            VAR_12 += FUNC_3();
            VAR_12 += FUNC_25();
            VAR_12 += FUNC_48();
            VAR_12 += FUNC_24();
            VAR_12 += FUNC_52();
            VAR_12 += FUNC_28();
            VAR_12 += FUNC_7();
            VAR_12 += FUNC_41();
            VAR_12 += FUNC_11();
            VAR_12 += FUNC_55();
            VAR_12 += FUNC_38();
            VAR_12 += FUNC_35();
            VAR_12 += FUNC_32();
            VAR_12 += FUNC_45();
            VAR_12 += FUNC_15();
            VAR_12 += FUNC_58();
            VAR_12 += FUNC_23();
            VAR_12 += FUNC_44();


            if (VAR_12 != 0) {

                FUNC_9(VAR_1, "regression test: failed :( \n");
                return 1;
            } else {
                FUNC_9(VAR_1, "regression test: success!\n");
                return 0;
            }
        }
        break;
    }


    return 0;
}
