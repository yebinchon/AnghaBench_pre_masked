
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uint32 ;
typedef scalar_t__ ssize_t ;
struct TYPE_8__ {int ctx; } ;
typedef TYPE_1__ pg_gssinfo ;
struct TYPE_9__ {size_t length; char* value; } ;
typedef TYPE_2__ gss_buffer_desc ;
struct TYPE_10__ {TYPE_1__* gss; } ;
typedef TYPE_3__ Port ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int,int ,TYPE_2__*,int*,TYPE_2__*) ;
 char FUNC_4 (size_t) ;
 size_t VAR_11 ;
 int FUNC_5 (scalar_t__,char*,int) ;
 int FUNC_6 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (TYPE_3__*,scalar_t__,scalar_t__) ;

ssize_t
FUNC_8(Port *VAR_12, void *VAR_13, size_t VAR_14)
{
 size_t VAR_15 = VAR_14;
 size_t VAR_16 = 0;







 while (VAR_15 || VAR_8)
 {
  OM_uint32 VAR_17,
     VAR_18;
  gss_buffer_desc VAR_19,
     VAR_20;
  int VAR_21 = 0;
  uint32 VAR_22;
  pg_gssinfo *VAR_23 = VAR_12->gss;






  if (VAR_8)
  {
   ssize_t VAR_24;
   ssize_t VAR_25 = VAR_8 - VAR_9;

   VAR_24 = FUNC_7(VAR_12, VAR_7 + VAR_9, VAR_25);
   if (VAR_24 <= 0)
   {
    if (VAR_16 != 0 && (VAR_10 == VAR_0 || VAR_10 == VAR_2 || VAR_10 == VAR_1))
     return VAR_16;
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




  if (!VAR_15)
   return VAR_16;
  if (VAR_15 > VAR_11)
   VAR_19.length = VAR_11;
  else
   VAR_19.length = VAR_15;

  VAR_19.value = (char *) VAR_13 + VAR_16;

  VAR_20.value = ((void*)0);
  VAR_20.length = 0;


  VAR_17 = FUNC_3(&VAR_18, VAR_23->ctx, 1, VAR_4,
       &VAR_19, &VAR_21, &VAR_20);
  if (VAR_17 != VAR_5)
   FUNC_6(VAR_3, FUNC_2("GSSAPI wrap error"), VAR_17, VAR_18);

  if (VAR_21 == 0)
   FUNC_0(VAR_3,
     (FUNC_1("outgoing GSSAPI message would not use confidentiality")));

  if (VAR_20.length > VAR_6 - sizeof(uint32))
   FUNC_0(VAR_3,
     (FUNC_1("server tried to send oversize GSSAPI packet (%zu > %zu)",
       (size_t) VAR_20.length,
       VAR_6 - sizeof(uint32))));

  VAR_16 += VAR_19.length;
  VAR_15 -= VAR_19.length;


  VAR_22 = FUNC_4(VAR_20.length);
  FUNC_5(VAR_7 + VAR_8, &VAR_22, sizeof(uint32));
  VAR_8 += sizeof(uint32);

  FUNC_5(VAR_7 + VAR_8, VAR_20.value, VAR_20.length);
  VAR_8 += VAR_20.length;
 }

 return VAR_16;
}
