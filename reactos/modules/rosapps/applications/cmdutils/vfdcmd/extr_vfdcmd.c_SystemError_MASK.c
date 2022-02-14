
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int msg ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *,int ,int ,char*,int,int *) ;
 int FUNC_1 (char*,char*,int ,int ) ;

const char *FUNC_2(DWORD VAR_2)
{
 static char VAR_3[256];

 if (!FUNC_0(
  VAR_0 |
  VAR_1,
  ((void*)0), VAR_2, 0, VAR_3, sizeof(VAR_3), ((void*)0))) {

  FUNC_1(VAR_3, "Unknown system error %lu (0x%08x)\n", VAR_2, VAR_2);



 }

 return VAR_3;
}
