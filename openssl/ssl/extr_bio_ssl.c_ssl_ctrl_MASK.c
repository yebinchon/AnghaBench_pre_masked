
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {long renegotiate_timeout; unsigned long last_time; long renegotiate_count; long num_renegotiates; TYPE_2__* ssl; int byte_count; } ;
struct TYPE_18__ {void* rbio; void* wbio; TYPE_1__* method; int handshake_func; } ;
struct TYPE_17__ {int ssl_accept; int ssl_connect; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ BIO_SSL ;
typedef void BIO ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 long FUNC_2 (void*,int,long,void*) ;
 TYPE_3__* FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 long FUNC_5 (void*) ;
 void* FUNC_6 (void*) ;
 long FUNC_7 (void*) ;
 int FUNC_8 (void*,void*) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*,int) ;
 int FUNC_11 (void*,void*) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (void*) ;
 int FUNC_14 (void*,int) ;
 int FUNC_15 (void*) ;




 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*) ;
 TYPE_2__* FUNC_18 (TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*) ;
 int FUNC_20 (TYPE_2__*,int) ;
 void* FUNC_21 (TYPE_2__*) ;
 long FUNC_22 (TYPE_2__*) ;
 int FUNC_23 (TYPE_2__*) ;
 int FUNC_24 (TYPE_2__*,void*,void*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (void*) ;
 int FUNC_28 (void*) ;
 scalar_t__ FUNC_29 (int *) ;

__attribute__((used)) static long FUNC_30(BIO *VAR_5, int VAR_6, long VAR_7, void *VAR_8)
{
    SSL **VAR_9, *VAR_10;
    BIO_SSL *VAR_11, *VAR_12;
    BIO *VAR_13, *VAR_14;
    long VAR_15 = 1;
    BIO *VAR_16;

    VAR_11 = FUNC_3(VAR_5);
    VAR_16 = FUNC_6(VAR_5);
    VAR_10 = VAR_11->ssl;
    if ((VAR_10 == ((void*)0)) && (VAR_6 != 135))
        return 0;
    switch (VAR_6) {
    case 143:
        FUNC_26(VAR_10);

        if (VAR_10->handshake_func == VAR_10->method->ssl_connect)
            FUNC_25(VAR_10);
        else if (VAR_10->handshake_func == VAR_10->method->ssl_accept)
            FUNC_23(VAR_10);

        if (!FUNC_16(VAR_10)) {
            VAR_15 = 0;
            break;
        }

        if (VAR_16 != ((void*)0))
            VAR_15 = FUNC_2(VAR_16, VAR_6, VAR_7, VAR_8);
        else if (VAR_10->rbio != ((void*)0))
            VAR_15 = FUNC_2(VAR_10->rbio, VAR_6, VAR_7, VAR_8);
        else
            VAR_15 = 1;
        break;
    case 147:
        VAR_15 = 0;
        break;
    case 132:
        if (VAR_7)
            FUNC_25(VAR_10);
        else
            FUNC_23(VAR_10);
        break;
    case 133:
        VAR_15 = VAR_11->renegotiate_timeout;
        if (VAR_7 < 60)
            VAR_7 = 5;
        VAR_11->renegotiate_timeout = (unsigned long)VAR_7;
        VAR_11->last_time = (unsigned long)FUNC_29(((void*)0));
        break;
    case 134:
        VAR_15 = VAR_11->renegotiate_count;
        if ((long)VAR_7 >= 512)
            VAR_11->renegotiate_count = (unsigned long)VAR_7;
        break;
    case 136:
        VAR_15 = VAR_11->num_renegotiates;
        break;
    case 135:
        if (VAR_10 != ((void*)0)) {
            FUNC_27(VAR_5);
            if (!FUNC_28(VAR_5))
                return 0;
        }
        FUNC_14(VAR_5, VAR_7);
        VAR_10 = (SSL *)VAR_8;
        VAR_11->ssl = VAR_10;
        VAR_14 = FUNC_21(VAR_10);
        if (VAR_14 != ((void*)0)) {
            if (VAR_16 != ((void*)0))
                FUNC_8(VAR_14, VAR_16);
            FUNC_11(VAR_5, VAR_14);
            FUNC_15(VAR_14);
        }
        FUNC_10(VAR_5, 1);
        break;
    case 137:
        if (VAR_8 != ((void*)0)) {
            VAR_9 = (SSL **)VAR_8;
            *VAR_9 = VAR_10;
        } else
            VAR_15 = 0;
        break;
    case 148:
        VAR_15 = FUNC_5(VAR_5);
        break;
    case 141:
        FUNC_14(VAR_5, (int)VAR_7);
        break;
    case 140:
        VAR_15 = FUNC_2(VAR_10->wbio, VAR_6, VAR_7, VAR_8);
        break;
    case 146:
        VAR_15 = FUNC_22(VAR_10);
        if (VAR_15 == 0)
            VAR_15 = FUNC_7(VAR_10->rbio);
        break;
    case 149:
        FUNC_0(VAR_5);
        VAR_15 = FUNC_2(VAR_10->wbio, VAR_6, VAR_7, VAR_8);
        FUNC_1(VAR_5);
        break;
    case 144:
        if ((VAR_16 != ((void*)0)) && (VAR_16 != VAR_10->rbio)) {




            FUNC_15(VAR_16);
            FUNC_24(VAR_10, VAR_16, VAR_16);
        }
        break;
    case 145:

        if (VAR_5 == VAR_8) {

            FUNC_24(VAR_10, ((void*)0), ((void*)0));
        }
        break;
    case 139:
        FUNC_0(VAR_5);

        FUNC_12(VAR_5, 0);
        VAR_15 = (int)FUNC_17(VAR_10);

        switch (FUNC_20(VAR_10, (int)VAR_15)) {
        case 130:
            FUNC_9(VAR_5, VAR_1 | VAR_2);
            break;
        case 129:
            FUNC_9(VAR_5, VAR_3 | VAR_2);
            break;
        case 131:
            FUNC_9(VAR_5, VAR_0 | VAR_2);
            FUNC_12(VAR_5, FUNC_4(VAR_16));
            break;
        case 128:
            FUNC_13(VAR_5);
            FUNC_12(VAR_5, VAR_4);
            break;
        default:
            break;
        }
        break;
    case 150:
        VAR_13 = (BIO *)VAR_8;
        VAR_12 = FUNC_3(VAR_13);
        FUNC_19(VAR_12->ssl);
        VAR_12->ssl = FUNC_18(VAR_10);
        VAR_12->num_renegotiates = VAR_11->num_renegotiates;
        VAR_12->renegotiate_count = VAR_11->renegotiate_count;
        VAR_12->byte_count = VAR_11->byte_count;
        VAR_12->renegotiate_timeout = VAR_11->renegotiate_timeout;
        VAR_12->last_time = VAR_11->last_time;
        VAR_15 = (VAR_12->ssl != ((void*)0));
        break;
    case 138:
        VAR_15 = FUNC_2(VAR_10->rbio, VAR_6, VAR_7, VAR_8);
        break;
    case 142:
        VAR_15 = 0;
        break;
    default:
        VAR_15 = FUNC_2(VAR_10->rbio, VAR_6, VAR_7, VAR_8);
        break;
    }
    return VAR_15;
}
