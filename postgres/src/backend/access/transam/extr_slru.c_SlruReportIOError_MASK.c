
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TransactionId ;
typedef int SlruCtl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;



 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*,...) ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_7(SlruCtl VAR_7, int VAR_8, TransactionId VAR_9)
{
 int VAR_10 = VAR_8 / VAR_3;
 int VAR_11 = VAR_8 % VAR_3;
 int VAR_12 = VAR_11 * VAR_0;
 char VAR_13[VAR_2];

 FUNC_0(VAR_7, VAR_13, VAR_10);
 VAR_4 = VAR_6;
 switch (VAR_5)
 {
  case 131:
   FUNC_3(VAR_1,
     (FUNC_4(),
      FUNC_6("could not access status of transaction %u", VAR_9),
      FUNC_5("Could not open file \"%s\": %m.", VAR_13)));
   break;
  case 129:
   FUNC_3(VAR_1,
     (FUNC_4(),
      FUNC_6("could not access status of transaction %u", VAR_9),
      FUNC_5("Could not seek in file \"%s\" to offset %u: %m.",
          VAR_13, VAR_12)));
   break;
  case 130:
   if (VAR_4)
    FUNC_3(VAR_1,
      (FUNC_4(),
       FUNC_6("could not access status of transaction %u", VAR_9),
       FUNC_5("Could not read from file \"%s\" at offset %u: %m.",
           VAR_13, VAR_12)));
   else
    FUNC_3(VAR_1,
      (FUNC_6("could not access status of transaction %u", VAR_9),
       FUNC_5("Could not read from file \"%s\" at offset %u: read too few bytes.", VAR_13, VAR_12)));
   break;
  case 128:
   if (VAR_4)
    FUNC_3(VAR_1,
      (FUNC_4(),
       FUNC_6("could not access status of transaction %u", VAR_9),
       FUNC_5("Could not write to file \"%s\" at offset %u: %m.",
           VAR_13, VAR_12)));
   else
    FUNC_3(VAR_1,
      (FUNC_6("could not access status of transaction %u", VAR_9),
       FUNC_5("Could not write to file \"%s\" at offset %u: wrote too few bytes.",
           VAR_13, VAR_12)));
   break;
  case 132:
   FUNC_3(FUNC_1(VAR_1),
     (FUNC_4(),
      FUNC_6("could not access status of transaction %u", VAR_9),
      FUNC_5("Could not fsync file \"%s\": %m.",
          VAR_13)));
   break;
  case 133:
   FUNC_3(VAR_1,
     (FUNC_4(),
      FUNC_6("could not access status of transaction %u", VAR_9),
      FUNC_5("Could not close file \"%s\": %m.",
          VAR_13)));
   break;
  default:

   FUNC_2(VAR_1, "unrecognized SimpleLru error cause: %d",
     (int) VAR_5);
   break;
 }
}
