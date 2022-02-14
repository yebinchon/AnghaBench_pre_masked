
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct probe_trace_arg {int * ref; int * value; } ;
struct TYPE_6__ {scalar_t__ show_location_range; } ;
struct TYPE_5__ {scalar_t__ atom; unsigned int number; unsigned int number2; } ;
typedef unsigned int Dwarf_Word ;
typedef TYPE_1__ Dwarf_Op ;
typedef int Dwarf_Die ;
typedef int Dwarf_Attribute ;
typedef scalar_t__ Dwarf_Addr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (long) ;
 int * FUNC_1 (int *,int ,int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,TYPE_1__**,size_t*,int) ;
 int FUNC_5 (int *,scalar_t__*) ;
 scalar_t__ FUNC_6 (int *) ;
 char* FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (char*,unsigned int) ;
 TYPE_2__ VAR_17 ;
 int FUNC_10 (int *,int,char*,char*) ;
 int * FUNC_11 (char const*) ;
 int FUNC_12 (char*) ;
 int * FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(Dwarf_Die *VAR_18, Dwarf_Addr VAR_19,
         Dwarf_Op *VAR_20, Dwarf_Die *VAR_21,
         unsigned int VAR_22,
         struct probe_trace_arg *VAR_23)
{
 Dwarf_Attribute VAR_24;
 Dwarf_Addr VAR_25 = 0;
 Dwarf_Op *VAR_26;
 size_t VAR_27;
 unsigned int VAR_28;
 Dwarf_Word VAR_29 = 0;
 bool VAR_30 = 0;
 const char *VAR_31;
 int VAR_32, VAR_33 = 0;

 if (FUNC_1(VAR_18, VAR_0, &VAR_24) != ((void*)0))
  goto static_var;


 if (FUNC_1(VAR_18, VAR_1, &VAR_24) == ((void*)0))
  return -VAR_12;
 if (FUNC_4(&VAR_24, VAR_19, &VAR_26, &VAR_27, 1) <= 0) {
  VAR_32 = FUNC_3(VAR_21, &VAR_25);
  if (VAR_32)
   return -VAR_13;

  if (VAR_17.show_location_range &&
   (FUNC_6(VAR_18) == VAR_11)) {
   VAR_33 = -VAR_16;
  } else if (VAR_19 != VAR_25 ||
   FUNC_6(VAR_18) != VAR_10) {
   return -VAR_13;
  }

  VAR_32 = FUNC_5(VAR_21, &VAR_25);
  if (VAR_32)
   return -VAR_13;




  for (VAR_19 += 1; VAR_19 <= VAR_25; VAR_19++) {
   if (FUNC_4(&VAR_24, VAR_19, &VAR_26,
         &VAR_27, 1) > 0)
    goto found;
  }
  return -VAR_13;
 }
found:
 if (VAR_27 == 0)

  return -VAR_13;

 if (VAR_26->atom == VAR_2) {
static_var:
  if (!VAR_23)
   return VAR_33;

  VAR_32 = FUNC_12(FUNC_2(VAR_18));
  VAR_23->value = FUNC_13(VAR_32 + 2);
  if (VAR_23->value == ((void*)0))
   return -VAR_14;
  FUNC_10(VAR_23->value, VAR_32 + 2, "@%s", FUNC_2(VAR_18));
  VAR_23->ref = FUNC_0((long)VAR_29);
  if (VAR_23->ref == ((void*)0))
   return -VAR_14;
  return VAR_33;
 }


 if (VAR_26->atom == VAR_6) {
  if (VAR_20 == ((void*)0))
   return -VAR_15;
  VAR_30 = 1;
  VAR_29 = VAR_26->number;
  VAR_26 = &VAR_20[0];
 }

 if (VAR_26->atom >= VAR_3 && VAR_26->atom <= VAR_4) {
  VAR_28 = VAR_26->atom - VAR_3;
  VAR_29 += VAR_26->number;
  VAR_30 = 1;
 } else if (VAR_26->atom >= VAR_7 && VAR_26->atom <= VAR_8) {
  VAR_28 = VAR_26->atom - VAR_7;
 } else if (VAR_26->atom == VAR_5) {
  VAR_28 = VAR_26->number;
  VAR_29 += VAR_26->number2;
  VAR_30 = 1;
 } else if (VAR_26->atom == VAR_9) {
  VAR_28 = VAR_26->number;
 } else {
  FUNC_8("DW_OP %x is not supported.\n", VAR_26->atom);
  return -VAR_15;
 }

 if (!VAR_23)
  return VAR_33;

 VAR_31 = FUNC_7(VAR_28, VAR_22);
 if (!VAR_31) {

  FUNC_9("Mapping for the register number %u "
      "missing on this architecture.\n", VAR_28);
  return -VAR_15;
 }

 VAR_23->value = FUNC_11(VAR_31);
 if (VAR_23->value == ((void*)0))
  return -VAR_14;

 if (VAR_30) {
  VAR_23->ref = FUNC_0((long)VAR_29);
  if (VAR_23->ref == ((void*)0))
   return -VAR_14;
 }
 return VAR_33;
}
