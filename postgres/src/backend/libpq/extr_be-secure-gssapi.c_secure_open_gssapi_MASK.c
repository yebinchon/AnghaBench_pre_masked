
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32 ;
typedef scalar_t__ ssize_t ;
struct TYPE_12__ {int length; char* value; } ;
typedef TYPE_2__ gss_buffer_desc ;
struct TYPE_13__ {TYPE_1__* gss; int sock; } ;
struct TYPE_11__ {int enc; int ctx; int name; } ;
typedef TYPE_3__ Port ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,int,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,size_t,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int*,int *,int ,TYPE_2__*,int ,int *,int *,TYPE_2__*,int *,int *,int *) ;
 int FUNC_6 (int*,TYPE_2__*) ;
 int FUNC_7 (int*,int ,int,int ,int,int *) ;
 int FUNC_8 (int) ;
 int VAR_20 ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int,int) ;
 int * VAR_21 ;
 scalar_t__ FUNC_12 (TYPE_3__*,int) ;
 scalar_t__ FUNC_13 (TYPE_3__*,int,int) ;
 int FUNC_14 (char*,int *,int) ;
 scalar_t__ FUNC_15 (int *) ;

ssize_t
FUNC_16(Port *VAR_22)
{
 bool VAR_23 = 0;
 OM_uint32 VAR_24,
    VAR_25;


 VAR_15 = VAR_16 = VAR_11 = VAR_13 = VAR_12 = 0;





 if (VAR_21 != ((void*)0) && FUNC_15(VAR_21) > 0)
  FUNC_14("KRB5_KTNAME", VAR_21, 1);

 while (1)
 {
  ssize_t VAR_26;
  gss_buffer_desc VAR_27,
     VAR_28 = VAR_2;





  VAR_26 = FUNC_12(VAR_22, sizeof(uint32));
  if (VAR_26 < 0)
   return VAR_26;




  VAR_27.length = FUNC_10(*(uint32 *) VAR_10);


  VAR_11 = 0;







  if (VAR_27.length > VAR_8)
   FUNC_2(VAR_1,
     (FUNC_3("oversize GSSAPI packet sent by the client (%zu > %d)",
       (size_t) VAR_27.length,
       VAR_8)));





  VAR_26 = FUNC_12(VAR_22, VAR_27.length);
  if (VAR_26 < 0)
   return VAR_26;

  VAR_27.value = VAR_10;


  VAR_24 = FUNC_5(&VAR_25, &VAR_22->gss->ctx,
            VAR_4, &VAR_27,
            VAR_3,
            &VAR_22->gss->name, ((void*)0), &VAR_28, ((void*)0),
            ((void*)0), ((void*)0));
  if (FUNC_0(VAR_24))
  {
   FUNC_11(VAR_0, FUNC_4("could not accept GSSAPI security context"),
       VAR_24, VAR_25);
   FUNC_6(&VAR_25, &VAR_28);
   return -1;
  }
  else if (!(VAR_24 & VAR_6))
  {




   VAR_23 = 1;
  }


  VAR_11 = 0;





  if (VAR_28.length != 0)
  {
   uint32 VAR_29 = FUNC_8(VAR_28.length);

   if (VAR_28.length > VAR_9 - sizeof(uint32))
    FUNC_2(VAR_1,
      (FUNC_3("server tried to send oversize GSSAPI packet (%zu > %zu)",
        (size_t) VAR_28.length,
        VAR_9 - sizeof(uint32))));

   FUNC_9(VAR_14, (char *) &VAR_29, sizeof(uint32));
   VAR_15 += sizeof(uint32);

   FUNC_9(VAR_14 + VAR_15, VAR_28.value, VAR_28.length);
   VAR_15 += VAR_28.length;

   while (VAR_16 != sizeof(uint32) + VAR_28.length)
   {
    VAR_26 = FUNC_13(VAR_22, VAR_14 + VAR_16, sizeof(uint32) + VAR_28.length - VAR_16);
    if (VAR_26 <= 0)
    {
     FUNC_1(VAR_7,
           VAR_19 | VAR_18,
           VAR_22->sock, 0, VAR_17);
     continue;
    }

    VAR_16 += VAR_26;
   }


   VAR_16 = VAR_15 = 0;

   FUNC_6(&VAR_25, &VAR_28);
  }





  if (VAR_23)
   break;
 }





 VAR_24 = FUNC_7(&VAR_25, VAR_22->gss->ctx, 1, VAR_5,
        VAR_9 - sizeof(uint32), &VAR_20);

 if (FUNC_0(VAR_24))
  FUNC_11(VAR_1, FUNC_4("GSSAPI size check error"),
      VAR_24, VAR_25);

 VAR_22->gss->enc = 1;

 return 0;
}
