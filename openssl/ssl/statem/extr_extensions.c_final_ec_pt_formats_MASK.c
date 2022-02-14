
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ecpointformats_len; unsigned char* peer_ecpointformats; scalar_t__ peer_ecpointformats_len; int * ecpointformats; } ;
struct TYPE_9__ {TYPE_1__* new_cipher; } ;
struct TYPE_10__ {TYPE_2__ tmp; } ;
struct TYPE_12__ {TYPE_4__ ext; TYPE_3__ s3; scalar_t__ server; } ;
struct TYPE_8__ {unsigned long algorithm_mkey; unsigned long algorithm_auth; } ;
typedef TYPE_5__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(SSL *VAR_6, unsigned int VAR_7, int VAR_8)
{
    unsigned long VAR_9, VAR_10;

    if (VAR_6->server)
        return 1;

    VAR_9 = VAR_6->s3.tmp.new_cipher->algorithm_mkey;
    VAR_10 = VAR_6->s3.tmp.new_cipher->algorithm_auth;






    if (VAR_6->ext.ecpointformats != ((void*)0)
            && VAR_6->ext.ecpointformats_len > 0
            && VAR_6->ext.peer_ecpointformats != ((void*)0)
            && VAR_6->ext.peer_ecpointformats_len > 0
            && ((VAR_9 & VAR_4) || (VAR_10 & VAR_3))) {

        size_t VAR_11;
        unsigned char *VAR_12 = VAR_6->ext.peer_ecpointformats;

        for (VAR_11 = 0; VAR_11 < VAR_6->ext.peer_ecpointformats_len; VAR_11++) {
            if (*VAR_12++ == VAR_5)
                break;
        }
        if (VAR_11 == VAR_6->ext.peer_ecpointformats_len) {
            FUNC_0(VAR_6, VAR_0, VAR_1,
                     VAR_2);
            return 0;
        }
    }

    return 1;
}
