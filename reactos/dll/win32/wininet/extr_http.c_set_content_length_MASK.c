
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ decoding; } ;
struct TYPE_13__ {char content_length; scalar_t__ content_read; } ;
struct TYPE_17__ {scalar_t__ status_code; char contentLength; int headers_section; TYPE_4__* custHeaders; TYPE_3__ hdr; TYPE_2__* data_stream; scalar_t__ read_pos; scalar_t__ read_size; scalar_t__ read_buf; TYPE_1__ netconn_stream; int verb; } ;
typedef TYPE_5__ http_request_t ;
typedef int encoding ;
struct TYPE_14__ {int * vtbl; } ;
struct TYPE_18__ {TYPE_2__ data_stream; scalar_t__ buf_size; int buf; int state; scalar_t__ chunk_size; scalar_t__ buf_pos; } ;
typedef TYPE_6__ chunked_stream_t ;
typedef char WCHAR ;
struct TYPE_16__ {char* lpszValue; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int,char*,scalar_t__*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_6__* FUNC_5 (int) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (int ,char const*) ;
 int FUNC_9 (char*,char const*) ;
 int VAR_10 ;

__attribute__((used)) static DWORD FUNC_10(http_request_t *VAR_11)
{
    static const WCHAR VAR_12[] = {'c','h','u','n','k','e','d',0};
    static const WCHAR VAR_13[] = {'H','E','A','D',0};
    WCHAR VAR_14[20];
    DWORD VAR_15;

    if(VAR_11->status_code == VAR_7 || !FUNC_8(VAR_11->verb, VAR_13)) {
        VAR_11->contentLength = VAR_11->netconn_stream.content_length = 0;
        return VAR_2;
    }

    VAR_15 = sizeof(VAR_11->contentLength);
    if (FUNC_3(VAR_11, VAR_5|VAR_4,
                            &VAR_11->contentLength, &VAR_15, ((void*)0)) != VAR_2)
        VAR_11->contentLength = ~0u;
    VAR_11->netconn_stream.content_length = VAR_11->contentLength;
    VAR_11->netconn_stream.content_read = VAR_11->read_size;

    VAR_15 = sizeof(VAR_14);
    if (FUNC_3(VAR_11, VAR_6, VAR_14, &VAR_15, ((void*)0)) == VAR_2 &&
        !FUNC_9(VAR_14, VAR_12))
    {
        chunked_stream_t *VAR_16;

        VAR_16 = FUNC_5(sizeof(*VAR_16));
        if(!VAR_16)
            return VAR_1;

        VAR_16->data_stream.vtbl = &VAR_9;
        VAR_16->buf_size = VAR_16->buf_pos = 0;
        VAR_16->chunk_size = 0;
        VAR_16->state = VAR_0;

        if(VAR_11->read_size) {
            FUNC_7(VAR_16->buf, VAR_11->read_buf+VAR_11->read_pos, VAR_11->read_size);
            VAR_16->buf_size = VAR_11->read_size;
            VAR_11->read_size = VAR_11->read_pos = 0;
        }

        VAR_11->data_stream = &VAR_16->data_stream;
        VAR_11->contentLength = ~0u;
    }

    if(VAR_11->hdr.decoding) {
        int VAR_17;

        static const WCHAR VAR_18[] = {'d','e','f','l','a','t','e',0};
        static const WCHAR VAR_19[] = {'g','z','i','p',0};

        FUNC_0( &VAR_11->headers_section );

        VAR_17 = FUNC_2(VAR_11, VAR_10, 0, VAR_3);
        if(VAR_17 != -1) {
            if(!FUNC_9(VAR_11->custHeaders[VAR_17].lpszValue, VAR_19)) {
                FUNC_1(VAR_11, VAR_17);
                FUNC_4( &VAR_11->headers_section );
                return FUNC_6(VAR_11, VAR_8);
            }
            if(!FUNC_9(VAR_11->custHeaders[VAR_17].lpszValue, VAR_18)) {
                FUNC_1(VAR_11, VAR_17);
                FUNC_4( &VAR_11->headers_section );
                return FUNC_6(VAR_11, VAR_3);
            }
        }

        FUNC_4( &VAR_11->headers_section );
    }

    return VAR_2;
}
