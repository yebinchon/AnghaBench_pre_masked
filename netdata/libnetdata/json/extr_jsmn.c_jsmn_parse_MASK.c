
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* jsmntype_t ;
struct TYPE_12__ {size_t parent; size_t start; int end; int size; void* type; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmnerr_t ;
struct TYPE_13__ {size_t pos; int toksuper; int toknext; } ;
typedef TYPE_2__ jsmn_parser ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*,char const*,size_t,TYPE_1__*,unsigned int) ;
 int FUNC_2 (TYPE_2__*,char const*,size_t,TYPE_1__*,unsigned int) ;

jsmnerr_t FUNC_3(jsmn_parser *VAR_5, const char *VAR_6, size_t VAR_7,
                     jsmntok_t *VAR_8, unsigned int VAR_9) {
    jsmnerr_t VAR_10;
    int VAR_11;
    jsmntok_t *VAR_12;
    int VAR_13 = 0;

    for (; VAR_5->pos < VAR_7 && VAR_6[VAR_5->pos] != '\0'; VAR_5->pos++) {
        char VAR_14;
        jsmntype_t VAR_15;

        VAR_14 = VAR_6[VAR_5->pos];
        switch (VAR_14) {
            case '{': case '[':
                VAR_13++;
                if (VAR_8 == ((void*)0)) {
                    break;
                }
                VAR_12 = FUNC_0(VAR_5, VAR_8, VAR_9);
                if (VAR_12 == ((void*)0))
                    return VAR_2;
                if (VAR_5->toksuper != -1) {
                    VAR_8[VAR_5->toksuper].size++;



                }
                VAR_12->type = (VAR_14 == '{' ? VAR_4 : VAR_0);
                VAR_12->start = VAR_5->pos;
                VAR_5->toksuper = VAR_5->toknext - 1;
                break;
            case '}': case ']':
                if (VAR_8 == ((void*)0))
                    break;
                VAR_15 = (VAR_14 == '}' ? VAR_4 : VAR_0);
                for (VAR_11 = VAR_5->toknext - 1; VAR_11 >= 0; VAR_11--) {
                    VAR_12 = &VAR_8[VAR_11];
                    if (VAR_12->start != -1 && VAR_12->end == -1) {
                        if (VAR_12->type != VAR_15) {
                            return VAR_1;
                        }
                        VAR_5->toksuper = -1;
                        VAR_12->end = VAR_5->pos + 1;
                        break;
                    }
                }

                if (VAR_11 == -1) return VAR_1;
                for (; VAR_11 >= 0; VAR_11--) {
                    VAR_12 = &VAR_8[VAR_11];
                    if (VAR_12->start != -1 && VAR_12->end == -1) {
                        VAR_5->toksuper = VAR_11;
                        break;
                    }
                }

                break;
            case '\"':
                VAR_10 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
                if (VAR_10 < 0) return VAR_10;
                VAR_13++;
                if (VAR_5->toksuper != -1 && VAR_8 != ((void*)0))
                    VAR_8[VAR_5->toksuper].size++;
                break;
            case '\t' : case '\r' : case '\n' : case ':' : case ',': case ' ':
                break;







            default:

                VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
                if (VAR_10 < 0) return VAR_10;
                VAR_13++;
                if (VAR_5->toksuper != -1 && VAR_8 != ((void*)0))
                    VAR_8[VAR_5->toksuper].size++;
                break;






        }
    }

    if (VAR_8) {
        for (VAR_11 = VAR_5->toknext - 1; VAR_11 >= 0; VAR_11--) {

            if (VAR_8[VAR_11].start != -1 && VAR_8[VAR_11].end == -1) {
                return VAR_3;
            }
        }
    }

    return VAR_13;
}
