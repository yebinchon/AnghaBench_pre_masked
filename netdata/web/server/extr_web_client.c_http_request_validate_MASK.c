
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ conn; } ;
struct TYPE_3__ {int data; } ;
struct web_client {size_t header_parse_last_size; int header_parse_tries; int* url_search_path; scalar_t__ mode; int separator; int url_path_length; TYPE_2__ ssl; int decoded_url; int last_url; int decoded_query_string; TYPE_1__ response; } ;
typedef int HTTP_VALIDATION ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (struct web_client*,char*,int) ;
 int FUNC_3 (char*,int,size_t) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 char* FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,char*,size_t) ;
 int FUNC_11 (char**,char*) ;
 scalar_t__ FUNC_12 (int ,scalar_t__,char**,int) ;
 int FUNC_13 (struct web_client*) ;
 int FUNC_14 (struct web_client*) ;
 int FUNC_15 (struct web_client*) ;
 scalar_t__ FUNC_16 (struct web_client*) ;
 scalar_t__ FUNC_17 (struct web_client*) ;
 int FUNC_18 (struct web_client*,char*) ;
 char* FUNC_19 (struct web_client*,char*) ;

__attribute__((used)) static inline HTTP_VALIDATION FUNC_20(struct web_client *VAR_11) {
    char *VAR_12 = (char *)FUNC_1(VAR_11->response.data), *VAR_13 = ((void*)0);

    size_t VAR_14 = VAR_11->header_parse_last_size;

    VAR_11->header_parse_tries++;
    VAR_11->header_parse_last_size = FUNC_0(VAR_11->response.data);

    int VAR_15;
    if(VAR_11->header_parse_tries > 1) {
        if(VAR_14 > 4) VAR_14 -= 4;
        else VAR_14 = 0;

        if(VAR_11->header_parse_last_size < VAR_14)
            VAR_14 = 0;

        VAR_15 = FUNC_10(VAR_12, &VAR_12[VAR_14], VAR_11->header_parse_last_size);
        if(!VAR_15) {
            if(VAR_11->header_parse_tries > 10) {
                FUNC_3("Disabling slow client after %zu attempts to read the request (%zu bytes received)", VAR_11->header_parse_tries, FUNC_0(VAR_11->response.data));
                VAR_11->header_parse_tries = 0;
                VAR_11->header_parse_last_size = 0;
                FUNC_14(VAR_11);
                return VAR_2;
            }

            return VAR_0;
        }

        VAR_15 = 1;
    } else {
        VAR_14 = VAR_11->header_parse_last_size;
        VAR_15 = FUNC_10(VAR_12, &VAR_12[VAR_14], VAR_11->header_parse_last_size);
    }

    VAR_12 = FUNC_19(VAR_11, VAR_12);
    if (!VAR_12) {
        VAR_11->header_parse_tries = 0;
        VAR_11->header_parse_last_size = 0;
        FUNC_14(VAR_11);

        return VAR_2;
    } else if (!VAR_15) {

        char *VAR_16 = FUNC_6((char *)FUNC_1(VAR_11->response.data), "\r\n\r\n");
        if(VAR_16) {
            VAR_16 += 4;
            if (*VAR_16) {
                VAR_11->header_parse_tries = 0;
                VAR_11->header_parse_last_size = 0;
                FUNC_14(VAR_11);
                return VAR_2;
            }
        }

        FUNC_15(VAR_11);
        return VAR_0;
    }


    VAR_13 = VAR_12;


    VAR_12 = FUNC_9(VAR_12);


    if(FUNC_7(!*VAR_12)) {
        FUNC_15(VAR_11);
        return VAR_0;
    }


    char *VAR_17 = VAR_12;


    int VAR_18;
    char *VAR_19[VAR_9];



    while(*VAR_12) {

        while(*VAR_12 && *VAR_12++ != '\r');


        if(FUNC_7(!*VAR_12)) break;


        if(FUNC_4(*VAR_12++ == '\n')) {


            if(FUNC_7(*VAR_12 == '\r' && VAR_12[1] == '\n')) {


                *VAR_17 = '\0';

                VAR_11->url_search_path = ((void*)0);
                if(VAR_11->mode != VAR_7) {
                    if(!FUNC_8(VAR_11->decoded_url, VAR_13, VAR_6 + 1))
                        return VAR_1;
                } else {
                    FUNC_18(VAR_11, VAR_13);

                    if (VAR_11->url_search_path && VAR_11->separator) {
                        *VAR_11->url_search_path = 0x00;
                    }

                    if(!FUNC_8(VAR_11->decoded_url, VAR_13, VAR_6 + 1))
                        return VAR_1;

                    if (VAR_11->url_search_path && VAR_11->separator) {
                        *VAR_11->url_search_path = VAR_11->separator;

                        char *VAR_20 = (VAR_13 + VAR_11->url_path_length);
                        VAR_18 = FUNC_11(VAR_19, VAR_20);

                        if (FUNC_12(VAR_11->decoded_query_string, VAR_6 + 1, VAR_19, VAR_18)) {
                            return VAR_1;
                        }
                    }
                }
                *VAR_17 = ' ';



                FUNC_5(VAR_11->last_url, VAR_11->decoded_url, VAR_6);
                VAR_11->header_parse_tries = 0;
                VAR_11->header_parse_last_size = 0;
                FUNC_14(VAR_11);
                return VAR_3;
            }


            VAR_12 = FUNC_2(VAR_11, VAR_12,
                    (VAR_11->mode == VAR_8)
            );
        }
    }


    FUNC_15(VAR_11);
    return VAR_0;
}
