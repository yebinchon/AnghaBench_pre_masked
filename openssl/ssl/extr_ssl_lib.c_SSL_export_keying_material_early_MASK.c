
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ version; } ;
typedef TYPE_1__ SSL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,unsigned char*,size_t,char const*,size_t,unsigned char const*,size_t) ;

int FUNC_1(SSL *VAR_1, unsigned char *VAR_2, size_t VAR_3,
                                     const char *VAR_4, size_t VAR_5,
                                     const unsigned char *VAR_6,
                                     size_t VAR_7)
{
    if (VAR_1->version != VAR_0)
        return 0;

    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                                              VAR_6, VAR_7);
}
