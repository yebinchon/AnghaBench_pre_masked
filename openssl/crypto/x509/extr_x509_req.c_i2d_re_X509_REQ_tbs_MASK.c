
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int modified; } ;
struct TYPE_7__ {TYPE_1__ enc; } ;
struct TYPE_6__ {TYPE_4__ req_info; } ;
typedef TYPE_2__ X509_REQ ;


 int FUNC_0 (TYPE_4__*,unsigned char**) ;

int FUNC_1(X509_REQ *VAR_0, unsigned char **VAR_1)
{
    VAR_0->req_info.enc.modified = 1;
    return FUNC_0(&VAR_0->req_info, VAR_1);
}
