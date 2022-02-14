
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int available; } ;
struct TYPE_7__ {TYPE_1__ br; } ;
struct TYPE_8__ {TYPE_2__ uncomp; } ;
typedef TYPE_3__ ar_archive_rar ;


 scalar_t__ FUNC_0 (TYPE_3__*,int) ;

__attribute__((used)) static inline bool FUNC_1(ar_archive_rar *VAR_0, int VAR_1)
{
    return VAR_1 <= VAR_0->uncomp.br.available || FUNC_0(VAR_0, VAR_1);
}
