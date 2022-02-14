
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ ssize_t ;
struct TYPE_12__ {int length; char* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_13__ {int allow_ssl_try; int gssenc; int gctx; int gcred; int gtarg_nam; int errorMessage; } ;
typedef scalar_t__ PostgresPollingStatusType ;
typedef TYPE_2__ PGconn ;
typedef int OM_uint32 ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_1 (int *,int ,int *,int ,int ,int ,int ,int ,TYPE_1__*,int *,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int,scalar_t__*) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ,int,int ,int,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int VAR_22 ;
 int FUNC_8 (scalar_t__,char*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_13 (int *,char*,...) ;

PostgresPollingStatusType
FUNC_14(PGconn *VAR_23)
{
 static int VAR_24 = 1;
 ssize_t VAR_25;
 OM_uint32 VAR_26,
    VAR_27;
 uint32 VAR_28;
 PostgresPollingStatusType VAR_29;
 gss_buffer_desc VAR_30 = VAR_1,
    VAR_31 = VAR_1;


 if (VAR_24)
 {
  VAR_18 = VAR_19 = VAR_14 = VAR_13 = VAR_16 = VAR_15 = 0;
  VAR_24 = 0;
 }




 if (VAR_18)
 {
  ssize_t VAR_32 = VAR_18 - VAR_19;

  VAR_25 = FUNC_12(VAR_23, VAR_17 + VAR_19, VAR_32);
  if (VAR_25 < 0 && VAR_21 == VAR_0)
   return VAR_9;

  if (VAR_25 != VAR_32)
  {
   VAR_19 += VAR_32;
   return VAR_9;
  }

  VAR_18 = VAR_19 = 0;
 }






 if (VAR_23->gctx)
 {



  if (VAR_13 < sizeof(uint32))
  {

   VAR_29 = FUNC_2(VAR_23, VAR_12 + VAR_13, sizeof(uint32) - VAR_13, &VAR_25);
   if (VAR_29 != VAR_7)
    return VAR_29;

   VAR_13 += VAR_25;

   if (VAR_13 < sizeof(uint32))
    return VAR_8;
  }
  if (VAR_12[0] == 'E')
  {






   VAR_29 = FUNC_2(VAR_23, VAR_12 + VAR_13, VAR_10 - VAR_13 - 1, &VAR_25);
   if (VAR_29 != VAR_7)
    return VAR_29;

   VAR_13 += VAR_25;

   FUNC_13(&VAR_23->errorMessage, "%s\n", VAR_12 + 1);

   return VAR_6;
  }







  VAR_30.length = FUNC_9(*(uint32 *) VAR_12);
  if (VAR_30.length > VAR_10 - sizeof(uint32))
  {
   FUNC_13(&VAR_23->errorMessage,
         FUNC_7("oversize GSSAPI packet sent by the server (%zu > %zu)\n"),
         (size_t) VAR_30.length,
         VAR_10 - sizeof(uint32));
   return VAR_6;
  }





  VAR_29 = FUNC_2(VAR_23, VAR_12 + VAR_13,
        VAR_30.length - (VAR_13 - sizeof(uint32)), &VAR_25);
  if (VAR_29 != VAR_7)
   return VAR_29;

  VAR_13 += VAR_25;





  if (VAR_13 - sizeof(uint32) < VAR_30.length)
   return VAR_8;

  VAR_30.value = VAR_12 + sizeof(uint32);
 }


 VAR_25 = FUNC_11(VAR_23);
 if (VAR_25 != VAR_20)
  return VAR_6;





 VAR_26 = FUNC_1(&VAR_27, VAR_23->gcred, &VAR_23->gctx,
         VAR_23->gtarg_nam, VAR_3,
         VAR_5, 0, 0, &VAR_30, ((void*)0),
         &VAR_31, ((void*)0), ((void*)0));


 VAR_14 = VAR_13 = 0;

 if (FUNC_0(VAR_26))
 {
  FUNC_10(FUNC_7("could not initiate GSSAPI security context"),
      VAR_23, VAR_26, VAR_27);
  return VAR_6;
 }
 else if (VAR_31.length == 0)
 {







  FUNC_4(&VAR_27, &VAR_23->gcred);
  VAR_23->gcred = VAR_2;
  VAR_23->gssenc = 1;





  VAR_26 = FUNC_5(&VAR_27, VAR_23->gctx, 1, VAR_4,
         VAR_11 - sizeof(uint32), &VAR_22);

  if (FUNC_0(VAR_26))
   FUNC_10(FUNC_7("GSSAPI size check error"), VAR_23,
       VAR_26, VAR_27);

  return VAR_7;
 }


 if (VAR_31.length > VAR_11 - sizeof(uint32))
 {
  FUNC_10(FUNC_7("GSSAPI context establishment error"),
      VAR_23, VAR_26, VAR_27);
  return VAR_6;
 }


 VAR_28 = FUNC_6(VAR_31.length);

 FUNC_8(VAR_17, (char *) &VAR_28, sizeof(uint32));
 VAR_18 += sizeof(uint32);

 FUNC_8(VAR_17 + VAR_18, VAR_31.value, VAR_31.length);
 VAR_18 += VAR_31.length;

 FUNC_3(&VAR_27, &VAR_31);


 return VAR_9;
}
