
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int tmp_buf ;
typedef int ebcdic_buf ;
struct TYPE_12__ {TYPE_1__* value; int object; } ;
typedef TYPE_2__ X509_NAME_ENTRY ;
struct TYPE_13__ {int entries; } ;
typedef TYPE_3__ X509_NAME ;
struct TYPE_14__ {char* data; } ;
struct TYPE_11__ {int type; int length; unsigned char* data; } ;
typedef TYPE_4__ BUF_MEM ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 TYPE_4__* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (unsigned char*,unsigned char*,int) ;
 int FUNC_8 (char*,int,int ) ;
 int FUNC_9 (char*,char const*,unsigned int) ;
 int* VAR_10 ;
 int FUNC_10 (int ) ;
 TYPE_2__* FUNC_11 (int ,int) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,char*,int) ;

char *FUNC_14(const X509_NAME *VAR_11, char *VAR_12, int VAR_13)
{
    const X509_NAME_ENTRY *VAR_14;
    int VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
    const char *VAR_24;
    char *VAR_25;
    unsigned char *VAR_26;
    BUF_MEM *VAR_27 = ((void*)0);
    static const char VAR_28[17] = "0123456789ABCDEF";
    int VAR_29[4];
    char VAR_30[80];




    if (VAR_12 == ((void*)0)) {
        if ((VAR_27 = FUNC_2()) == ((void*)0))
            goto err;
        if (!FUNC_1(VAR_27, 200))
            goto err;
        VAR_27->data[0] = '\0';
        VAR_13 = 200;
    } else if (VAR_13 == 0) {
        return ((void*)0);
    }
    if (VAR_11 == ((void*)0)) {
        if (VAR_27) {
            VAR_12 = VAR_27->data;
            FUNC_5(VAR_27);
        }
        FUNC_13(VAR_12, "NO X509_NAME", VAR_13);
        VAR_12[VAR_13 - 1] = '\0';
        return VAR_12;
    }

    VAR_13--;
    VAR_18 = 0;
    for (VAR_15 = 0; VAR_15 < FUNC_10(VAR_11->entries); VAR_15++) {
        VAR_14 = FUNC_11(VAR_11->entries, VAR_15);
        VAR_16 = FUNC_4(VAR_14->object);
        if ((VAR_16 == VAR_2) || ((VAR_24 = FUNC_3(VAR_16)) == ((void*)0))) {
            FUNC_8(VAR_30, sizeof(VAR_30), VAR_14->object);
            VAR_24 = VAR_30;
        }
        VAR_19 = FUNC_12(VAR_24);

        VAR_23 = VAR_14->value->type;
        VAR_21 = VAR_14->value->length;
        if (VAR_21 > VAR_1) {
            FUNC_6(VAR_8, VAR_9);
            goto end;
        }
        VAR_26 = VAR_14->value->data;
        if ((VAR_23 == VAR_3) && ((VAR_21 % 4) == 0)) {
            VAR_29[0] = VAR_29[1] = VAR_29[2] = VAR_29[3] = 0;
            for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
                if (VAR_26[VAR_22] != 0)
                    VAR_29[VAR_22 & 3] = 1;

            if (VAR_29[0] | VAR_29[1] | VAR_29[2])
                VAR_29[0] = VAR_29[1] = VAR_29[2] = VAR_29[3] = 1;
            else {
                VAR_29[0] = VAR_29[1] = VAR_29[2] = 0;
                VAR_29[3] = 1;
            }
        } else
            VAR_29[0] = VAR_29[1] = VAR_29[2] = VAR_29[3] = 1;

        for (VAR_20 = VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
            if (!VAR_29[VAR_22 & 3])
                continue;
            VAR_20++;

            if ((VAR_26[VAR_22] < ' ') || (VAR_26[VAR_22] > '~'))
                VAR_20 += 3;





        }

        VAR_17 = VAR_18;
        VAR_18 += 1 + VAR_19 + 1 + VAR_20;
        if (VAR_18 > VAR_1) {
            FUNC_6(VAR_8, VAR_9);
            goto end;
        }
        if (VAR_27 != ((void*)0)) {
            if (!FUNC_1(VAR_27, VAR_18 + 1))
                goto err;
            VAR_25 = &(VAR_27->data[VAR_17]);
        } else if (VAR_18 > VAR_13) {
            break;
        } else
            VAR_25 = &(VAR_12[VAR_17]);
        *(VAR_25++) = '/';
        FUNC_9(VAR_25, VAR_24, (unsigned int)VAR_19);
        VAR_25 += VAR_19;
        *(VAR_25++) = '=';


        VAR_26 = VAR_14->value->data;


        for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++) {
            if (!VAR_29[VAR_22 & 3])
                continue;

            VAR_16 = VAR_26[VAR_22];
            if ((VAR_16 < ' ') || (VAR_16 > '~')) {
                *(VAR_25++) = '\\';
                *(VAR_25++) = 'x';
                *(VAR_25++) = VAR_28[(VAR_16 >> 4) & 0x0f];
                *(VAR_25++) = VAR_28[VAR_16 & 0x0f];
            } else
                *(VAR_25++) = VAR_16;
        }
        *VAR_25 = '\0';
    }
    if (VAR_27 != ((void*)0)) {
        VAR_25 = VAR_27->data;
        FUNC_5(VAR_27);
    } else
        VAR_25 = VAR_12;
    if (VAR_15 == 0)
        *VAR_25 = '\0';
    return VAR_25;
 err:
    FUNC_6(VAR_8, VAR_0);
 end:
    FUNC_0(VAR_27);
    return ((void*)0);
}
