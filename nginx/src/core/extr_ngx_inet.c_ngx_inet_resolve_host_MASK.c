
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_10__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct hostent {int ** h_addr_list; } ;
struct TYPE_9__ {scalar_t__ len; int data; } ;
struct TYPE_11__ {char* err; TYPE_1__ host; } ;
typedef TYPE_3__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_12__ {int log; } ;
typedef TYPE_4__ ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
typedef scalar_t__ in_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct hostent* FUNC_0 (char*) ;
 int * FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_3__*,struct sockaddr*,int,int) ;
 scalar_t__ FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct sockaddr_in*,int) ;

ngx_int_t
FUNC_7(ngx_pool_t *VAR_4, ngx_url_t *VAR_5)
{
    u_char *VAR_6;
    ngx_uint_t VAR_7, VAR_8;
    struct hostent *VAR_9;
    struct sockaddr_in VAR_10;



    FUNC_6(&VAR_10, sizeof(struct sockaddr_in));

    VAR_10.sin_family = VAR_0;
    VAR_10.sin_addr.s_addr = FUNC_5(VAR_5->host.data, VAR_5->host.len);

    if (VAR_10.sin_addr.s_addr == VAR_1) {
        VAR_6 = FUNC_1(VAR_5->host.len + 1, VAR_4->log);
        if (VAR_6 == ((void*)0)) {
            return VAR_2;
        }

        (void) FUNC_2(VAR_6, VAR_5->host.data, VAR_5->host.len + 1);

        VAR_9 = FUNC_0((char *) VAR_6);

        FUNC_3(VAR_6);

        if (VAR_9 == ((void*)0) || VAR_9->h_addr_list[0] == ((void*)0)) {
            VAR_5->err = "host not found";
            return VAR_2;
        }

        for (VAR_8 = 0; VAR_9->h_addr_list[VAR_8] != ((void*)0); VAR_8++) { }



        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
            VAR_10.sin_addr.s_addr = *(in_addr_t *) (VAR_9->h_addr_list[VAR_7]);

            if (FUNC_4(VAR_4, VAR_5, (struct sockaddr *) &VAR_10,
                                  sizeof(struct sockaddr_in), VAR_8)
                != VAR_3)
            {
                return VAR_2;
            }
        }

    } else {



        if (FUNC_4(VAR_4, VAR_5, (struct sockaddr *) &VAR_10,
                              sizeof(struct sockaddr_in), 1)
            != VAR_3)
        {
            return VAR_2;
        }
    }

    return VAR_3;
}
