
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwFlags; } ;
struct TYPE_5__ {TYPE_1__ dsbd; } ;
typedef TYPE_2__ IDirectSoundBufferImpl ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline BOOL FUNC_0(IDirectSoundBufferImpl *VAR_3)
{
    return VAR_3->dsbd.dwFlags & VAR_0 ? VAR_2 : VAR_1;
}
