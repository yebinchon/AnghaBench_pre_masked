
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwFileAttributes; } ;
typedef TYPE_1__ WIN32_FIND_DATA ;


 int VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(WIN32_FIND_DATA *VAR_1)
{
 return !!(VAR_1->dwFileAttributes & VAR_0);
}
