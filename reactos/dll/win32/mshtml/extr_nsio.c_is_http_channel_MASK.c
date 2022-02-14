
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* uri; } ;
typedef TYPE_2__ nsChannel ;
struct TYPE_4__ {scalar_t__ scheme; } ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline BOOL FUNC_0(nsChannel *VAR_2)
{
    return VAR_2->uri->scheme == VAR_0 || VAR_2->uri->scheme == VAR_1;
}
