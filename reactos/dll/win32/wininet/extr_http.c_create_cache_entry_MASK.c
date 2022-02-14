
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int no_storeW ;
typedef int no_cacheW ;
struct TYPE_14__ {int dwFlags; } ;
struct TYPE_16__ {unsigned int contentLength; TYPE_5__* data_stream; scalar_t__ read_size; scalar_t__ read_pos; scalar_t__ read_buf; int * hCacheFile; TYPE_7__* req_file; TYPE_2__ hdr; int headers_section; TYPE_1__* custHeaders; } ;
typedef TYPE_4__ http_request_t ;
typedef char WCHAR ;
struct TYPE_18__ {char* url; } ;
struct TYPE_17__ {TYPE_3__* vtbl; } ;
struct TYPE_15__ {scalar_t__ (* end_of_data ) (TYPE_5__*,TYPE_4__*) ;} ;
struct TYPE_13__ {char* lpszValue; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int ,int,int *,int ,int ,int *) ;
 scalar_t__ FUNC_2 (char*,unsigned int,int *,char*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char*,...) ;
 int VAR_5 ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_4__*,int ,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_7 (int *) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (char*,...) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_10 (TYPE_4__*) ;
 char* FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (char*,TYPE_7__**) ;
 int FUNC_13 (TYPE_7__*) ;
 char* FUNC_14 (char*,char) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,char const*,int) ;
 scalar_t__ FUNC_17 (TYPE_5__*,TYPE_4__*) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_18(http_request_t *VAR_12)
{
    static const WCHAR VAR_13[] = {'n','o','-','c','a','c','h','e',0};
    static const WCHAR VAR_14[] = {'n','o','-','s','t','o','r','e',0};

    WCHAR VAR_15[VAR_9+1];
    WCHAR *VAR_16;
    BOOL VAR_17 = VAR_10;


    if(VAR_12->req_file) {
        FUNC_13(VAR_12->req_file);
        VAR_12->req_file = ((void*)0);
    }
    if(VAR_12->hCacheFile) {
        FUNC_0(VAR_12->hCacheFile);
        VAR_12->hCacheFile = ((void*)0);
    }

    if(VAR_12->hdr.dwFlags & VAR_7)
        VAR_17 = VAR_1;

    if(VAR_17) {
        int VAR_18;

        FUNC_3( &VAR_12->headers_section );

        VAR_18 = FUNC_6(VAR_12, VAR_11, 0, VAR_1);
        if(VAR_18 != -1) {
            WCHAR *VAR_19;

            for(VAR_19=VAR_12->custHeaders[VAR_18].lpszValue; *VAR_19; ) {
                WCHAR *VAR_20;

                while(*VAR_19==' ' || *VAR_19=='\t')
                    VAR_19++;

                VAR_20 = FUNC_14(VAR_19, ',');
                if(!VAR_20)
                    VAR_20 = VAR_19 + FUNC_15(VAR_19);

                if(!FUNC_16(VAR_19, VAR_13, sizeof(VAR_13)/sizeof(*VAR_13)-1)
                        || !FUNC_16(VAR_19, VAR_14, sizeof(VAR_14)/sizeof(*VAR_14)-1)) {
                    VAR_17 = VAR_1;
                    break;
                }

                VAR_19 = VAR_20;
                if(*VAR_19 == ',')
                    VAR_19++;
            }
        }

        FUNC_7( &VAR_12->headers_section );
    }

    if(!VAR_17) {
        if(!(VAR_12->hdr.dwFlags & VAR_6))
            return;

        FUNC_4("INTERNET_FLAG_NEED_FILE is not supported correctly\n");
    }

    VAR_16 = FUNC_11(VAR_12);
    if(!VAR_16) {
        FUNC_8("Could not get URL\n");
        return;
    }

    VAR_17 = FUNC_2(VAR_16, VAR_12->contentLength == ~0u ? 0 : VAR_12->contentLength, ((void*)0), VAR_15, 0);
    if(!VAR_17) {
        FUNC_8("Could not create cache entry: %08x\n", FUNC_5());
        return;
    }

    FUNC_12(VAR_15, &VAR_12->req_file);
    VAR_12->req_file->url = VAR_16;

    VAR_12->hCacheFile = FUNC_1(VAR_15, VAR_5, VAR_3|VAR_4,
              ((void*)0), VAR_0, VAR_2, ((void*)0));
    if(VAR_12->hCacheFile == VAR_8) {
        FUNC_8("Could not create file: %u\n", FUNC_5());
        VAR_12->hCacheFile = ((void*)0);
        return;
    }

    if(VAR_12->read_size) {
        DWORD VAR_21;

        VAR_17 = FUNC_9(VAR_12->hCacheFile, VAR_12->read_buf+VAR_12->read_pos, VAR_12->read_size, &VAR_21, ((void*)0));
        if(!VAR_17)
            FUNC_4("WriteFile failed: %u\n", FUNC_5());

        if(VAR_12->data_stream->vtbl->end_of_data(VAR_12->data_stream, VAR_12))
            FUNC_10(VAR_12);
    }
}
