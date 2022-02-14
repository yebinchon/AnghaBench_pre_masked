
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_7__ {int status_expected; } ;
struct TYPE_8__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int *) ;

EXT_RETURN FUNC_6(SSL *VAR_8, WPACKET *VAR_9,
                                             unsigned int VAR_10, X509 *VAR_11,
                                             size_t VAR_12)
{

    if (VAR_10 == VAR_5)
        return VAR_2;

    if (!VAR_8->ext.status_expected)
        return VAR_2;

    if (FUNC_0(VAR_8) && VAR_12 != 0)
        return VAR_2;

    if (!FUNC_3(VAR_9, VAR_7)
            || !FUNC_4(VAR_9)) {
        FUNC_1(VAR_8, VAR_4,
                 VAR_6, VAR_0);
        return VAR_1;
    }






    if (FUNC_0(VAR_8) && !FUNC_5(VAR_8, VAR_9)) {

       return VAR_1;
    }
    if (!FUNC_2(VAR_9)) {
        FUNC_1(VAR_8, VAR_4,
                 VAR_6, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
