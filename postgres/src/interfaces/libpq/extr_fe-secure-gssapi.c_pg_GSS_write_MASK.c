
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint32 ;
typedef scalar_t__ ssize_t ;
struct TYPE_10__ {size_t length; char* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_11__ {int errorMessage; int gctx; } ;
typedef TYPE_2__ PGconn ;
typedef int OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,int,int ,TYPE_1__*,int*,TYPE_1__*) ;
 char FUNC_2 (size_t) ;
 int FUNC_3 (char*) ;
 size_t VAR_11 ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (int ,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_7 (int *,int ,...) ;

ssize_t
FUNC_8(PGconn *VAR_12, const void *VAR_13, size_t VAR_14)
{
 gss_buffer_desc VAR_15,
    VAR_16 = VAR_3;
 OM_uint32 VAR_17,
    VAR_18;
 ssize_t VAR_19 = -1;
 size_t VAR_20 = VAR_14;
 size_t VAR_21 = 0;







 while (VAR_20 || VAR_8)
 {
  int VAR_22 = 0;
  uint32 VAR_23;






  if (VAR_8)
  {
   ssize_t VAR_24;
   ssize_t VAR_25 = VAR_8 - VAR_9;

   VAR_24 = FUNC_6(VAR_12, VAR_7 + VAR_9, VAR_25);
   if (VAR_24 < 0)
   {
    if (VAR_21 != 0 && (VAR_10 == VAR_0 || VAR_10 == VAR_2 || VAR_10 == VAR_1))
     return VAR_21;
    else
     return VAR_24;
   }





   if (VAR_24 != VAR_25)
   {
    VAR_9 += VAR_24;
    continue;
   }


   VAR_8 = VAR_9 = 0;
  }




  if (!VAR_20)
   return VAR_21;






  if (VAR_20 > VAR_11)
   VAR_15.length = VAR_11;
  else
   VAR_15.length = VAR_20;

  VAR_15.value = (char *) VAR_13 + VAR_21;

  VAR_16.value = ((void*)0);
  VAR_16.length = 0;


  VAR_17 = FUNC_1(&VAR_18, VAR_12->gctx, 1, VAR_4,
       &VAR_15, &VAR_22, &VAR_16);
  if (VAR_17 != VAR_5)
  {
   FUNC_5(FUNC_3("GSSAPI wrap error"), VAR_12, VAR_17, VAR_18);
   goto cleanup;
  }
  else if (VAR_22 == 0)
  {
   FUNC_7(&VAR_12->errorMessage,
         FUNC_3("outgoing GSSAPI message would not use confidentiality\n"));
   goto cleanup;
  }

  if (VAR_16.length > VAR_6 - sizeof(uint32))
  {
   FUNC_7(&VAR_12->errorMessage,
         FUNC_3("client tried to send oversize GSSAPI packet (%zu > %zu)\n"),
         (size_t) VAR_16.length,
         VAR_6 - sizeof(uint32));
   goto cleanup;
  }

  VAR_21 += VAR_15.length;
  VAR_20 -= VAR_15.length;


  VAR_23 = FUNC_2(VAR_16.length);
  FUNC_4(VAR_7 + VAR_8, &VAR_23, sizeof(uint32));
  VAR_8 += sizeof(uint32);

  FUNC_4(VAR_7 + VAR_8, VAR_16.value, VAR_16.length);
  VAR_8 += VAR_16.length;
 }

 VAR_19 = VAR_21;

cleanup:
 if (VAR_16.value != ((void*)0))
  FUNC_0(&VAR_18, &VAR_16);
 return VAR_19;
}
