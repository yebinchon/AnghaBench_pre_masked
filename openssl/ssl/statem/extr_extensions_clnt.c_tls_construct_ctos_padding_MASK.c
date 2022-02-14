
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_10__ {int options; TYPE_3__* session; } ;
struct TYPE_8__ {scalar_t__ ticklen; } ;
struct TYPE_9__ {scalar_t__ ssl_version; TYPE_2__ ext; TYPE_1__* cipher; } ;
struct TYPE_7__ {int algorithm2; } ;
typedef TYPE_4__ SSL ;
typedef int EXT_RETURN ;
typedef int EVP_MD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,size_t*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,size_t,unsigned char**) ;
 int FUNC_5 (unsigned char*,int ,size_t) ;
 int * FUNC_6 (int ) ;

EXT_RETURN FUNC_7(SSL *VAR_12, WPACKET *VAR_13,
                                      unsigned int VAR_14, X509 *VAR_15,
                                      size_t VAR_16)
{
    unsigned char *VAR_17;
    size_t VAR_18;

    if ((VAR_12->options & VAR_9) == 0)
        return VAR_2;







    if (!FUNC_2(VAR_13, &VAR_18)) {
        FUNC_1(VAR_12, VAR_7, VAR_8,
                 VAR_0);
        return VAR_1;
    }





    if (VAR_12->session->ssl_version == VAR_10
            && VAR_12->session->ext.ticklen != 0
            && VAR_12->session->cipher != ((void*)0)) {
        const EVP_MD *VAR_19 = FUNC_6(VAR_12->session->cipher->algorithm2);

        if (VAR_19 != ((void*)0)) {




            VAR_18 += VAR_6 + VAR_12->session->ext.ticklen
                     + FUNC_0(VAR_19);
        }
    }

    if (VAR_18 > VAR_5 && VAR_18 < VAR_4) {

        VAR_18 = VAR_4 - VAR_18;







        if (VAR_18 > 4)
            VAR_18 -= 4;
        else
            VAR_18 = 1;

        if (!FUNC_3(VAR_13, VAR_11)
                || !FUNC_4(VAR_13, VAR_18, &VAR_17)) {
            FUNC_1(VAR_12, VAR_7, VAR_8,
                     VAR_0);
            return VAR_1;
        }
        FUNC_5(VAR_17, 0, VAR_18);
    }

    return VAR_3;
}
