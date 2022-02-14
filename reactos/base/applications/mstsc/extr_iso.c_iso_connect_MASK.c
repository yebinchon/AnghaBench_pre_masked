
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int uint32 ;
typedef scalar_t__ uint16 ;
typedef int * STREAM ;
typedef void* RD_BOOL ;


 void* VAR_0 ;


 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;




 void* VAR_8 ;
 int FUNC_0 (char*,char*,char*,char*,int *) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int * FUNC_6 (scalar_t__*,int *) ;
 int FUNC_7 (char*,int) ;
 scalar_t__ FUNC_8 (int *,int) ;
 int VAR_17 ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;

RD_BOOL
FUNC_13(char *VAR_18, char *VAR_19, char *VAR_20, char *VAR_21,
     RD_BOOL VAR_22, uint32 * VAR_23)
{
 STREAM VAR_24;
 uint8 VAR_25;
 uint32 VAR_26;

 VAR_10 = VAR_8;

 VAR_26 = VAR_4;
      retry:
 *VAR_23 = VAR_3;
 VAR_25 = 0;

 if (!FUNC_9(VAR_18))
  return VAR_0;

 FUNC_7(VAR_19, VAR_26);

 VAR_24 = FUNC_6(&VAR_25, ((void*)0));
 if (VAR_24 == ((void*)0))
  return VAR_0;

 if (VAR_25 != VAR_1)
 {
  FUNC_1("expected CC, got 0x%x\n", VAR_25);
  FUNC_10();
  return VAR_0;
 }

 if (VAR_11 >= VAR_7 && FUNC_8(VAR_24, 8))
 {

  const char *VAR_27 = ((void*)0);

  uint8 VAR_28 = 0, VAR_29 = 0;
  uint16 VAR_30 = 0;
  uint32 VAR_31 = 0;

  FUNC_5(VAR_24, VAR_28);
  FUNC_5(VAR_24, VAR_29);
  FUNC_3(VAR_24, VAR_30);
  FUNC_4(VAR_24, VAR_31);

  if (VAR_28 == VAR_5)
  {
   RD_BOOL VAR_32 = VAR_0;

   switch (VAR_31)
   {
    case 128:
     VAR_27 = "SSL with user authentication required by server";
     break;
    case 130:
     VAR_27 = "SSL not allowed by server";
     VAR_32 = VAR_8;
     break;
    case 131:
     VAR_27 = "no valid authentication certificate on server";
     VAR_32 = VAR_8;
     break;
    case 132:
     VAR_27 = "inconsistent negotiation flags";
     break;
    case 129:
     VAR_27 = "SSL required by server";
     break;
    case 133:
     VAR_27 = "CredSSP required by server";
     break;
    default:
     VAR_27 = "unknown reason";
   }

   FUNC_10();

   if (VAR_32)
   {
    FUNC_2(VAR_17,
     "Failed to negotiate protocol, retrying with plain RDP.\n");
    VAR_10 = VAR_0;
    goto retry;
   }

   FUNC_2(VAR_17, "Failed to connect, %s.\n", VAR_27);
   return VAR_0;
  }

  if (VAR_28 != VAR_6)
  {
   FUNC_10();
   FUNC_1("Expected RDP_NEG_RSP, got type = 0x%x\n", VAR_28);
   return VAR_0;
  }


  if (VAR_31 == VAR_4)
  {
   FUNC_2(VAR_17, "SSL not compiled in.\n");

  }
  else if (VAR_31 == VAR_3)
  {
   FUNC_2(VAR_17, "Connection established using plain RDP.\n");
  }
  else if (VAR_31 != VAR_3)
  {
   FUNC_10();
   FUNC_1("Unexpected protocol in negotiation response, got data = 0x%x.\n",
         VAR_31);
   return VAR_0;
  }
  if (VAR_30 || VAR_29) {}

  *VAR_23 = VAR_31;
 }
 return VAR_8;
}
