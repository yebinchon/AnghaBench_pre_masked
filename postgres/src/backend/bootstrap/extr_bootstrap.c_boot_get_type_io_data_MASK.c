
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int typbyval; char typalign; char typdelim; scalar_t__ typelem; scalar_t__ typinput; scalar_t__ typoutput; int typlen; } ;
struct typmap {scalar_t__ am_oid; TYPE_1__ am_typ; } ;
typedef int int16 ;
struct TYPE_4__ {scalar_t__ oid; int byval; char align; scalar_t__ elem; scalar_t__ inproc; scalar_t__ outproc; int len; } ;
typedef scalar_t__ Oid ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct typmap** VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int VAR_3 ;

void
FUNC_2(Oid VAR_4,
       int16 *VAR_5,
       bool *VAR_6,
       char *VAR_7,
       char *VAR_8,
       Oid *VAR_9,
       Oid *VAR_10,
       Oid *VAR_11)
{
 if (VAR_1 != ((void*)0))
 {

  struct typmap **VAR_12;
  struct typmap *VAR_13;

  VAR_12 = VAR_1;
  while (*VAR_12 && (*VAR_12)->am_oid != VAR_4)
   ++VAR_12;
  VAR_13 = *VAR_12;
  if (VAR_13 == ((void*)0))
   FUNC_1(VAR_0, "type OID %u not found in Typ list", VAR_4);

  *VAR_5 = VAR_13->am_typ.typlen;
  *VAR_6 = VAR_13->am_typ.typbyval;
  *VAR_7 = VAR_13->am_typ.typalign;
  *VAR_8 = VAR_13->am_typ.typdelim;


  if (FUNC_0(VAR_13->am_typ.typelem))
   *VAR_9 = VAR_13->am_typ.typelem;
  else
   *VAR_9 = VAR_4;

  *VAR_10 = VAR_13->am_typ.typinput;
  *VAR_11 = VAR_13->am_typ.typoutput;
 }
 else
 {

  int VAR_14;

  for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
  {
   if (VAR_2[VAR_14].oid == VAR_4)
    break;
  }
  if (VAR_14 >= VAR_3)
   FUNC_1(VAR_0, "type OID %u not found in TypInfo", VAR_4);

  *VAR_5 = VAR_2[VAR_14].len;
  *VAR_6 = VAR_2[VAR_14].byval;
  *VAR_7 = VAR_2[VAR_14].align;

  *VAR_8 = ',';


  if (FUNC_0(VAR_2[VAR_14].elem))
   *VAR_9 = VAR_2[VAR_14].elem;
  else
   *VAR_9 = VAR_4;

  *VAR_10 = VAR_2[VAR_14].inproc;
  *VAR_11 = VAR_2[VAR_14].outproc;
 }
}
