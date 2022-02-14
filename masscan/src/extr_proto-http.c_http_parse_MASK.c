
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ProtocolState {unsigned int state; } ;
typedef void InteractiveData ;
struct BannerOutput {int dummy; } ;
struct Banner1 {int is_capture_html; int html_fields; int http_fields; } ;




 size_t VAR_0 ;

 size_t VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (struct BannerOutput*,int ,unsigned char const*,unsigned int) ;
 int FUNC_2 (struct BannerOutput*,int ,unsigned char const) ;
 int FUNC_3 (unsigned char const) ;
 int FUNC_4 (unsigned char const) ;
 size_t FUNC_5 (int ,unsigned int*) ;
 size_t FUNC_6 (int ,unsigned int*,unsigned char const*,unsigned int*,unsigned int) ;
 int FUNC_7 (void*) ;
 char FUNC_8 (unsigned char const) ;

__attribute__((used)) static void
FUNC_9(
        const struct Banner1 *VAR_6,
        void *VAR_7,
        struct ProtocolState *VAR_8,
        const unsigned char *VAR_9, size_t VAR_10,
        struct BannerOutput *VAR_11,
        struct InteractiveData *VAR_12)
{
    unsigned VAR_13 = VAR_8->state;
    unsigned VAR_14;
    unsigned VAR_15;
    unsigned VAR_16 = 0;
    unsigned VAR_17 = 0;
    size_t VAR_18;
    enum {
        FIELD_START = 9,
        FIELD_NAME,
        FIELD_COLON,
        FIELD_VALUE,
        CONTENT,
        CONTENT_TAG,
        CONTENT_FIELD,

        DONE_PARSING
    };

    FUNC_0(VAR_7);
    FUNC_0(VAR_12);

    VAR_15 = (VAR_13>>16) & 0xFFFF;
    VAR_18 = (VAR_13>>8) & 0xFF;
    VAR_13 = (VAR_13>>0) & 0xFF;

    for (VAR_14=0; VAR_14<VAR_10; VAR_14++)
    switch (VAR_13) {
    case 0: case 1: case 2: case 3: case 4:
        if (FUNC_8(VAR_9[VAR_14]) != "HTTP/"[VAR_13]) {
            VAR_13 = DONE_PARSING;
            FUNC_7(VAR_12);
        } else
            VAR_13++;
        break;
    case 5:
        if (VAR_9[VAR_14] == '.')
            VAR_13++;
        else if (!FUNC_3(VAR_9[VAR_14])) {
            VAR_13 = DONE_PARSING;
            FUNC_7(VAR_12);
        }
        break;
    case 6:
        if (FUNC_4(VAR_9[VAR_14]))
            VAR_13++;
        else if (!FUNC_3(VAR_9[VAR_14])) {
            VAR_13 = DONE_PARSING;
            FUNC_7(VAR_12);
        }
        break;
    case 7:

        if (VAR_9[VAR_14] == '\n')
            VAR_13 = FIELD_START;
        break;
    case FIELD_START:
        if (VAR_9[VAR_14] == '\r')
            break;
        else if (VAR_9[VAR_14] == '\n') {
            VAR_15 = 0;
            VAR_13 = CONTENT;
            VAR_17 = VAR_14;
            FUNC_1(VAR_11, VAR_4, VAR_9+VAR_16, VAR_17-VAR_16);
            VAR_16 = VAR_17;
            break;
        } else {
            VAR_15 = 0;
            VAR_13 = FIELD_NAME;

        }

    case FIELD_NAME:
        if (VAR_9[VAR_14] == '\r')
            break;
        VAR_18 = FUNC_6(
                        VAR_6->http_fields,
                        &VAR_15,
                        VAR_9, &VAR_14, (unsigned)VAR_10);
        VAR_14--;
        if (VAR_18 == VAR_0) {
            VAR_15 = 0;
            VAR_13 = FIELD_START;
        } else if (VAR_18 == VAR_5)
            ;
        else if (VAR_18 == VAR_1) {



            size_t VAR_19;

            VAR_19 = FUNC_5(VAR_6->http_fields, &VAR_15);
            if (VAR_19 != VAR_5)
                VAR_18 = VAR_19;

            VAR_13 = FIELD_COLON;
        } else
            VAR_13 = FIELD_COLON;
        break;
    case FIELD_COLON:
        if (VAR_9[VAR_14] == '\n') {
            VAR_13 = FIELD_START;
            break;
        } else if (FUNC_4(VAR_9[VAR_14])) {
            break;
        } else {

            VAR_13 = FIELD_VALUE;

        }

    case FIELD_VALUE:
        if (VAR_9[VAR_14] == '\r')
            break;
        else if (VAR_9[VAR_14] == '\n') {
            VAR_13 = FIELD_START;
            break;
        }
        switch (VAR_18) {
        case 129:
        case 130:
        case 128:

            break;
        case 131:
                if (FUNC_3(VAR_9[VAR_14]&0xFF)) {
                    ;
                } else {
                    VAR_18 = 0;
                }
            break;
        }
        break;
    case CONTENT:
        {
            unsigned VAR_20 = VAR_14;

            VAR_18 = FUNC_6(
                                   VAR_6->html_fields,
                                   &VAR_15,
                                   VAR_9, &VAR_20, (unsigned)VAR_10);

            if (VAR_6->is_capture_html) {
                FUNC_1(VAR_11, VAR_2, &VAR_9[VAR_14], VAR_20-VAR_14);
            }

            if (VAR_18 != VAR_5) {
                VAR_13 = CONTENT_TAG;
            }

            VAR_14 = VAR_20 - 1;
        }
        break;
    case CONTENT_TAG:
        for (; VAR_14<VAR_10; VAR_14++) {
            if (VAR_6->is_capture_html) {
                FUNC_2(VAR_11, VAR_2, VAR_9[VAR_14]);
            }

            if (VAR_9[VAR_14] == '>') {
                VAR_13 = CONTENT_FIELD;
                break;
            }
        }
        break;
    case CONTENT_FIELD:
        if (VAR_6->is_capture_html) {
            FUNC_2(VAR_11, VAR_2, VAR_9[VAR_14]);
        }
        if (VAR_9[VAR_14] == '<')
            VAR_13 = CONTENT;
        else {
            FUNC_2(VAR_11, VAR_3, VAR_9[VAR_14]);
        }
        break;
    case DONE_PARSING:
    default:
        VAR_14 = (unsigned)VAR_10;
        break;
    }

    if (VAR_17 == 0 && VAR_13 < CONTENT)
        VAR_17 = VAR_14;
    if (VAR_16 < VAR_17)
        FUNC_1(VAR_11, VAR_4, VAR_9 + VAR_16, VAR_17-VAR_16);



    if (VAR_13 == DONE_PARSING)
        VAR_8->state = VAR_13;
    else
        VAR_8->state = (VAR_15 & 0xFFFF) << 16
                | ((unsigned)VAR_18 & 0xFF) << 8
                | (VAR_13 & 0xFF);
}
