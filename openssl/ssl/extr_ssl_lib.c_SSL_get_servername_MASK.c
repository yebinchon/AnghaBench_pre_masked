
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char const* hostname; } ;
struct TYPE_9__ {TYPE_3__ ext; TYPE_2__* session; scalar_t__ hit; } ;
struct TYPE_6__ {char const* hostname; } ;
struct TYPE_7__ {TYPE_1__ ext; } ;
typedef TYPE_4__ SSL ;


 int const VAR_0 ;

const char *FUNC_0(const SSL *VAR_1, const int VAR_2)
{
    if (VAR_2 != VAR_0)
        return ((void*)0);







    if (VAR_1->hit)
        return VAR_1->session->ext.hostname;
    return VAR_1->ext.hostname;
}
