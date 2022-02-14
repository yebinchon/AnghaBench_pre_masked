
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int DiskSize; int PartitionStyle; } ;
struct TYPE_7__ {scalar_t__ is_bootable_img; scalar_t__ has_efi; scalar_t__ is_iso; } ;
typedef int BOOL ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,size_t) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_1__) ;
 scalar_t__ FUNC_8 (TYPE_1__) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_1__) ;
 scalar_t__ FUNC_11 (TYPE_1__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int * VAR_22 ;
 TYPE_1__ VAR_23 ;
 char* FUNC_14 (int ) ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 char* VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_15(BOOL VAR_28)
{

 BOOL VAR_29[3] = { VAR_10, VAR_10, VAR_0 };

 BOOL VAR_30[3] = { VAR_10, VAR_10, VAR_0 };
 BOOL VAR_31;

 if (!VAR_28)
  FUNC_9(FUNC_3(VAR_19));
 FUNC_9(FUNC_3(VAR_20));

 VAR_15 = (int)FUNC_2(VAR_16, FUNC_1(VAR_16));
 VAR_31 = (VAR_15 == 134) && (VAR_22 != ((void*)0)) && FUNC_8(VAR_23) &&
  (FUNC_1(FUNC_6(VAR_18, VAR_1)) == 1);

 if (FUNC_1(VAR_17) < 0)
  return;
 switch (VAR_15) {
 case 132:
  VAR_29[VAR_7] = VAR_10;
  VAR_30[0] = VAR_0;
  VAR_30[1] = VAR_0;
  VAR_30[2] = VAR_10;
  break;
 case 134:
  if (VAR_22 == ((void*)0))
   break;

  if (!FUNC_11(VAR_23)) {
   VAR_29[VAR_5] = VAR_0;
   VAR_30[1] = VAR_0;
   break;
  }

  if (FUNC_10(VAR_23)) {
   if (!FUNC_7(VAR_23) || VAR_14 || VAR_31) {
    VAR_30[0] = VAR_0;
    VAR_30[1] = VAR_10;
    VAR_30[2] = VAR_10;
   }
  } else {
   VAR_30[0] = VAR_0;
  }
  break;
 case 133:
 case 137:
 case 130:
 case 129:
 case 131:
 case 135:
 case 136:
  VAR_29[VAR_5] = VAR_0;
  VAR_30[1] = VAR_0;
  break;
 case 128:
  VAR_30[0] = VAR_0;
  break;
 }

 if (!VAR_28) {

  if (VAR_8.DiskSize > 2 * VAR_9)
   VAR_25 = VAR_5;

  int VAR_32 = VAR_8.PartitionStyle;
  if (VAR_29[VAR_6])
   FUNC_9(FUNC_5(VAR_19,
    FUNC_0(VAR_19, "MBR"), VAR_6));
  if (VAR_29[VAR_5])
   FUNC_9(FUNC_5(VAR_19,
    FUNC_0(VAR_19, "GPT"), VAR_5));
  if (VAR_29[VAR_7])
   FUNC_9(FUNC_5(VAR_19,
    FUNC_0(VAR_19, VAR_26), VAR_7));

  if (VAR_15 == 132)
   VAR_32 = (VAR_25 >= 0) ? VAR_25 : VAR_6;
  else if (VAR_15 == 128)
   VAR_32 = (VAR_25 >= 0) ? VAR_25 : VAR_5;
  else if ((VAR_15 == 134) && (VAR_22 != ((void*)0)) && (VAR_23.is_iso)) {
   if (FUNC_7(VAR_23) && VAR_23.has_efi)
    VAR_32 = VAR_14? VAR_6 :
     ((VAR_25 >= 0) ? VAR_25 : VAR_5);
   if (VAR_23.is_bootable_img)
    VAR_32 = (VAR_25 >= 0) ? VAR_25 : VAR_6;
  }
  FUNC_13(VAR_19, VAR_32);
  VAR_24 = (int)FUNC_2(VAR_19, FUNC_1(VAR_19));
 }

 VAR_21 = VAR_0;
 if (VAR_30[0] && (VAR_24 != VAR_5)) {
  FUNC_9(FUNC_5(VAR_20,
   FUNC_0(VAR_20, FUNC_14(VAR_2)), VAR_11));
  VAR_21 = VAR_10;
 }
 if (VAR_30[1] && !((VAR_24 == VAR_6) && (VAR_15 == 134) && FUNC_10(VAR_23) && FUNC_11(VAR_23)) )
  FUNC_9(FUNC_5(VAR_20,
   FUNC_0(VAR_20, FUNC_14(VAR_3)), VAR_12));
 if (VAR_30[2] && ((VAR_24 != VAR_5) || (VAR_15 == 132)))
  FUNC_9(FUNC_5(VAR_20,
   FUNC_0(VAR_20, FUNC_14(VAR_4)), VAR_11));
 FUNC_9(FUNC_4(VAR_20, 0));
 VAR_27 = (int)FUNC_2(VAR_20, FUNC_1(VAR_20));

 FUNC_12(VAR_18, VAR_13, 0, 0);
}
