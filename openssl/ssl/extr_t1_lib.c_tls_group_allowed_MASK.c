
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int flags; int nid; int secbits; } ;
typedef TYPE_1__ TLS_GROUP_INFO ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,int ,void*) ;
 TYPE_1__* FUNC_1 (int) ;

int FUNC_2(SSL *VAR_2, uint16_t VAR_3, int VAR_4)
{
    const TLS_GROUP_INFO *VAR_5 = FUNC_1(VAR_3);
    unsigned char VAR_6[2];

    if (VAR_5 == ((void*)0))
        return 0;
    VAR_6[0] = VAR_3 >> 8;
    VAR_6[1] = VAR_3 & 0xff;
    return FUNC_0(VAR_2, VAR_4, VAR_5->secbits, VAR_5->nid, (void *)VAR_6);
}
