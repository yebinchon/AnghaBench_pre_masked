
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int lua_State ;
typedef int coap_rw_buffer_t ;
struct TYPE_18__ {int len; int p; } ;
struct TYPE_19__ {int tok; TYPE_4__ payload; } ;
typedef TYPE_5__ coap_packet_t ;
struct TYPE_17__ {scalar_t__ len; int p; } ;
struct TYPE_20__ {TYPE_3__ buf; } ;
typedef TYPE_6__ coap_option_t ;
struct TYPE_21__ {struct TYPE_21__* next; scalar_t__ name; } ;
typedef TYPE_7__ coap_luser_entry ;
struct TYPE_22__ {TYPE_2__* user_entry; TYPE_1__* path; } ;
typedef TYPE_8__ coap_endpoint_t ;
struct TYPE_16__ {TYPE_7__* next; } ;
struct TYPE_15__ {scalar_t__ count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_6__* FUNC_1 (TYPE_5__ const*,int ,scalar_t__*) ;
 int FUNC_2 (int *,TYPE_5__*,char const*,size_t,scalar_t__,scalar_t__,int *,int ,int ) ;
 char* FUNC_3 (int *,int,size_t*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 scalar_t__ FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(const coap_endpoint_t *VAR_7, coap_rw_buffer_t *VAR_8, const coap_packet_t *VAR_9, coap_packet_t *VAR_10, uint8_t VAR_11, uint8_t VAR_12)
{
    const coap_option_t *VAR_13;
    uint8_t VAR_14;
    int VAR_15;
    lua_State *VAR_16 = FUNC_7();
    if (((void*)0) != (VAR_13 = FUNC_1(VAR_9, VAR_2, &VAR_14)))
    {
        if ((VAR_14 != VAR_7->path->count ) && (VAR_14 != VAR_7->path->count + 1))
        {
            FUNC_0("should never happen.\n");
            goto end;
        }
        if (VAR_14 == VAR_7->path->count + 1)
        {
            coap_luser_entry *VAR_17 = VAR_7->user_entry->next;
            while(((void*)0) != VAR_17){
                if (VAR_13[VAR_14-1].buf.len != FUNC_15(VAR_17->name))
                {
                    VAR_17 = VAR_17->next;
                    continue;
                }
                if (0 == FUNC_14(VAR_17->name, VAR_13[VAR_14-1].buf.p, VAR_13[VAR_14-1].buf.len))
                {
                    FUNC_0("/v1/f/");
                    FUNC_0((char *)VAR_17->name);
                    FUNC_0(" match.\n");

                    if(FUNC_15(VAR_17->name))
                    {
                        VAR_15 = FUNC_8(VAR_16);
                        FUNC_6(VAR_16, VAR_17->name);
                        if (FUNC_13(VAR_16, -1) != VAR_5) {
                            FUNC_0 ("should be a function\n");
                            FUNC_12(VAR_16, VAR_15);
                            return FUNC_2(VAR_8, VAR_10, ((void*)0), 0, VAR_11, VAR_12, &VAR_9->tok, VAR_4, VAR_0);
                        } else {
                            FUNC_11(VAR_16, VAR_9->payload.p, VAR_9->payload.len);
                            FUNC_5(VAR_16, 1, 1);
                            if (!FUNC_9(VAR_16, -1)){
                                if( FUNC_10(VAR_16, -1) )
                                {
                                    size_t VAR_18 = 0;
                                    const char *VAR_19 = FUNC_3( VAR_16, -1, &VAR_18 );
                                    if(VAR_18 > VAR_6){
                                        FUNC_12(VAR_16, VAR_15);
                                        FUNC_4( VAR_16, "return string:<MAX_PAYLOAD_SIZE" );
                                        return FUNC_2(VAR_8, VAR_10, ((void*)0), 0, VAR_11, VAR_12, &VAR_9->tok, VAR_4, VAR_0);
                                    }
                                    FUNC_0((char *)VAR_19);
                                    FUNC_0("\n");
                                    FUNC_12(VAR_16, VAR_15);
                                    return FUNC_2(VAR_8, VAR_10, VAR_19, VAR_18, VAR_11, VAR_12, &VAR_9->tok, VAR_3, VAR_1);
                                }
                            } else {
                                FUNC_12(VAR_16, VAR_15);
                                return FUNC_2(VAR_8, VAR_10, ((void*)0), 0, VAR_11, VAR_12, &VAR_9->tok, VAR_3, VAR_1);
                            }
                        }
                    }
                } else {
                    VAR_17 = VAR_17->next;
                }
            }
        }else{
            FUNC_0("/v1/f match.\n");
            goto end;
        }
    }
    FUNC_0("none match.\n");
end:
    return FUNC_2(VAR_8, VAR_10, ((void*)0), 0, VAR_11, VAR_12, &VAR_9->tok, VAR_4, VAR_0);
}
