
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
typedef int X509 ;
struct TYPE_14__ {int disconnect_reason; } ;
struct TYPE_13__ {int * p; int * end; } ;
typedef TYPE_1__* STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int *,int **,scalar_t__) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int *,scalar_t__) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int **,int **) ;
 int FUNC_11 (TYPE_2__*,int *) ;
 int VAR_3 ;
 int FUNC_12 (char*,int) ;

__attribute__((used)) static BOOL
FUNC_13(RDPCLIENT * VAR_4, STREAM VAR_5, uint32 * VAR_6,
       uint8 ** VAR_7, uint8 ** VAR_8, uint8 ** VAR_9)
{
 uint32 VAR_10, VAR_11, VAR_12;
 uint32 VAR_13, VAR_14, VAR_15;
 X509 *VAR_16, *VAR_17;
 uint16 VAR_18, VAR_19;
 uint8 *VAR_20, *VAR_21;

 FUNC_6(VAR_5, *VAR_6);
 FUNC_6(VAR_5, VAR_10);
 if (VAR_10 == 0)
  return VAR_0;
 FUNC_6(VAR_5, VAR_11);
 FUNC_6(VAR_5, VAR_12);

 if (VAR_11 != VAR_1)
 {
  FUNC_4("random len %d, expected %d\n", VAR_11, VAR_1);
  return VAR_0;
 }

 FUNC_7(VAR_5, *VAR_7, VAR_11);


 VAR_21 = VAR_5->p + VAR_12;
 if (VAR_21 > VAR_5->end)
  return VAR_0;

 FUNC_6(VAR_5, VAR_15);
 if (VAR_15 & 1)
 {
  FUNC_0(("We're going for the RDP4-style encryption\n"));
  FUNC_8(VAR_5, 8);

  while (VAR_5->p < VAR_21)
  {
   FUNC_5(VAR_5, VAR_18);
   FUNC_5(VAR_5, VAR_19);

   VAR_20 = VAR_5->p + VAR_19;

   switch (VAR_18)
   {
    case 128:
     if (!FUNC_10(VAR_4, VAR_5, VAR_8, VAR_9))
      return VAR_0;
     FUNC_0(("Got Public key, RDP4-style\n"));

     break;

    case 129:




     break;

    default:
     FUNC_12("crypt tag 0x%x\n", VAR_18);
   }

   VAR_5->p = VAR_20;
  }
 }
 else
 {
  uint32 VAR_22;

  FUNC_0(("We're going for the RDP5-style encryption\n"));
  FUNC_6(VAR_5, VAR_22);

  if (VAR_22 < 2)
  {
   FUNC_4("Server didn't send enough X509 certificates\n");
   VAR_4->disconnect_reason = 1798;
   return VAR_0;
  }

  for (; VAR_22 > 2; VAR_22--)
  {
   uint32 VAR_23;
   X509 *VAR_24;

   FUNC_0(("Ignored certs left: %d\n", VAR_22));

   FUNC_6(VAR_5, VAR_23);
   FUNC_0(("Ignored Certificate length is %d\n", VAR_23));
   VAR_24 = FUNC_3(((void*)0), &(VAR_5->p), VAR_23);

   if (VAR_24 == ((void*)0))
   {
    FUNC_0(("got a bad cert: this will probably screw up the rest of the communication\n"));
   }





  }
  FUNC_6(VAR_5, VAR_13);
  FUNC_0(("CA Certificate length is %d\n", VAR_13));
  VAR_16 = FUNC_3(((void*)0), &(VAR_5->p), VAR_13);


  if (((void*)0) == VAR_16)
  {
   FUNC_4("Couldn't load CA Certificate from server\n");
   VAR_4->disconnect_reason = 1798;
   return VAR_0;
  }
  FUNC_1(VAR_16);

  FUNC_6(VAR_5, VAR_14);
  FUNC_0(("Certificate length is %d\n", VAR_14));
  VAR_17 = FUNC_3(((void*)0), &(VAR_5->p), VAR_14);
  if (((void*)0) == VAR_17)
  {
   FUNC_4("Couldn't load Certificate from server\n");
   VAR_4->disconnect_reason = 1798;
   return VAR_0;
  }

  FUNC_8(VAR_5, 16);





  if (!FUNC_11(VAR_4, VAR_17))
  {
   FUNC_0(("Didn't parse X509 correctly\n"));
   FUNC_1(VAR_17);
   VAR_4->disconnect_reason = 1798;
   return VAR_0;
  }
  FUNC_1(VAR_17);
  return VAR_2;
 }
 return FUNC_9(VAR_5);
}
