
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int mdpth; TYPE_1__* mtlsa; } ;
struct TYPE_8__ {scalar_t__ verify_result; TYPE_2__ dane; } ;
struct TYPE_6__ {unsigned char* data; size_t dlen; int mtype; int selector; int usage; } ;
typedef TYPE_2__ SSL_DANE ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;

int FUNC_1(SSL *VAR_1, uint8_t *VAR_2, uint8_t *VAR_3,
                       uint8_t *VAR_4, unsigned const char **VAR_5, size_t *VAR_6)
{
    SSL_DANE *VAR_7 = &VAR_1->dane;

    if (!FUNC_0(VAR_7) || VAR_1->verify_result != VAR_0)
        return -1;
    if (VAR_7->mtlsa) {
        if (VAR_2)
            *VAR_2 = VAR_7->mtlsa->usage;
        if (VAR_3)
            *VAR_3 = VAR_7->mtlsa->selector;
        if (VAR_4)
            *VAR_4 = VAR_7->mtlsa->mtype;
        if (VAR_5)
            *VAR_5 = VAR_7->mtlsa->data;
        if (VAR_6)
            *VAR_6 = VAR_7->mtlsa->dlen;
    }
    return VAR_7->mdpth;
}
