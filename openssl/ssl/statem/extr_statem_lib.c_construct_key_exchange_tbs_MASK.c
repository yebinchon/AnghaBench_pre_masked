
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void const* client_random; void const* server_random; } ;
struct TYPE_6__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 unsigned char* FUNC_0 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (unsigned char*,void const*,size_t) ;

size_t FUNC_3(SSL *VAR_4, unsigned char **VAR_5,
                                  const void *VAR_6, size_t VAR_7)
{
    size_t VAR_8 = 2 * VAR_1 + VAR_7;
    unsigned char *VAR_9 = FUNC_0(VAR_8);

    if (VAR_9 == ((void*)0)) {
        FUNC_1(VAR_4, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }
    FUNC_2(VAR_9, VAR_4->s3.client_random, VAR_1);
    FUNC_2(VAR_9 + VAR_1, VAR_4->s3.server_random, VAR_1);

    FUNC_2(VAR_9 + VAR_1 * 2, VAR_6, VAR_7);

    *VAR_5 = VAR_9;
    return VAR_8;
}
