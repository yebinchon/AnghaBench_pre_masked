
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef int JsonbTypeCategory ;
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
 int VAR_15 ;


 int FUNC_0 (int) ;
 int VAR_16 ;


 int FUNC_1 (int const,int,int ,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int*,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(Oid VAR_17,
       JsonbTypeCategory *VAR_18,
       Oid *VAR_19)
{
 bool VAR_20;


 VAR_17 = FUNC_2(VAR_17);

 *VAR_19 = VAR_4;
 switch (VAR_17)
 {
  case 139:
   *VAR_18 = VAR_6;
   break;

  case 135:
  case 134:
  case 133:
  case 137:
  case 136:
  case 130:
   FUNC_3(VAR_17, VAR_19, &VAR_20);
   *VAR_18 = VAR_12;
   break;

  case 138:
   *VAR_18 = VAR_8;
   break;

  case 129:
   *VAR_18 = VAR_14;
   break;

  case 128:
   *VAR_18 = VAR_15;
   break;

  case 132:
   *VAR_18 = VAR_10;
   break;

  case 131:
   *VAR_18 = VAR_9;
   break;

  default:

   if (FUNC_0(FUNC_4(VAR_17)) || VAR_17 == VAR_0
    || VAR_17 == VAR_16)
    *VAR_18 = VAR_5;
   else if (FUNC_5(VAR_17))
    *VAR_18 = VAR_7;
   else
   {

    *VAR_18 = VAR_13;





    if (VAR_17 >= VAR_3)
    {
     Oid VAR_21;
     CoercionPathType VAR_22;

     VAR_22 = FUNC_1(131, VAR_17,
              VAR_1, &VAR_21);
     if (VAR_22 == VAR_2 && FUNC_0(VAR_21))
     {
      *VAR_18 = VAR_11;
      *VAR_19 = VAR_21;
     }
     else
     {

      FUNC_3(VAR_17, VAR_19, &VAR_20);
     }
    }
    else
    {

     FUNC_3(VAR_17, VAR_19, &VAR_20);
    }
    break;
   }
 }
}
