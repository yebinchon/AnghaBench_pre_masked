
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int options; int max_proto_version; int min_proto_version; } ;
struct TYPE_8__ {int version; int mask; int flags; } ;
typedef TYPE_1__ SSL_METHOD ;
typedef TYPE_2__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,int ,int ,int,int *) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,int,int ) ;

__attribute__((used)) static int FUNC_3(const SSL *VAR_6, const SSL_METHOD *VAR_7)
{
    int VAR_8 = VAR_7->version;

    if ((VAR_6->min_proto_version != 0 &&
         FUNC_2(VAR_6, VAR_8, VAR_6->min_proto_version) < 0) ||
        FUNC_0(VAR_6, VAR_5, 0, VAR_8, ((void*)0)) == 0)
        return VAR_4;

    if (VAR_6->max_proto_version != 0 &&
        FUNC_2(VAR_6, VAR_8, VAR_6->max_proto_version) > 0)
        return VAR_3;

    if ((VAR_6->options & VAR_7->mask) != 0)
        return VAR_2;
    if ((VAR_7->flags & VAR_0) != 0 && FUNC_1(VAR_6))
        return VAR_1;

    return 0;
}
