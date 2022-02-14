
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int plaintext; int seq; int iv; int key; } ;
struct TYPE_5__ {unsigned char* data; unsigned char* input; size_t length; } ;
typedef TYPE_1__ SSL3_RECORD ;
typedef TYPE_2__ RECORD_DATA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int ,int *) ;
 unsigned char* FUNC_2 (scalar_t__) ;
 size_t VAR_1 ;
 int FUNC_3 (unsigned char*,unsigned char*,size_t) ;
 unsigned char* FUNC_4 (int ,size_t*) ;

__attribute__((used)) static int FUNC_5(SSL3_RECORD *VAR_2, RECORD_DATA *VAR_3, unsigned char **VAR_4,
                       unsigned char *VAR_5, size_t VAR_6, unsigned char *VAR_7)
{
    unsigned char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    size_t VAR_11;

    *VAR_4 = FUNC_1(VAR_3->key, ((void*)0));
    VAR_10 = FUNC_1(VAR_3->iv, ((void*)0));
    VAR_9 = FUNC_1(VAR_3->seq, ((void*)0));
    VAR_8 = FUNC_4(VAR_3->plaintext, &VAR_11);

    if (*VAR_4 == ((void*)0) || VAR_10 == ((void*)0) || VAR_9 == ((void*)0) || VAR_8 == ((void*)0))
        goto err;

    VAR_2->data = VAR_2->input = FUNC_2(VAR_11 + VAR_0);

    if (VAR_2->data == ((void*)0))
        goto err;

    VAR_2->length = VAR_11;
    FUNC_3(VAR_2->data, VAR_8, VAR_11);
    FUNC_0(VAR_8);
    FUNC_3(VAR_7, VAR_9, VAR_1);
    FUNC_0(VAR_9);
    FUNC_3(VAR_5, VAR_10, VAR_6);
    FUNC_0(VAR_10);

    return 1;
 err:
    FUNC_0(*VAR_4);
    *VAR_4 = ((void*)0);
    FUNC_0(VAR_10);
    FUNC_0(VAR_9);
    FUNC_0(VAR_8);
    return 0;
}
