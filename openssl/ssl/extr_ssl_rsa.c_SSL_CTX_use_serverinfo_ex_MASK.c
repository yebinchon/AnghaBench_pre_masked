
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* cert; } ;
struct TYPE_7__ {TYPE_1__* key; } ;
struct TYPE_6__ {unsigned char* serverinfo; size_t serverinfo_length; } ;
typedef TYPE_3__ SSL_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char* FUNC_0 (unsigned char*,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned char*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned int,unsigned char const*,size_t,TYPE_3__*) ;

int FUNC_4(SSL_CTX *VAR_5, unsigned int VAR_6,
                              const unsigned char *VAR_7,
                              size_t VAR_8)
{
    unsigned char *VAR_9;

    if (VAR_5 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == 0) {
        FUNC_1(VAR_3, VAR_2);
        return 0;
    }
    if (!FUNC_3(VAR_6, VAR_7, VAR_8,
                                   ((void*)0))) {
        FUNC_1(VAR_3, VAR_4);
        return 0;
    }
    if (VAR_5->cert->key == ((void*)0)) {
        FUNC_1(VAR_3, VAR_0);
        return 0;
    }
    VAR_9 = FUNC_0(VAR_5->cert->key->serverinfo,
                                     VAR_8);
    if (VAR_9 == ((void*)0)) {
        FUNC_1(VAR_3, VAR_1);
        return 0;
    }
    VAR_5->cert->key->serverinfo = VAR_9;
    FUNC_2(VAR_5->cert->key->serverinfo, VAR_7, VAR_8);
    VAR_5->cert->key->serverinfo_length = VAR_8;





    if (!FUNC_3(VAR_6, VAR_7, VAR_8,
                                   VAR_5)) {
        FUNC_1(VAR_3, VAR_4);
        return 0;
    }
    return 1;
}
