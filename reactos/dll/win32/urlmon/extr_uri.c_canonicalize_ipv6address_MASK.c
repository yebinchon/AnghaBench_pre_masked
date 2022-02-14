
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ h16_count; scalar_t__ ipv4; } ;
struct TYPE_9__ {scalar_t__ scheme_type; int host_len; TYPE_3__ ipv6_address; int host; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
struct TYPE_10__ {int host_start; int canon_len; char* canon_uri; int host_len; } ;
typedef TYPE_2__ Uri ;
typedef scalar_t__ USHORT ;
typedef int UINT ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,int,int,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,int*,int*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_3__*,scalar_t__*) ;
 int FUNC_4 (char*,int ,int) ;
 scalar_t__ FUNC_5 (char*,char const*,scalar_t__) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static BOOL FUNC_7(const parse_data *VAR_3, Uri *VAR_4,
                                     DWORD VAR_5, BOOL VAR_6) {
    VAR_4->host_start = VAR_4->canon_len;

    if(VAR_3->scheme_type == VAR_2) {
        if(!VAR_6)
            FUNC_4(VAR_4->canon_uri+VAR_4->canon_len, VAR_3->host, VAR_3->host_len*sizeof(WCHAR));
        VAR_4->canon_len += VAR_3->host_len;
    } else {
        USHORT VAR_7[8];
        INT VAR_8;
        DWORD VAR_9, VAR_10;

        if(!FUNC_3(&(VAR_3->ipv6_address), VAR_7)) {
            FUNC_0("(%p %p %x %d): Failed to compute numerical value for IPv6 address.\n",
                VAR_3, VAR_4, VAR_5, VAR_6);
            return VAR_0;
        }

        if(!VAR_6)
            VAR_4->canon_uri[VAR_4->canon_len] = '[';
        ++VAR_4->canon_len;


        FUNC_1(&(VAR_3->ipv6_address), VAR_7, &VAR_8, &VAR_10);

        FUNC_0("%p %p %x %d): Elision starts at %d, len=%u\n", VAR_3, VAR_4, VAR_5,
            VAR_6, VAR_8, VAR_10);

        for(VAR_9 = 0; VAR_9 < 8; ++VAR_9) {
            BOOL VAR_11 = (VAR_8 > -1 && VAR_9 >= VAR_8 &&
                               VAR_9 < VAR_8+VAR_10);
            BOOL VAR_12 = (VAR_9 == 6 && VAR_3->ipv6_address.ipv4 && !VAR_11 &&
                            VAR_3->ipv6_address.h16_count == 0);

            if(VAR_9 == VAR_8) {
                if(!VAR_6) {
                    VAR_4->canon_uri[VAR_4->canon_len] = ':';
                    VAR_4->canon_uri[VAR_4->canon_len+1] = ':';
                }
                VAR_4->canon_len += 2;
            }


            if(VAR_11)
                continue;





            if(VAR_9 != 0 && !(VAR_8 > -1 && VAR_9 == VAR_8+VAR_10)) {
                if(!VAR_6)
                    VAR_4->canon_uri[VAR_4->canon_len] = ':';
                ++VAR_4->canon_len;
            }

            if(VAR_12) {
                UINT VAR_13;
                DWORD VAR_14;


                VAR_13 = VAR_7[VAR_9];
                VAR_13 <<= 16;
                VAR_13 += VAR_7[VAR_9+1];

                if(!VAR_6)
                    VAR_14 = FUNC_6(VAR_4->canon_uri+VAR_4->canon_len, VAR_13);
                else
                    VAR_14 = FUNC_6(((void*)0), VAR_13);

                VAR_4->canon_len += VAR_14;
                ++VAR_9;
            } else {



                if(VAR_7[VAR_9] == 0) {
                    if(!VAR_6)
                        VAR_4->canon_uri[VAR_4->canon_len] = '0';
                    ++VAR_4->canon_len;
                } else {
                    static const WCHAR VAR_15[] = {'%','x',0};

                    if(!VAR_6)
                        VAR_4->canon_len += FUNC_5(VAR_4->canon_uri+VAR_4->canon_len,
                                            VAR_15, VAR_7[VAR_9]);
                    else {
                        WCHAR VAR_16[5];
                        VAR_4->canon_len += FUNC_5(VAR_16, VAR_15, VAR_7[VAR_9]);
                    }
                }
            }
        }


        if(!VAR_6)
            VAR_4->canon_uri[VAR_4->canon_len] = ']';
        ++VAR_4->canon_len;
    }

    VAR_4->host_len = VAR_4->canon_len - VAR_4->host_start;

    if(!VAR_6)
        FUNC_0("(%p %p %x %d): Canonicalized IPv6 address %s, len=%d\n", VAR_3, VAR_4, VAR_5,
            VAR_6, FUNC_2(VAR_4->canon_uri+VAR_4->host_start, VAR_4->host_len),
            VAR_4->host_len);

    return VAR_1;
}
