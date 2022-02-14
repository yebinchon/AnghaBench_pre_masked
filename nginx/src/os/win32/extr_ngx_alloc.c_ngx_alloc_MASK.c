
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (size_t) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ,char*,void*,size_t) ;
 int FUNC_2 (int ,int *,int ,char*,size_t) ;

void *FUNC_3(size_t VAR_3, ngx_log_t *VAR_4)
{
    void *VAR_5;

    VAR_5 = FUNC_0(VAR_3);
    if (VAR_5 == ((void*)0)) {
        FUNC_2(VAR_1, VAR_4, VAR_2,
                      "malloc(%uz) failed", VAR_3);
    }

    FUNC_1(VAR_0, VAR_4, 0, "malloc: %p:%uz", VAR_5, VAR_3);

    return VAR_5;
}
