
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,char*) ;
 int VAR_0 ;
 char** VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(int VAR_3)
{
    if (VAR_0 == (int)VAR_2)
 FUNC_0(VAR_3, "Do NOT create plugin directories%s", "");
    else
 FUNC_0(VAR_3, "Create plugin directories: %s",
       VAR_1[VAR_0]);
}
