
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {int* proposed_label; } ;
struct TYPE_3__ {int usb_label; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int*) ;
 int* FUNC_5 (char*) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int*) ;

__attribute__((used)) static void FUNC_8(char* VAR_4, BOOL VAR_5)
{
 size_t VAR_6, VAR_7, VAR_8;
 BOOL VAR_9;
 WCHAR VAR_10[] = L"*?,;:/\\|+=<>[]\"";
 WCHAR VAR_11[] = L"\t.";
 WCHAR *VAR_12 = FUNC_5(VAR_4);

 if (VAR_12 == ((void*)0))
  return;

 for (VAR_6 = 0, VAR_8 = 0; VAR_6 < FUNC_7(VAR_12); VAR_6++) {
  if (VAR_5) {
   VAR_9 = VAR_0;
   for (VAR_7 = 0; VAR_7 < FUNC_7(VAR_10); VAR_7++) {
    if (VAR_12[VAR_6] == VAR_10[VAR_7]) {
     VAR_9 = VAR_2;
     break;
    }
   }

   if (VAR_12[VAR_6] >= 0x80) {
    VAR_12[VAR_8++] = L'_';
    VAR_9 = VAR_2;
   }
   if (VAR_9)
    continue;
  }
  VAR_9 = VAR_0;
  for (VAR_7 = 0; VAR_7 < FUNC_7(VAR_11); VAR_7++) {
   if (VAR_12[VAR_6] == VAR_11[VAR_7]) {
    VAR_12[VAR_8++] = '_';
    VAR_9 = VAR_2;
    break;
   }
  }
  if (VAR_9)
   continue;
  VAR_12[VAR_8++] = VAR_5 ? FUNC_3(VAR_12[VAR_6]) : VAR_12[VAR_6];
 }
 VAR_12[VAR_8] = 0;

 if (VAR_5) {
  if (FUNC_7(VAR_12) > 11)
   VAR_12[11] = 0;
  for (VAR_6 = 0, VAR_7 = 0; VAR_12[VAR_6] != 0 ; VAR_6++)
   if (VAR_12[VAR_6] == '_')
    VAR_7++;
  if (VAR_6 < 2*VAR_7) {

   FUNC_4("FAT label is mostly underscores. Using '%s' label instead.", VAR_1.proposed_label);
   for(VAR_6 = 0; VAR_1.proposed_label[VAR_6] != 0; VAR_6++)
    VAR_12[VAR_6] = VAR_1.proposed_label[VAR_6];
   VAR_12[VAR_6] = 0;
  }
 } else if (FUNC_7(VAR_12) > 32) {
  VAR_12[32] = 0;
 }


 FUNC_6(VAR_12, VAR_3.usb_label, sizeof(VAR_3.usb_label));
 FUNC_1(VAR_4, FUNC_2(VAR_4) + 1, VAR_3.usb_label);
 FUNC_0(VAR_12);
}
