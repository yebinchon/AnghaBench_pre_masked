
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;
typedef int ngx_md5_t ;


 char* FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,size_t) ;
 int FUNC_4 (size_t,int) ;

__attribute__((used)) static void
FUNC_5(u_char *VAR_0, size_t VAR_1, u_char *VAR_2,
    size_t VAR_3)
{
    u_char VAR_4[16], *VAR_5;
    ngx_md5_t VAR_6;

    FUNC_2(&VAR_6);
    FUNC_3(&VAR_6, VAR_2, VAR_3);
    FUNC_1(VAR_4, &VAR_6);

    VAR_5 = FUNC_0(VAR_0, VAR_4, FUNC_4((VAR_1 - 1) / 2, 16));
    *VAR_5 = '\0';
}
