
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int *,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,char*) ;

__attribute__((used)) static int FUNC_3(int VAR_1)
{
 int VAR_2 = VAR_1;

 VAR_1 = FUNC_0(VAR_2, ((void*)0), ((void*)0));
 if (VAR_1 == -1)
  FUNC_2(1, VAR_0, "accept");
 if (FUNC_1(VAR_2))
  FUNC_2(1, VAR_0, "close listen sock");

 return VAR_1;
}
