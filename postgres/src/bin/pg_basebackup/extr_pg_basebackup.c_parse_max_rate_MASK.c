
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64 ;
typedef scalar_t__ uint32 ;
typedef int int32 ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char*,...) ;
 double FUNC_3 (char*,char**) ;

__attribute__((used)) static int32
FUNC_4(char *VAR_3)
{
 double VAR_4;
 char *VAR_5;
 char *VAR_6 = ((void*)0);

 VAR_2 = 0;
 VAR_4 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_3 == VAR_5)
 {
  FUNC_2("transfer rate \"%s\" is not a valid value", VAR_3);
  FUNC_0(1);
 }
 if (VAR_2 != 0)
 {
  FUNC_2("invalid transfer rate \"%s\": %m", VAR_3);
  FUNC_0(1);
 }

 if (VAR_4 <= 0)
 {



  FUNC_2("transfer rate must be greater than zero");
  FUNC_0(1);
 }





 while (*VAR_5 != '\0' && FUNC_1((unsigned char) *VAR_5))
  VAR_5++;

 if (*VAR_5 != '\0')
 {
  VAR_6 = VAR_5;
  if (*VAR_5 == 'k')
  {

   VAR_5++;
  }
  else if (*VAR_5 == 'M')
  {
   VAR_5++;
   VAR_4 *= 1024.0;
  }
 }


 while (*VAR_5 != '\0' && FUNC_1((unsigned char) *VAR_5))
  VAR_5++;

 if (*VAR_5 != '\0')
 {
  FUNC_2("invalid --max-rate unit: \"%s\"", VAR_6);
  FUNC_0(1);
 }


 if ((uint64) VAR_4 != (uint64) ((uint32) VAR_4))
 {
  FUNC_2("transfer rate \"%s\" exceeds integer range", VAR_3);
  FUNC_0(1);
 }





 if (VAR_4 < VAR_0 || VAR_4 > VAR_1)
 {
  FUNC_2("transfer rate \"%s\" is out of range", VAR_3);
  FUNC_0(1);
 }

 return (int32) VAR_4;
}
