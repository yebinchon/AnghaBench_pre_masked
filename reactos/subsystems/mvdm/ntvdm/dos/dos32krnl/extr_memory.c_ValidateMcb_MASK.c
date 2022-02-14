
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char BlockType; } ;
typedef TYPE_1__* PDOS_MCB ;
typedef int BOOLEAN ;



__attribute__((used)) static inline BOOLEAN FUNC_0(PDOS_MCB VAR_0)
{
    return (VAR_0->BlockType == 'M' || VAR_0->BlockType == 'Z');
}
