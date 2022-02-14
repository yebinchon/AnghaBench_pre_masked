
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_4__ {scalar_t__ hello_retry_request; } ;
typedef TYPE_1__ SSL ;
typedef int PACKET ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ) ;

int FUNC_2(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7,
                              X509 *VAR_8, size_t VAR_9)
{
    if (FUNC_0(VAR_6) != 0) {
        FUNC_1(VAR_5, VAR_0,
                 VAR_2, VAR_4);
        return 0;
    }

    if (VAR_5->hello_retry_request != VAR_3) {
        FUNC_1(VAR_5, VAR_1,
                 VAR_2, VAR_4);
        return 0;
    }

    return 1;
}
