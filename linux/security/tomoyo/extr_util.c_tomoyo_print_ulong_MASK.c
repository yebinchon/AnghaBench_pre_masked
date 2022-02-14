
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (char*,int const,char*,int const) ;

void FUNC_1(char *VAR_3, const int VAR_4,
   const unsigned long VAR_5, const u8 VAR_6)
{
 if (VAR_6 == VAR_0)
  FUNC_0(VAR_3, VAR_4, "%lu", VAR_5);
 else if (VAR_6 == VAR_2)
  FUNC_0(VAR_3, VAR_4, "0%lo", VAR_5);
 else if (VAR_6 == VAR_1)
  FUNC_0(VAR_3, VAR_4, "0x%lX", VAR_5);
 else
  FUNC_0(VAR_3, VAR_4, "type(%u)", VAR_6);
}
