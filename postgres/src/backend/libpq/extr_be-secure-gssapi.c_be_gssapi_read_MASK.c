
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
typedef size_t ssize_t ;
struct TYPE_9__ {int ctx; } ;
typedef TYPE_1__ pg_gssinfo ;
struct TYPE_10__ {int length; char* value; } ;
typedef TYPE_2__ gss_buffer_desc ;
struct TYPE_11__ {TYPE_1__* gss; } ;
typedef TYPE_3__ Port ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,TYPE_2__*,TYPE_2__*,int*,int *) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__,scalar_t__) ;
 size_t FUNC_8 (TYPE_3__*,char*,int) ;

ssize_t
FUNC_9(Port *VAR_10, void *VAR_11, size_t VAR_12)
{
 OM_uint32 VAR_13,
    VAR_14;
 gss_buffer_desc VAR_15,
    VAR_16;
 ssize_t VAR_17;
 size_t VAR_18 = VAR_12;
 size_t VAR_19 = 0;
 int VAR_20 = 0;
 pg_gssinfo *VAR_21 = VAR_10->gss;
 while (VAR_18)
 {

  if (VAR_8 < VAR_7)
  {
   int VAR_22 = VAR_7 - VAR_8;
   int VAR_23 = VAR_22 < VAR_12 - VAR_19 ? VAR_22 : VAR_12 - VAR_19;





   FUNC_5((char *) VAR_11 + VAR_19, VAR_6 + VAR_8, VAR_23);
   VAR_8 += VAR_23;
   VAR_18 -= VAR_23;
   VAR_19 += VAR_23;


   if (VAR_8 == VAR_7)
    VAR_8 = VAR_7 = 0;

   continue;
  }
  if (VAR_5 < sizeof(uint32))
  {




   VAR_17 = FUNC_8(VAR_10, VAR_4 + VAR_5,
          sizeof(uint32) - VAR_5);
   if (VAR_17 < 0)
    return VAR_19 ? VAR_19 : VAR_17;

   VAR_5 += VAR_17;






   if (VAR_5 < sizeof(uint32))
    return VAR_19;
  }





  VAR_15.length = FUNC_6(*(uint32 *) VAR_4);


  if (VAR_15.length > VAR_3 - sizeof(uint32))
   FUNC_0(VAR_1,
     (FUNC_1("oversize GSSAPI packet sent by the client (%zu > %zu)",
       (size_t) VAR_15.length,
       VAR_3 - sizeof(uint32))));





  VAR_17 = FUNC_8(VAR_10, VAR_4 + VAR_5,
         VAR_15.length - (VAR_5 - sizeof(uint32)));
  if (VAR_17 < 0)
   return VAR_19 ? VAR_19 : VAR_17;

  VAR_5 += VAR_17;






  if (VAR_5 - sizeof(uint32) < VAR_15.length)
  {
   if (!VAR_19)
   {
    VAR_9 = VAR_0;
    return -1;
   }

   return VAR_19;
  }






  VAR_16.value = ((void*)0);
  VAR_16.length = 0;
  VAR_15.value = VAR_4 + sizeof(uint32);

  VAR_13 = FUNC_4(&VAR_14, VAR_21->ctx, &VAR_15, &VAR_16, &VAR_20, ((void*)0));
  if (VAR_13 != VAR_2)
   FUNC_7(VAR_1, FUNC_2("GSSAPI unwrap error"),
       VAR_13, VAR_14);

  if (VAR_20 == 0)
   FUNC_0(VAR_1,
     (FUNC_1("incoming GSSAPI message did not use confidentiality")));

  FUNC_5(VAR_6, VAR_16.value, VAR_16.length);

  VAR_7 = VAR_16.length;


  VAR_5 = 0;

  FUNC_3(&VAR_14, &VAR_16);
 }

 return VAR_19;
}
