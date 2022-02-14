
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int attributes; } ;
struct TYPE_5__ {TYPE_1__ req_info; } ;
typedef TYPE_2__ X509_REQ ;


 scalar_t__ FUNC_0 (int *,char const*,int,unsigned char const*,int) ;

int FUNC_1(X509_REQ *VAR_0,
                              const char *VAR_1, int VAR_2,
                              const unsigned char *VAR_3, int VAR_4)
{
    if (FUNC_0(&VAR_0->req_info.attributes, VAR_1,
                                VAR_2, VAR_3, VAR_4))
        return 1;
    return 0;
}
