
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int JsonTypeCategory ;
typedef int CoercionPathType ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;



 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

 int FUNC_0 (int) ;
 int VAR_15 ;


 int FUNC_1 (int const,int,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(Oid VAR_16,
      JsonTypeCategory *VAR_17,
      Oid *VAR_18)
{
 bool VAR_19;


 VAR_16 = FUNC_2(VAR_16);

 *VAR_18 = VAR_4;







 switch (VAR_16)
 {
  case 139:
   *VAR_17 = VAR_6;
   break;

  case 135:
  case 134:
  case 133:
  case 137:
  case 136:
  case 130:
   FUNC_3(VAR_16, VAR_18, &VAR_19);
   *VAR_17 = VAR_11;
   break;

  case 138:
   *VAR_17 = VAR_9;
   break;

  case 129:
   *VAR_17 = VAR_13;
   break;

  case 128:
   *VAR_17 = VAR_14;
   break;

  case 131:
  case 132:
   FUNC_3(VAR_16, VAR_18, &VAR_19);
   *VAR_17 = VAR_10;
   break;

  default:

   if (FUNC_0(FUNC_4(VAR_16)) || VAR_16 == VAR_0
    || VAR_16 == VAR_15)
    *VAR_17 = VAR_5;
   else if (FUNC_5(VAR_16))
    *VAR_17 = VAR_8;
   else
   {

    *VAR_17 = VAR_12;

    if (VAR_16 >= VAR_3)
    {
     Oid VAR_20;
     CoercionPathType VAR_21;

     VAR_21 = FUNC_1(131, VAR_16,
              VAR_1,
              &VAR_20);
     if (VAR_21 == VAR_2 && FUNC_0(VAR_20))
     {
      *VAR_17 = VAR_7;
      *VAR_18 = VAR_20;
     }
     else
     {

      FUNC_3(VAR_16, VAR_18, &VAR_19);
     }
    }
    else
    {

     FUNC_3(VAR_16, VAR_18, &VAR_19);
    }
   }
   break;
 }
}
