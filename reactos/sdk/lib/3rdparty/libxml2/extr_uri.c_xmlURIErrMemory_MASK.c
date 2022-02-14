
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int *,int *,int *,int ,int ,int ,int *,int ,char const*,int *,int *,int ,int ,char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_3)
{
    if (VAR_3)
        FUNC_0(((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), VAR_2,
                        VAR_1, VAR_0, ((void*)0), 0,
                        VAR_3, ((void*)0), ((void*)0), 0, 0,
                        "Memory allocation failed : %s\n", VAR_3);
    else
        FUNC_0(((void*)0), ((void*)0), ((void*)0),
                        ((void*)0), ((void*)0), VAR_2,
                        VAR_1, VAR_0, ((void*)0), 0,
                        ((void*)0), ((void*)0), ((void*)0), 0, 0,
                        "Memory allocation failed\n");
}
