
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (int *,int,char const*,char*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, const char *VAR_1, char *VAR_2)
{
 u8 *VAR_3 = (u8 *) FUNC_0(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, 0x10000,
      VAR_1, VAR_2);
 if (VAR_4)
  FUNC_2("no MAC address found for %s\n", VAR_1);
}
