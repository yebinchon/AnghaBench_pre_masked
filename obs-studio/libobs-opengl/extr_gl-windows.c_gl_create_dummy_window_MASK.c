
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HWND ;


 int FUNC_0 (int ,int ,char*,int ,int ,int ,int,int,int *,int *,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static inline HWND FUNC_3(void)
{
 HWND VAR_3 = FUNC_0(0, VAR_2, "Dummy GL Window",
        VAR_1, 0, 0, 2, 2, ((void*)0), ((void*)0),
        FUNC_1(((void*)0)), ((void*)0));
 if (!VAR_3)
  FUNC_2(VAR_0, "Could not create dummy context window");

 return VAR_3;
}
