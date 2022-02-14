
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PGFunction ;
typedef int Oid ;
typedef int Datum ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;




 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_9 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_10(Datum VAR_5, Oid VAR_6, Datum VAR_7, Oid VAR_8,
    bool VAR_9, bool *VAR_10)
{
 PGFunction VAR_11;

 *VAR_10 = 0;

 switch (VAR_6)
 {
  case 132:
   switch (VAR_8)
   {
    case 132:
     VAR_11 = VAR_1;

     break;

    case 130:
     return FUNC_6(FUNC_0(VAR_5),
             FUNC_2(VAR_7),
             VAR_9);

    case 129:
     return FUNC_7(FUNC_0(VAR_5),
            FUNC_3(VAR_7),
            VAR_9);

    case 131:
    case 128:
     *VAR_10 = 1;
     return 0;

    default:
     FUNC_9(VAR_0, "unrecognized SQL/JSON datetime type oid: %u",
       VAR_8);
   }
   break;

  case 131:
   switch (VAR_8)
   {
    case 131:
     VAR_11 = VAR_2;

     break;

    case 128:
     VAR_5 = FUNC_5(VAR_5, VAR_9);
     VAR_11 = VAR_4;

     break;

    case 132:
    case 130:
    case 129:
     *VAR_10 = 1;
     return 0;

    default:
     FUNC_9(VAR_0, "unrecognized SQL/JSON datetime type oid: %u",
       VAR_8);
   }
   break;

  case 128:
   switch (VAR_8)
   {
    case 131:
     VAR_7 = FUNC_5(VAR_7, VAR_9);
     VAR_11 = VAR_4;

     break;

    case 128:
     VAR_11 = VAR_4;

     break;

    case 132:
    case 130:
    case 129:
     *VAR_10 = 1;
     return 0;

    default:
     FUNC_9(VAR_0, "unrecognized SQL/JSON datetime type oid: %u",
       VAR_8);
   }
   break;

  case 130:
   switch (VAR_8)
   {
    case 132:
     return -FUNC_6(FUNC_0(VAR_7),
              FUNC_2(VAR_5),
              VAR_9);

    case 130:
     VAR_11 = VAR_3;

     break;

    case 129:
     return FUNC_8(FUNC_2(VAR_5),
              FUNC_3(VAR_7),
              VAR_9);

    case 131:
    case 128:
     *VAR_10 = 1;
     return 0;

    default:
     FUNC_9(VAR_0, "unrecognized SQL/JSON datetime type oid: %u",
       VAR_8);
   }
   break;

  case 129:
   switch (VAR_8)
   {
    case 132:
     return -FUNC_7(FUNC_0(VAR_7),
             FUNC_3(VAR_5),
             VAR_9);

    case 130:
     return -FUNC_8(FUNC_2(VAR_7),
               FUNC_3(VAR_5),
               VAR_9);

    case 129:
     VAR_11 = VAR_3;

     break;

    case 131:
    case 128:
     *VAR_10 = 1;
     return 0;

    default:
     FUNC_9(VAR_0, "unrecognized SQL/JSON datetime type oid: %u",
       VAR_8);
   }
   break;

  default:
   FUNC_9(VAR_0, "unrecognized SQL/JSON datetime type oid: %u", VAR_6);
 }

 if (*VAR_10)
  return 0;

 return FUNC_1(FUNC_4(VAR_11, VAR_5, VAR_7));
}
