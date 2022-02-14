
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ip_addr_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(const char *VAR_4, ip_addr_t *VAR_5, void *VAR_6)
{
  (void)VAR_6;

  if (VAR_5 == ((void*)0))
  {
    FUNC_0("DNS Fail!\n");
  }
  else
  {
    VAR_2[VAR_1] = *VAR_5;
    VAR_1++;
  }
  FUNC_1(VAR_3, VAR_0);
}
