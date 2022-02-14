
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_10__ {scalar_t__ early_data_ok; int * hostname; } ;
struct TYPE_11__ {int servername_done; TYPE_3__ ext; TYPE_2__* session; scalar_t__ hit; } ;
struct TYPE_8__ {int * hostname; } ;
struct TYPE_9__ {TYPE_1__ ext; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,unsigned int*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_4__*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_9 (int *) ;

int FUNC_10(SSL *VAR_8, PACKET *VAR_9, unsigned int VAR_10,
                               X509 *VAR_11, size_t VAR_12)
{
    unsigned int VAR_13;
    PACKET VAR_14, VAR_15;

    if (!FUNC_1(VAR_9, &VAR_14)

        || FUNC_5(&VAR_14) == 0) {
        FUNC_8(VAR_8, VAR_1, VAR_4,
                 VAR_5);
        return 0;
    }
    if (!FUNC_4(&VAR_14, &VAR_13)
        || VAR_13 != VAR_7
        || !FUNC_1(&VAR_14, &VAR_15)) {
        FUNC_8(VAR_8, VAR_1, VAR_4,
                 VAR_5);
        return 0;
    }

    if (!VAR_8->hit || FUNC_7(VAR_8)) {
        if (FUNC_5(&VAR_15) > VAR_6) {
            FUNC_8(VAR_8, VAR_3,
                     VAR_4,
                     VAR_5);
            return 0;
        }

        if (FUNC_2(&VAR_15)) {
            FUNC_8(VAR_8, VAR_3,
                     VAR_4,
                     VAR_5);
            return 0;
        }





        FUNC_0(VAR_8->ext.hostname);
        VAR_8->ext.hostname = ((void*)0);
        if (!FUNC_6(&VAR_15, &VAR_8->ext.hostname)) {
            FUNC_8(VAR_8, VAR_2, VAR_4,
                     VAR_0);
            return 0;
        }

        VAR_8->servername_done = 1;
    }
    if (VAR_8->hit) {




        VAR_8->servername_done = (VAR_8->session->ext.hostname != ((void*)0))
            && FUNC_3(&VAR_15, VAR_8->session->ext.hostname,
                            FUNC_9(VAR_8->session->ext.hostname));

        if (!VAR_8->servername_done && VAR_8->session->ext.hostname != ((void*)0))
            VAR_8->ext.early_data_ok = 0;
    }

    return 1;
}
