
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_fd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (char const*) ;

ngx_fd_t
FUNC_2(u_char *VAR_3, ngx_uint_t VAR_4, ngx_uint_t VAR_5)
{
    ngx_fd_t VAR_6;

    VAR_6 = FUNC_0((const char *) VAR_3, VAR_0|VAR_1|VAR_2,
              VAR_5 ? VAR_5 : 0600);

    if (VAR_6 != -1 && !VAR_4) {
        (void) FUNC_1((const char *) VAR_3);
    }

    return VAR_6;
}
