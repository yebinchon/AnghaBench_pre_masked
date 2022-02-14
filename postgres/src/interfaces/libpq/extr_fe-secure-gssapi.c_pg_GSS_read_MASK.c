
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32 ;
typedef size_t ssize_t ;
struct TYPE_10__ {int length; char* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_11__ {int errorMessage; int gctx; } ;
typedef TYPE_2__ PGconn ;
typedef int OM_uint32 ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int ,TYPE_1__*,TYPE_1__*,int*,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_2__*,int ,int ) ;
 size_t FUNC_6 (TYPE_2__*,char*,int) ;
 int FUNC_7 (int *,int ,...) ;

ssize_t
FUNC_8(PGconn *VAR_9, void *VAR_10, size_t VAR_11)
{
 OM_uint32 VAR_12,
    VAR_13;
 gss_buffer_desc VAR_14 = VAR_0,
    VAR_15 = VAR_0;
 ssize_t VAR_16 = 0;
 size_t VAR_17 = VAR_11;
 size_t VAR_18 = 0;
 while (VAR_17)
 {
  int VAR_19 = 0;


  if (VAR_8 < VAR_7)
  {
   int VAR_20 = VAR_7 - VAR_8;
   int VAR_21 = VAR_20 < VAR_11 - VAR_18 ? VAR_20 : VAR_11 - VAR_18;





   FUNC_3((char *) VAR_10 + VAR_18, VAR_6 + VAR_8, VAR_21);
   VAR_8 += VAR_21;
   VAR_17 -= VAR_21;
   VAR_18 += VAR_21;


   if (VAR_8 == VAR_7)
    VAR_8 = VAR_7 = 0;

   continue;
  }
  if (VAR_4 < sizeof(uint32))
  {

   VAR_16 = FUNC_6(VAR_9, VAR_3 + VAR_4,
         sizeof(uint32) - VAR_4);
   if (VAR_16 < 0)
    return VAR_18 ? VAR_18 : VAR_16;

   VAR_4 += VAR_16;
   if (VAR_4 < sizeof(uint32))
    return VAR_18;
  }





  VAR_14.length = FUNC_4(*(uint32 *) VAR_3);


  if (VAR_14.length > VAR_2 - sizeof(uint32))
  {
   FUNC_7(&VAR_9->errorMessage,
         FUNC_2("oversize GSSAPI packet sent by the server (%zu > %zu)\n"),
         (size_t) VAR_14.length,
         VAR_2 - sizeof(uint32));
   VAR_16 = -1;
   goto cleanup;
  }





  VAR_16 = FUNC_6(VAR_9, VAR_3 + VAR_4,
        VAR_14.length - (VAR_4 - sizeof(uint32)));
  if (VAR_16 < 0)
   return VAR_18 ? VAR_18 : VAR_16;





  VAR_4 += VAR_16;
  if (VAR_4 - sizeof(uint32) < VAR_14.length)
   return VAR_18 ? VAR_18 : -1;






  VAR_15.value = ((void*)0);
  VAR_15.length = 0;
  VAR_14.value = VAR_3 + sizeof(uint32);

  VAR_12 = FUNC_1(&VAR_13, VAR_9->gctx, &VAR_14, &VAR_15, &VAR_19, ((void*)0));
  if (VAR_12 != VAR_1)
  {
   FUNC_5(FUNC_2("GSSAPI unwrap error"), VAR_9,
       VAR_12, VAR_13);
   VAR_16 = -1;
   goto cleanup;
  }
  else if (VAR_19 == 0)
  {
   FUNC_7(&VAR_9->errorMessage,
         FUNC_2("incoming GSSAPI message did not use confidentiality\n"));
   VAR_16 = -1;
   goto cleanup;
  }

  FUNC_3(VAR_6, VAR_15.value, VAR_15.length);
  VAR_7 = VAR_15.length;


  VAR_5 = VAR_4 = 0;

  FUNC_0(&VAR_13, &VAR_15);
 }

 VAR_16 = VAR_18;

cleanup:
 if (VAR_15.value != ((void*)0))
  FUNC_0(&VAR_13, &VAR_15);
 return VAR_16;
}
