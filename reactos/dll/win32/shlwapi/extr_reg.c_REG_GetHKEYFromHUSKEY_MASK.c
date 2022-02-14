
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ HKCUkey; scalar_t__ HKLMkey; } ;
typedef TYPE_1__* LPSHUSKEY ;
typedef void* HUSKEY ;
typedef scalar_t__ HKEY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static HKEY FUNC_0(HUSKEY VAR_8, BOOL VAR_9)
{
        HKEY VAR_10 = VAR_8;
        LPSHUSKEY VAR_11 = VAR_8;

 if ((VAR_10 == VAR_0) ||
     (VAR_10 == VAR_1) ||
     (VAR_10 == VAR_2) ||
     (VAR_10 == VAR_3) ||
     (VAR_10 == VAR_4) ||
     (VAR_10 == VAR_5) ||




     (VAR_10 == VAR_6)) return VAR_10;
 if (VAR_9 == VAR_7) return VAR_11->HKCUkey;
 return VAR_11->HKLMkey;
}
