
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_9__ {int * hostname; } ;
struct TYPE_10__ {TYPE_2__* session; TYPE_3__ ext; int hit; } ;
struct TYPE_7__ {int * hostname; } ;
struct TYPE_8__ {TYPE_1__ ext; } ;
typedef TYPE_4__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;

int FUNC_3(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7,
                               X509 *VAR_8, size_t VAR_9)
{
    if (VAR_5->ext.hostname == ((void*)0)) {
        FUNC_2(VAR_5, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }

    if (FUNC_1(VAR_6) > 0) {
        FUNC_2(VAR_5, VAR_1, VAR_3,
                 VAR_4);
        return 0;
    }

    if (!VAR_5->hit) {
        if (VAR_5->session->ext.hostname != ((void*)0)) {
            FUNC_2(VAR_5, VAR_2, VAR_3,
                     VAR_0);
            return 0;
        }
        VAR_5->session->ext.hostname = FUNC_0(VAR_5->ext.hostname);
        if (VAR_5->session->ext.hostname == ((void*)0)) {
            FUNC_2(VAR_5, VAR_2, VAR_3,
                     VAR_0);
            return 0;
        }
    }

    return 1;
}
