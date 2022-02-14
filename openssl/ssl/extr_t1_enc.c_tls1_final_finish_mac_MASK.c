
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int hash ;
struct TYPE_8__ {TYPE_1__* session; } ;
struct TYPE_7__ {int master_key_length; int master_key; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,unsigned char*,int,size_t*) ;
 int FUNC_3 (TYPE_2__*,char const*,size_t,unsigned char*,size_t,int *,int ,int *,int ,int *,int ,int ,int ,unsigned char*,size_t,int) ;

size_t FUNC_4(SSL *VAR_2, const char *VAR_3, size_t VAR_4,
                             unsigned char *VAR_5)
{
    size_t VAR_6;
    unsigned char VAR_7[VAR_0];

    if (!FUNC_1(VAR_2, 0)) {

        return 0;
    }

    if (!FUNC_2(VAR_2, VAR_7, sizeof(VAR_7), &VAR_6)) {

        return 0;
    }

    if (!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_7, VAR_6, ((void*)0), 0, ((void*)0), 0, ((void*)0), 0,
                  VAR_2->session->master_key, VAR_2->session->master_key_length,
                  VAR_5, VAR_1, 1)) {

        return 0;
    }
    FUNC_0(VAR_7, VAR_6);
    return VAR_1;
}
