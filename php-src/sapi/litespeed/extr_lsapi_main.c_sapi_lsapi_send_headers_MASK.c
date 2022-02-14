
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zend_llist_position ;
struct TYPE_9__ {int headers; } ;
typedef TYPE_1__ sapi_headers_struct ;
struct TYPE_10__ {scalar_t__ header_len; char* header; } ;
typedef TYPE_2__ sapi_header_struct ;
struct TYPE_11__ {scalar_t__ send_default_content_type; int http_response_code; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_7__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int,char*,char*) ;
 TYPE_2__* FUNC_8 (int *,int *) ;
 TYPE_2__* FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(sapi_headers_struct *VAR_4)
{
    sapi_header_struct *VAR_5;
    zend_llist_position VAR_6;

    if ( VAR_3 ) {

        return FUNC_6(VAR_4);
    }


    if ( VAR_2 ) {
        FUNC_2( FUNC_3(VAR_4).http_response_code );

        VAR_5 = FUNC_8(&VAR_4->headers, &VAR_6);
        while (VAR_5) {
            if ( VAR_5->header_len > 0 ) {
                FUNC_0(VAR_5->header, VAR_5->header_len);
            }
            VAR_5 = FUNC_9(&VAR_4->headers, &VAR_6);
        }
        if (FUNC_3(VAR_4).send_default_content_type) {
            char *VAR_7;
            int VAR_8;
            char VAR_9[VAR_1];

            VAR_7 = FUNC_5();
            VAR_8 = FUNC_7( VAR_9, VAR_1 - 1,
                            "Content-type: %s", VAR_7 );
            FUNC_4(VAR_7);

            FUNC_0( VAR_9, VAR_8 );
        }
    }
    FUNC_1();
    return VAR_0;


}
