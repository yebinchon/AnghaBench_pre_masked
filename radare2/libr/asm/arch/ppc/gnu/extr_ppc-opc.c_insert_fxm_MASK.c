
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppc_cpu_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static unsigned long
FUNC_1 (unsigned long VAR_2,
     long VAR_3,
     ppc_cpu_t VAR_4,
     const char **VAR_5)
{


  if ((VAR_2 & (1 << 20)) != 0)
    {
      if (VAR_3 == 0 || (VAR_3 & -VAR_3) != VAR_3)
 {
   *VAR_5 = FUNC_0("invalid mask field");
   VAR_3 = 0;
 }
  }





  else if (VAR_3 == 0) {
   ;






  } else if ((VAR_3 & -VAR_3) == VAR_3 && ((VAR_4 & VAR_1) != 0 || ((VAR_4 & VAR_0) != 0 && (VAR_2 & (0x3ff << 1)) == 19 << 1))) {
   VAR_2 |= 1 << 20;


  } else if ((VAR_2 & (0x3ff << 1)) == 19 << 1) {
   *VAR_5 = FUNC_0 ("ignoring invalid mfcr mask");
   VAR_3 = 0;
    }

  return VAR_2 | ((VAR_3 & 0xff) << 12);
}
