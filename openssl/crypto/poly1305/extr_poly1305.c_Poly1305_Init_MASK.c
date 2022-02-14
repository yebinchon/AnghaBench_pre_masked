
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int emit; int blocks; } ;
struct TYPE_5__ {scalar_t__ num; TYPE_1__ func; int opaque; void** nonce; } ;
typedef TYPE_2__ POLY1305 ;


 void* FUNC_0 (unsigned char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned char const*,...) ;

void FUNC_2(POLY1305 *VAR_2, const unsigned char VAR_3[32])
{
    VAR_2->nonce[0] = FUNC_0(&VAR_3[16]);
    VAR_2->nonce[1] = FUNC_0(&VAR_3[20]);
    VAR_2->nonce[2] = FUNC_0(&VAR_3[24]);
    VAR_2->nonce[3] = FUNC_0(&VAR_3[28]);


    FUNC_1(VAR_2->opaque, VAR_3);
    VAR_2->num = 0;

}
