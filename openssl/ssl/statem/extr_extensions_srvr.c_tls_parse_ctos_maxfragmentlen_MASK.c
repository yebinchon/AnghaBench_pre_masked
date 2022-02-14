
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_8__ {TYPE_2__* session; scalar_t__ hit; } ;
struct TYPE_6__ {unsigned int max_fragment_len_mode; } ;
struct TYPE_7__ {TYPE_1__ ext; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int *,unsigned int*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int ,int ,int ) ;

int FUNC_4(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7,
                                  X509 *VAR_8, size_t VAR_9)
{
    unsigned int VAR_10;

    if (FUNC_2(VAR_6) != 1 || !FUNC_1(VAR_6, &VAR_10)) {
        FUNC_3(VAR_5, VAR_0, VAR_2,
                 VAR_3);
        return 0;
    }


    if (!FUNC_0(VAR_10)) {
        FUNC_3(VAR_5, VAR_1,
                 VAR_2,
                 VAR_4);
        return 0;
    }






    if (VAR_5->hit && VAR_5->session->ext.max_fragment_len_mode != VAR_10) {
        FUNC_3(VAR_5, VAR_1,
                 VAR_2,
                 VAR_4);
        return 0;
    }





    VAR_5->session->ext.max_fragment_len_mode = VAR_10;
    return 1;
}
