
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct TYPE_10__ {int * p; int * end; } ;
typedef TYPE_1__* STREAM ;
typedef int RD_BOOL ;
typedef int * PCCERT_CONTEXT ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int * FUNC_8 (int *,scalar_t__) ;
 int * FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int *,int ,int *,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int *,int *) ;
 int FUNC_15 (TYPE_1__*,int,int *,int *) ;
 int VAR_7 ;
 int FUNC_16 (char*,int) ;

__attribute__((used)) static RD_BOOL
FUNC_17(STREAM VAR_8, uint32 * VAR_9,
       uint8 ** VAR_10, uint8 * VAR_11, uint8 * VAR_12)
{
 uint32 VAR_13, VAR_14, VAR_15;
 uint32 VAR_16, VAR_17, VAR_18;
    PCCERT_CONTEXT VAR_19, VAR_20;
 BYTE *VAR_21;
 uint16 VAR_22, VAR_23;
 uint8 *VAR_24, *VAR_25;

 FUNC_3(VAR_8, *VAR_9);
 FUNC_3(VAR_8, VAR_13);
 if (VAR_13 == 0)
 {

  return VAR_0;
 }

 FUNC_3(VAR_8, VAR_14);
 FUNC_3(VAR_8, VAR_15);

 if (VAR_14 != VAR_4)
 {
  FUNC_1("random len %d, expected %d\n", VAR_14, VAR_4);
  return VAR_0;
 }

 FUNC_4(VAR_8, *VAR_10, VAR_14);


 VAR_25 = VAR_8->p + VAR_15;
 if (VAR_25 > VAR_8->end)
  return VAR_0;

 FUNC_3(VAR_8, VAR_18);
 if (VAR_18 & 1)
 {
  FUNC_0(("We're going for the RDP4-style encryption\n"));
  FUNC_5(VAR_8, 8);

  while (VAR_8->p < VAR_25)
  {
   FUNC_2(VAR_8, VAR_22);
   FUNC_2(VAR_8, VAR_23);

   VAR_24 = VAR_8->p + VAR_23;

   switch (VAR_22)
   {
    case 128:
     if (!FUNC_14(VAR_8, VAR_11, VAR_12))
      return VAR_0;
     FUNC_0(("Got Public key, RDP4-style\n"));

     break;

    case 129:
     if (!FUNC_15(VAR_8, VAR_23, VAR_11, VAR_12))
      return VAR_0;
     break;

    default:
     FUNC_16("crypt tag 0x%x\n", VAR_22);
   }

   VAR_8->p = VAR_24;
  }
 }
 else
 {
  uint32 VAR_26;

  FUNC_0(("We're going for the RDP5-style encryption\n"));
  FUNC_3(VAR_8, VAR_26);
  if (VAR_26 < 2)
  {
   FUNC_1("Server didn't send enough X509 certificates\n");
   return VAR_0;
  }
  for (; VAR_26 > 2; VAR_26--)
  {
   uint32 VAR_27;
            PCCERT_CONTEXT VAR_28;

   FUNC_0(("Ignored certs left: %d\n", VAR_26));
   FUNC_3(VAR_8, VAR_27);
   FUNC_0(("Ignored Certificate length is %d\n", VAR_27));
   VAR_28 = FUNC_8(VAR_8->p, VAR_27);
   FUNC_5(VAR_8, VAR_27);
   if (VAR_28 == ((void*)0))
   {
    FUNC_0(("got a bad cert: this will probably screw up the rest of the communication\n"));
   }





  }
  FUNC_3(VAR_8, VAR_16);
  FUNC_0(("CA Certificate length is %d\n", VAR_16));
  VAR_19 = FUNC_8(VAR_8->p, VAR_16);
  FUNC_5(VAR_8, VAR_16);
  if (((void*)0) == VAR_19)
  {
   FUNC_1("Couldn't load CA Certificate from server\n");
   return VAR_0;
  }
  FUNC_3(VAR_8, VAR_17);
  FUNC_0(("Certificate length is %d\n", VAR_17));
  VAR_20 = FUNC_8(VAR_8->p, VAR_17);
  FUNC_5(VAR_8, VAR_17);
  if (((void*)0) == VAR_20)
  {
   FUNC_6(VAR_19);
   FUNC_1("Couldn't load Certificate from server\n");
   return VAR_0;
  }
  if (!FUNC_10(VAR_20, VAR_19))
  {
   FUNC_6(VAR_20);
   FUNC_6(VAR_19);
   FUNC_1("Security error CA Certificate invalid\n");
   return VAR_0;
  }
  FUNC_6(VAR_19);
  FUNC_5(VAR_8, 16);
  VAR_21 = FUNC_9(VAR_20, &VAR_6);
  if (((void*)0) == VAR_21)
  {
   FUNC_0(("Didn't parse X509 correctly\n"));
   FUNC_6(VAR_20);
   return VAR_0;
  }
  FUNC_6(VAR_20);
  if ((VAR_6 < VAR_3) ||
      (VAR_6 > VAR_2))
  {
   FUNC_1("Bad server public key size (%u bits)\n",
         VAR_6 * 8);
   FUNC_11(VAR_21);
   return VAR_0;
  }
  if (FUNC_12(VAR_21, VAR_12, VAR_1,
        VAR_11, VAR_2) != 0)
  {
   FUNC_1("Problem extracting RSA exponent, modulus");
   FUNC_11(VAR_21);
   return VAR_0;
  }
  FUNC_11(VAR_21);
  return VAR_5;
 }
 return FUNC_13(VAR_8);
}
