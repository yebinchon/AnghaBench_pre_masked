
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStyle; } ;
typedef TYPE_1__ UPDOWN_INFO ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static BOOL FUNC_1(const UPDOWN_INFO *VAR_2)
{
    return ( ((VAR_2->dwStyle & (VAR_0 | VAR_1)) != 0) &&
       FUNC_0(VAR_2) );
}
