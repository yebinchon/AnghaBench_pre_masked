
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ s3; } ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(SSL *VAR_1, unsigned int VAR_2)
{
    VAR_1->s3.flags &= ~VAR_0;

    return 1;
}
