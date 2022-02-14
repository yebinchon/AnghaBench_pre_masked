
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_10__ {TYPE_3__* new_cipher; } ;
struct TYPE_11__ {TYPE_1__ tmp; } ;
struct TYPE_13__ {int server; TYPE_2__ s3; } ;
struct TYPE_12__ {unsigned long id; } ;
typedef TYPE_4__ SSL ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_4__*,scalar_t__ const**,size_t*) ;
 int FUNC_1 (TYPE_4__*,scalar_t__ const**,size_t*) ;
 int FUNC_2 (scalar_t__,scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,scalar_t__,int ) ;

int FUNC_5(SSL *VAR_5, uint16_t VAR_6, int VAR_7)
    {
    const uint16_t *VAR_8;
    size_t VAR_9;

    if (VAR_6 == 0)
        return 0;


    if (FUNC_3(VAR_5) && VAR_5->s3.tmp.new_cipher != ((void*)0)) {
        unsigned long VAR_10 = VAR_5->s3.tmp.new_cipher->id;

        if (VAR_10 == VAR_1) {
            if (VAR_6 != VAR_3)
                return 0;
        } else if (VAR_10 == VAR_2) {
            if (VAR_6 != VAR_4)
                return 0;
        } else {

            return 0;
        }
    }

    if (VAR_7) {

        FUNC_1(VAR_5, &VAR_8, &VAR_9);
        if (!FUNC_2(VAR_6, VAR_8, VAR_9))
            return 0;
    }

    if (!FUNC_4(VAR_5, VAR_6, VAR_0))
        return 0;


    if (!VAR_5->server)
        return 1;


    FUNC_0(VAR_5, &VAR_8, &VAR_9);







    if (VAR_9 == 0)
            return 1;
    return FUNC_2(VAR_6, VAR_8, VAR_9);
}
