
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NTSTATUS ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*,char*,int*) ;

int FUNC_3 (int VAR_4, char * VAR_5 [])
{
 NTSTATUS VAR_6 = 0;
 NTSTATUS VAR_7 = VAR_3;
 NTSTATUS VAR_8 = VAR_3;
 DWORD VAR_9 = VAR_1;
 DWORD VAR_10 = 0x40000;

 if (2 == VAR_4)
 {
  FUNC_2 (VAR_5[1], "%lx", & VAR_10);
 }

 FUNC_1 ("NT error codes 0x0-0x%lx that get translated *not* to ERROR_MR_MID_NOT_FOUND (317)\n\n", VAR_10);

 for ( VAR_6 = 0;
  VAR_6 < 4;
  VAR_6 ++)
 {
  FUNC_1 ("--- Severity %ld ---\n", VAR_6);

  for ( VAR_7 = VAR_3;
   VAR_7 <= VAR_10 ;
   VAR_7 ++)
  {
   VAR_8 = ((VAR_6 << 30) | VAR_7);
   VAR_9 = FUNC_0 (VAR_8);
   if (VAR_0 != VAR_9)
   {
    FUNC_1 ("0x%08lx => %ldL\n", VAR_8, VAR_9);
   }
  }
 }
 return VAR_2;
}
