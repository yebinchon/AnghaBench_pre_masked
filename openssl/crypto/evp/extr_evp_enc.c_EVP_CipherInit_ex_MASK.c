
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ nid; int (* einit ) (int *,unsigned char const*,int ,unsigned char const*,int) ;int (* dinit ) (int *,unsigned char const*,int ,unsigned char const*,int) ;int flags; int block_size; int (* init ) (TYPE_1__*,unsigned char const*,unsigned char const*,int) ;int key_len; scalar_t__ ctx_size; int * prov; int * (* newctx ) (int ) ;} ;
struct TYPE_16__ {int encrypt; unsigned long flags; unsigned char const* oiv; unsigned char const* iv; int block_mask; TYPE_2__ const* cipher; scalar_t__ final_used; scalar_t__ buf_len; int num; int key_len; int * cipher_data; int * engine; int * provctx; TYPE_2__ const* fetched_cipher; } ;
typedef TYPE_1__ EVP_CIPHER_CTX ;
typedef TYPE_2__ const EVP_CIPHER ;
typedef int ENGINE ;


 TYPE_2__ const* FUNC_0 (int *,int) ;
 int * FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 TYPE_2__ const* FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__ const*) ;
 int VAR_2 ;


 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;


 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int *,scalar_t__) ;
 int * FUNC_17 (scalar_t__) ;
 int FUNC_18 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_19 (int *) ;
 int * FUNC_20 (int ) ;
 int FUNC_21 (int *,unsigned char const*,int ,unsigned char const*,int) ;
 int FUNC_22 (int *,unsigned char const*,int ,unsigned char const*,int) ;
 int FUNC_23 (TYPE_1__*,unsigned char const*,unsigned char const*,int) ;

int FUNC_24(EVP_CIPHER_CTX *VAR_12, const EVP_CIPHER *VAR_13,
                      ENGINE *VAR_14, const unsigned char *VAR_15,
                      const unsigned char *VAR_16, int VAR_17)
{

    ENGINE *VAR_18 = ((void*)0);

    const EVP_CIPHER *VAR_19;






    if (VAR_17 == -1) {
        VAR_17 = VAR_12->encrypt;
    } else {
        if (VAR_17)
            VAR_17 = 1;
        VAR_12->encrypt = VAR_17;
    }

    if (VAR_13 == ((void*)0) && VAR_12->cipher == ((void*)0)) {
        FUNC_13(VAR_8, VAR_10);
        return 0;
    }
    if (VAR_12->engine && VAR_12->cipher
        && (VAR_13 == ((void*)0) || VAR_13->nid == VAR_12->cipher->nid))
        goto skip_to_init;

    if (VAR_13 != ((void*)0) && VAR_14 == ((void*)0)) {

        VAR_18 = FUNC_1(VAR_13->nid);
    }





    if (VAR_12->engine != ((void*)0)

            || VAR_18 != ((void*)0)

            || VAR_14 != ((void*)0)) {
        if (VAR_12->cipher == VAR_12->fetched_cipher)
            VAR_12->cipher = ((void*)0);
        FUNC_12(VAR_12->fetched_cipher);
        VAR_12->fetched_cipher = ((void*)0);
        goto legacy;
    }

    VAR_19 = (VAR_13 == ((void*)0)) ? VAR_12->cipher : VAR_13;

    if (VAR_19->prov == ((void*)0)) {
        switch(VAR_19->nid) {
        case 240:
        case 251:
        case 263:
        case 246:
        case 257:
        case 269:
        case 237:
        case 248:
        case 260:
        case 243:
        case 254:
        case 266:
        case 244:
        case 255:
        case 267:
        case 242:
        case 253:
        case 265:
        case 241:
        case 252:
        case 264:
        case 258:
        case 235:
        case 238:
        case 249:
        case 261:
        case 239:
        case 250:
        case 262:
        case 236:
        case 247:
        case 259:
        case 155:
        case 154:
        case 157:
        case 156:
        case 159:
        case 158:
        case 209:
        case 218:
        case 227:
        case 245:
        case 256:
        case 268:
        case 215:
        case 224:
        case 233:
        case 210:
        case 219:
        case 228:
        case 216:
        case 225:
        case 234:
        case 208:
        case 217:
        case 226:
        case 213:
        case 222:
        case 231:
        case 214:
        case 223:
        case 232:
        case 212:
        case 221:
        case 230:
        case 211:
        case 220:
        case 229:
        case 184:
        case 191:
        case 198:
        case 189:
        case 196:
        case 203:
        case 183:
        case 190:
        case 197:
        case 187:
        case 194:
        case 201:
        case 188:
        case 195:
        case 202:
        case 186:
        case 193:
        case 200:
        case 185:
        case 192:
        case 199:
        case 171:
        case 167:
        case 166:
        case 169:
        case 168:
        case 170:
        case 165:
        case 163:
        case 162:
        case 164:
        case 160:
        case 176:
        case 172:
        case 175:
        case 173:
        case 174:
        case 161:
        case 153:
        case 207:
        case 205:
        case 206:
        case 204:
        case 152:
        case 150:
        case 151:
        case 149:
        case 182:
        case 180:
        case 181:
        case 179:
        case 136:
        case 134:
        case 135:
        case 133:
        case 132:
        case 129:
        case 130:
        case 131:
        case 128:
        case 143:
        case 142:
        case 140:
        case 138:
        case 139:
        case 137:
        case 146:
        case 148:
        case 147:
        case 145:
        case 144:
        case 178:
        case 177:
        case 141:
            break;
        default:
            goto legacy;
        }
    }





    if (VAR_13 != ((void*)0) && VAR_12->cipher != ((void*)0)) {
        FUNC_16(VAR_12->cipher_data, VAR_12->cipher->ctx_size);
        VAR_12->cipher_data = ((void*)0);
    }





    if (VAR_13 != ((void*)0) && VAR_12->cipher != ((void*)0)) {
        unsigned long VAR_20 = VAR_12->flags;

        FUNC_8(VAR_12);

        VAR_12->encrypt = VAR_17;
        VAR_12->flags = VAR_20;
    }

    if (VAR_13 == ((void*)0))
        VAR_13 = VAR_12->cipher;

    if (VAR_13->prov == ((void*)0)) {





        EVP_CIPHER *VAR_21 =
            FUNC_10(((void*)0), FUNC_14(VAR_13->nid), "");

        if (VAR_21 == ((void*)0)) {
            FUNC_13(VAR_8, VAR_9);
            return 0;
        }
        VAR_13 = VAR_21;
        FUNC_12(VAR_12->fetched_cipher);
        VAR_12->fetched_cipher = VAR_21;

    }

    VAR_12->cipher = VAR_13;
    if (VAR_12->provctx == ((void*)0)) {
        VAR_12->provctx = VAR_12->cipher->newctx(FUNC_19(VAR_13->prov));
        if (VAR_12->provctx == ((void*)0)) {
            FUNC_13(VAR_8, VAR_9);
            return 0;
        }
    }

    if ((VAR_12->flags & VAR_5) != 0) {




        if (!FUNC_9(VAR_12, 0))
            return 0;
    }

    if (VAR_17) {
        if (VAR_12->cipher->einit == ((void*)0)) {
            FUNC_13(VAR_8, VAR_9);
            return 0;
        }

        return VAR_12->cipher->einit(VAR_12->provctx,
                                  VAR_15,
                                  VAR_15 == ((void*)0) ? 0
                                              : FUNC_6(VAR_12),
                                  VAR_16,
                                  VAR_16 == ((void*)0) ? 0
                                             : FUNC_5(VAR_12));
    }

    if (VAR_12->cipher->dinit == ((void*)0)) {
        FUNC_13(VAR_8, VAR_9);
        return 0;
    }

    return VAR_12->cipher->dinit(VAR_12->provctx,
                              VAR_15,
                              VAR_15 == ((void*)0) ? 0
                                          : FUNC_6(VAR_12),
                              VAR_16,
                              VAR_16 == ((void*)0) ? 0
                                         : FUNC_5(VAR_12));


 legacy:

    if (VAR_13 != ((void*)0)) {





        if (VAR_12->cipher) {
            unsigned long VAR_22 = VAR_12->flags;
            FUNC_8(VAR_12);

            VAR_12->encrypt = VAR_17;
            VAR_12->flags = VAR_22;
        }

        if (VAR_14 != ((void*)0)) {
            if (!FUNC_2(VAR_14)) {
                FUNC_13(VAR_8, VAR_9);
                return 0;
            }
        } else {
            VAR_14 = VAR_18;
        }
        if (VAR_14 != ((void*)0)) {

            const EVP_CIPHER *VAR_23 = FUNC_0(VAR_14, VAR_13->nid);

            if (VAR_23 == ((void*)0)) {





                FUNC_13(VAR_8, VAR_9);
                return 0;
            }

            VAR_13 = VAR_23;




            VAR_12->engine = VAR_14;
        } else {
            VAR_12->engine = ((void*)0);
        }


        VAR_12->cipher = VAR_13;
        if (VAR_12->cipher->ctx_size) {
            VAR_12->cipher_data = FUNC_17(VAR_12->cipher->ctx_size);
            if (VAR_12->cipher_data == ((void*)0)) {
                VAR_12->cipher = ((void*)0);
                FUNC_13(VAR_8, VAR_0);
                return 0;
            }
        } else {
            VAR_12->cipher_data = ((void*)0);
        }
        VAR_12->key_len = VAR_13->key_len;

        VAR_12->flags &= VAR_1;
        if (VAR_12->cipher->flags & VAR_3) {
            if (!FUNC_4(VAR_12, VAR_7, 0, ((void*)0))) {
                VAR_12->cipher = ((void*)0);
                FUNC_13(VAR_8, VAR_9);
                return 0;
            }
        }
    }

 skip_to_init:

    if (VAR_12->cipher == ((void*)0))
        return 0;


    FUNC_15(VAR_12->cipher->block_size == 1
                   || VAR_12->cipher->block_size == 8
                   || VAR_12->cipher->block_size == 16);

    if (!(VAR_12->flags & VAR_1)
        && FUNC_7(VAR_12) == VAR_6) {
        FUNC_13(VAR_8, VAR_11);
        return 0;
    }

    if (!(FUNC_11(FUNC_3(VAR_12)) & VAR_4)) {
        switch (FUNC_7(VAR_12)) {

        case 270:
        case 272:
            break;

        case 274:
        case 271:

            VAR_12->num = 0;


        case 275:

            FUNC_15(FUNC_5(VAR_12) <=
                           (int)sizeof(VAR_12->iv));
            if (VAR_16)
                FUNC_18(VAR_12->oiv, VAR_16, FUNC_5(VAR_12));
            FUNC_18(VAR_12->iv, VAR_12->oiv, FUNC_5(VAR_12));
            break;

        case 273:
            VAR_12->num = 0;

            if (VAR_16)
                FUNC_18(VAR_12->iv, VAR_16, FUNC_5(VAR_12));
            break;

        default:
            return 0;
        }
    }

    if (VAR_15 || (VAR_12->cipher->flags & VAR_2)) {
        if (!VAR_12->cipher->init(VAR_12, VAR_15, VAR_16, VAR_17))
            return 0;
    }
    VAR_12->buf_len = 0;
    VAR_12->final_used = 0;
    VAR_12->block_mask = VAR_12->cipher->block_size - 1;
    return 1;
}
