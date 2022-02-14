
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_long ;
typedef int u_char ;
typedef int ngx_fd_t ;
typedef int ngx_err_t ;


 int FUNC_0 (int *,scalar_t__,int,int *,scalar_t__,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int *,size_t*) ;
 scalar_t__ FUNC_4 (int *,int *,size_t) ;

ngx_fd_t
FUNC_5(u_char *VAR_9, u_long VAR_10, u_long VAR_11, u_long VAR_12)
{
    size_t VAR_13;
    u_short *VAR_14;
    ngx_fd_t VAR_15;
    ngx_err_t VAR_16;
    u_short VAR_17[VAR_7];

    VAR_13 = VAR_7;
    VAR_14 = FUNC_3(VAR_17, VAR_9, &VAR_13);

    if (VAR_14 == ((void*)0)) {
        return VAR_4;
    }

    VAR_15 = VAR_4;

    if (VAR_11 == VAR_5
        && FUNC_4(VAR_9, VAR_14, VAR_13) != VAR_6)
    {
        goto failed;
    }

    VAR_15 = FUNC_0(VAR_14, VAR_10,
                     VAR_2|VAR_3|VAR_1,
                     ((void*)0), VAR_11, VAR_0, ((void*)0));

failed:

    if (VAR_14 != VAR_17) {
        VAR_16 = VAR_8;
        FUNC_1(VAR_14);
        FUNC_2(VAR_16);
    }

    return VAR_15;
}
