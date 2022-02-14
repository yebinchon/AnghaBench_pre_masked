
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_17__ ;
typedef struct TYPE_24__ TYPE_16__ ;
typedef struct TYPE_23__ TYPE_15__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_26__ {unsigned char version; } ;
struct TYPE_27__ {TYPE_1__ vnc; } ;
struct ProtocolState {int app_proto; int port; int state; TYPE_2__ sub; int is_sent_sslhello; } ;
struct InteractiveData {int dummy; } ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int http_fields; int smack; } ;
struct TYPE_34__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_33__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_32__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_31__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_30__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_29__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_28__ {unsigned int id; int extra; } ;
struct TYPE_25__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_24__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_23__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_22__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_21__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_20__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_19__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
struct TYPE_18__ {int (* parse ) (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;} ;
 size_t VAR_0 ;
 TYPE_17__ VAR_1 ;
 TYPE_16__ VAR_2 ;
 TYPE_15__ VAR_3 ;
 TYPE_14__ VAR_4 ;
 TYPE_13__ VAR_5 ;
 TYPE_12__ VAR_6 ;
 TYPE_11__ VAR_7 ;
 TYPE_10__ VAR_8 ;
 TYPE_9__ VAR_9 ;
 TYPE_8__ VAR_10 ;
 TYPE_7__ VAR_11 ;
 TYPE_6__ VAR_12 ;
 TYPE_5__ VAR_13 ;
 TYPE_4__ VAR_14 ;
 int FUNC_0 (struct BannerOutput*,int const,unsigned char const*,size_t) ;
 unsigned char* FUNC_1 (struct BannerOutput*,int const) ;
 unsigned int FUNC_2 (struct BannerOutput*,int const) ;
 int FUNC_3 (int ,char*) ;
 TYPE_3__* VAR_15 ;
 size_t FUNC_4 (int ,int *,unsigned char const*,unsigned int*,unsigned int) ;
 int VAR_16 ;
 int FUNC_5 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_6 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_7 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_8 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_9 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_10 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_11 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_12 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_13 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_14 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_15 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_16 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_17 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;
 int FUNC_18 (struct Banner1 const*,int ,struct ProtocolState*,unsigned char const*,size_t,struct BannerOutput*,struct InteractiveData*) ;

unsigned
FUNC_19(
        const struct Banner1 *VAR_17,
        struct ProtocolState *VAR_18,
        const unsigned char *VAR_19, size_t VAR_20,
        struct BannerOutput *VAR_21,
        struct InteractiveData *VAR_22)
{
    size_t VAR_23;
    unsigned VAR_24 = 0;
    unsigned VAR_25;


    switch (VAR_18->app_proto) {
    case 139:
    case 143:
        VAR_23 = FUNC_4(
                        VAR_17->smack,
                        &VAR_18->state,
                        VAR_19, &VAR_24, (unsigned)VAR_20);
        if (VAR_23 != VAR_0)
            VAR_25 = VAR_15[VAR_23].id;
        else
            VAR_25 = 0xFFFFFFFF;
        if (VAR_25 != 0xFFFFFFFF
            && !(VAR_25 == 131 && !VAR_18->is_sent_sslhello)) {
            unsigned VAR_26;


            for (VAR_26=0; VAR_15[VAR_26].id && VAR_15[VAR_26].id != VAR_18->app_proto; VAR_26++)
                ;



            switch (VAR_25) {
            case 144:
                if (VAR_15[VAR_23].extra == 1) {
                    if (VAR_18->port == 25 || VAR_18->port == 587)
                        VAR_25 = 134;
                }
                break;
            case 128:
                VAR_18->sub.vnc.version = (unsigned char)VAR_15[VAR_23].extra;
                break;
            }

            VAR_18->app_proto = (unsigned short)VAR_25;


            VAR_18->state = 0;


            {
                const unsigned char *VAR_27 = FUNC_1(VAR_21, 143);
                unsigned VAR_28 = FUNC_2(VAR_21, 143);

                if (VAR_27 && VAR_28)
                FUNC_19(
                                VAR_17,
                                VAR_18,
                                VAR_27, VAR_28,
                                VAR_21,
                                VAR_22);
            }
            FUNC_19(
                            VAR_17,
                            VAR_18,
                            VAR_19, VAR_20,
                            VAR_21,
                            VAR_22);
        } else {
            FUNC_0(VAR_21, 143, VAR_19, VAR_20);
        }
        break;
    case 144:
            VAR_1.parse( VAR_17,
                             VAR_17->http_fields,
                             VAR_18,
                             VAR_19, VAR_20,
                             VAR_21,
                             VAR_22);
            break;
        case 134:
            VAR_9.parse( VAR_17,
                              VAR_17->http_fields,
                              VAR_18,
                              VAR_19, VAR_20,
                              VAR_21,
                              VAR_22);
            break;

        case 130:
            VAR_12.parse( VAR_17,
                              VAR_17->http_fields,
                              VAR_18,
                              VAR_19, VAR_20,
                              VAR_21,
                              VAR_22);
            break;
        case 137:
            VAR_6.parse( VAR_17,
                                VAR_17->http_fields,
                                VAR_18,
                                VAR_19, VAR_20,
                                VAR_21,
                                VAR_22);
            break;
        case 138:
            VAR_5( VAR_17,
                              VAR_17->http_fields,
                              VAR_18,
                              VAR_19, VAR_20,
                              VAR_21,
                              VAR_22);
            break;
    case 141:
            VAR_3(VAR_17,
                              VAR_17->http_fields,
                              VAR_18,
                              VAR_19, VAR_20,
                              VAR_21,
                              VAR_22);
            break;

    case 133:
    case 132:



        VAR_10.parse( VAR_17,
                            VAR_17->http_fields,
                            VAR_18,
                            VAR_19, VAR_20,
                            VAR_21,
                            VAR_22);
        break;
    case 142:
        VAR_2.parse(
                        VAR_17,
                        VAR_17->http_fields,
                        VAR_18,
                        VAR_19, VAR_20,
                        VAR_21,
                        VAR_22);
        break;
    case 131:
        VAR_11.parse(
                        VAR_17,
                        VAR_17->http_fields,
                        VAR_18,
                        VAR_19, VAR_20,
                        VAR_21,
                        VAR_22);
        break;
    case 135:
        VAR_8(
                        VAR_17,
                        VAR_17->http_fields,
                        VAR_18,
                        VAR_19, VAR_20,
                        VAR_21,
                        VAR_22);
        break;
    case 128:
        VAR_14.parse( VAR_17,
                             VAR_17->http_fields,
                             VAR_18,
                             VAR_19, VAR_20,
                             VAR_21,
                             VAR_22);
        break;
    case 140:
        VAR_4.parse( VAR_17,
                             VAR_17->http_fields,
                             VAR_18,
                             VAR_19, VAR_20,
                             VAR_21,
                             VAR_22);
        break;
    case 136:
        VAR_7.parse( VAR_17,
                                   VAR_17->http_fields,
                                   VAR_18,
                                   VAR_19, VAR_20,
                                   VAR_21,
                                   VAR_22);
        break;
    case 129:
        VAR_13.parse( VAR_17,
                                   VAR_17->http_fields,
                                   VAR_18,
                                   VAR_19, VAR_20,
                                   VAR_21,
                                   VAR_22);
        break;

    default:
        FUNC_3(VAR_16, "banner1: internal error\n");
        break;

    }

    return VAR_18->app_proto;
}
