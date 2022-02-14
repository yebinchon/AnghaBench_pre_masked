
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_5__ {scalar_t__ objectSubId; void* objectId; void* classId; } ;
typedef void* Oid ;
typedef TYPE_1__ ObjectAddress ;
typedef int Bitmapset ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;



 char VAR_3 ;

 void* VAR_4 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int,int *) ;
 int * FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (void*,int *) ;
 char* FUNC_9 (TYPE_1__*) ;
 char* FUNC_10 (TYPE_1__*) ;
 char FUNC_11 (void*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*,int ,int,char*,int) ;
 scalar_t__ FUNC_14 () ;

__attribute__((used)) static bool
FUNC_15(Oid VAR_18,
        Bitmapset *VAR_19,
        Bitmapset *VAR_20,
        Bitmapset *VAR_21,
        uint32 VAR_22,
        bool VAR_23)
{
 ObjectAddress VAR_24;
 char *VAR_25;
 Bitmapset *VAR_26;
 int VAR_27;
 char VAR_28 = FUNC_11(VAR_18);
 bool VAR_29 = 1;






 if (FUNC_14() > 0)
 {
  if ((VAR_22 & (VAR_16 |
       VAR_14 |
       VAR_13)) != 0 &&
   FUNC_1(VAR_18))
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("SELinux: hardwired security policy violation")));

  if (VAR_28 == VAR_3)
   FUNC_5(VAR_1,
     (FUNC_6(VAR_0),
      FUNC_7("SELinux: hardwired security policy violation")));
 }




 VAR_24.classId = VAR_4;
 VAR_24.objectId = VAR_18;
 VAR_24.objectSubId = 0;
 VAR_25 = FUNC_10(&VAR_24);
 switch (VAR_28)
 {
  case 130:
  case 131:
   VAR_29 = FUNC_13(&VAR_24,
            VAR_7,
            VAR_22,
            VAR_25,
            VAR_23);
   break;

  case 129:
   FUNC_0((VAR_22 & ~VAR_15) == 0);

   if (VAR_22 & VAR_15)
    VAR_29 = FUNC_13(&VAR_24,
             VAR_6,
             VAR_12,
             VAR_25,
             VAR_23);
   break;

  case 128:
   VAR_29 = FUNC_13(&VAR_24,
            VAR_8,
            VAR_17,
            VAR_25,
            VAR_23);
   break;

  default:

   break;
 }
 FUNC_12(VAR_25);




 if (VAR_28 != 130 && VAR_28 != 131)
  return 1;




 VAR_19 = FUNC_8(VAR_18, VAR_19);
 VAR_20 = FUNC_8(VAR_18, VAR_20);
 VAR_21 = FUNC_8(VAR_18, VAR_21);
 VAR_26 = FUNC_4(VAR_19, FUNC_4(VAR_20, VAR_21));

 while ((VAR_27 = FUNC_2(VAR_26)) >= 0)
 {
  AttrNumber VAR_30;
  uint32 VAR_31 = 0;

  if (FUNC_3(VAR_27, VAR_19))
   VAR_31 |= VAR_10;
  if (FUNC_3(VAR_27, VAR_20))
  {
   if (VAR_22 & VAR_14)
    VAR_31 |= VAR_9;
  }
  if (FUNC_3(VAR_27, VAR_21))
  {
   if (VAR_22 & VAR_16)
    VAR_31 |= VAR_11;
  }
  if (VAR_31 == 0)
   continue;


  VAR_30 = VAR_27 + VAR_2;

  VAR_24.classId = VAR_4;
  VAR_24.objectId = VAR_18;
  VAR_24.objectSubId = VAR_30;
  VAR_25 = FUNC_9(&VAR_24);

  VAR_29 = FUNC_13(&VAR_24,
           VAR_5,
           VAR_31,
           VAR_25,
           VAR_23);
  FUNC_12(VAR_25);

  if (!VAR_29)
   return VAR_29;
 }
 return 1;
}
