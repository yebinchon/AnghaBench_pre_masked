
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_info {int * cmdbuff; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmdline_info VAR_2 ;
 struct cmdline_info VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct cmdline_info *
FUNC_0()
{
    if ((VAR_1 & VAR_0) == 0)
 return ((void*)0);
    if (VAR_2.cmdbuff != ((void*)0))
 return &VAR_2;
    if (VAR_4 && VAR_3.cmdbuff != ((void*)0))
 return &VAR_3;
    return ((void*)0);
}
