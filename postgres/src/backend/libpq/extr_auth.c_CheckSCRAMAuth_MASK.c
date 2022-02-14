
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {char* data; int len; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (TYPE_1__*,char) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (void*,char const*,int,char**,int*,char**) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 void* FUNC_11 (int *,char const*,char*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (TYPE_1__*,int ) ;
 char* FUNC_14 (TYPE_1__*,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 char* FUNC_17 (TYPE_1__*) ;
 int FUNC_18 () ;
 int FUNC_19 (int *,int ,char*,int) ;

__attribute__((used)) static int
FUNC_20(Port *VAR_16, char *VAR_17, char **VAR_18)
{
 StringInfoData VAR_19;
 int VAR_20;
 StringInfoData VAR_21;
 void *VAR_22 = ((void*)0);
 char *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 const char *VAR_25;
 int VAR_26;
 int VAR_27;
 bool VAR_28;
 if (FUNC_1(VAR_9) < 3)
  FUNC_4(VAR_8,
    (FUNC_5(VAR_5),
     FUNC_6("SASL authentication is not supported in protocol version 2")));





 FUNC_7(&VAR_19);

 FUNC_10(VAR_16, &VAR_19);

 FUNC_2(&VAR_19, '\0');

 FUNC_19(VAR_16, VAR_0, VAR_19.data, VAR_19.len);
 FUNC_8(VAR_19.data);







 VAR_28 = 1;
 do
 {
  FUNC_18();
  VAR_20 = FUNC_12();
  if (VAR_20 != 'p')
  {

   if (VAR_20 != VAR_4)
   {
    FUNC_4(VAR_7,
      (FUNC_5(VAR_6),
       FUNC_6("expected SASL response, got message type %d",
        VAR_20)));
   }
   else
    return VAR_13;
  }


  FUNC_7(&VAR_21);
  if (FUNC_13(&VAR_21, VAR_10))
  {

   FUNC_8(VAR_21.data);
   return VAR_14;
  }

  FUNC_3(VAR_3, "processing received SASL response of length %d", VAR_21.len);







  if (VAR_28)
  {
   const char *VAR_29;

   VAR_29 = FUNC_17(&VAR_21);
   VAR_22 = FUNC_11(VAR_16, VAR_29, VAR_17);

   VAR_26 = FUNC_16(&VAR_21, 4);
   if (VAR_26 == -1)
    VAR_25 = ((void*)0);
   else
    VAR_25 = FUNC_14(&VAR_21, VAR_26);

   VAR_28 = 0;
  }
  else
  {
   VAR_26 = VAR_21.len;
   VAR_25 = FUNC_14(&VAR_21, VAR_21.len);
  }
  FUNC_15(&VAR_21);





  FUNC_0(VAR_25 == ((void*)0) || VAR_25[VAR_26] == '\0');





  VAR_27 = FUNC_9(VAR_22, VAR_25, VAR_26,
           &VAR_23, &VAR_24,
           VAR_18);


  FUNC_8(VAR_21.data);

  if (VAR_23)
  {



   FUNC_3(VAR_3, "sending SASL challenge of length %u", VAR_24);

   if (VAR_27 == VAR_12)
    FUNC_19(VAR_16, VAR_2, VAR_23, VAR_24);
   else
    FUNC_19(VAR_16, VAR_1, VAR_23, VAR_24);

   FUNC_8(VAR_23);
  }
 } while (VAR_27 == VAR_11);


 if (VAR_27 != VAR_12)
 {
  return VAR_14;
 }

 return VAR_15;
}
