
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WIN32_FIND_DATAW ;
typedef char WCHAR ;
struct TYPE_6__ {int cFileName; } ;
struct TYPE_5__ {int level; void* scanned; struct TYPE_5__* down; struct TYPE_5__* next; void* bhfi_valid; int bhfi; TYPE_3__ data; int etype; void* expanded; struct TYPE_5__* up; } ;
typedef scalar_t__* LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef TYPE_1__ Entry ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int ,int ,int ,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void FUNC_9(Entry* VAR_11, LPCWSTR VAR_12)
{
 Entry* VAR_13 = ((void*)0);
 Entry* VAR_14 = ((void*)0);
 Entry* VAR_15;

 int VAR_16 = VAR_11->level + 1;
 WIN32_FIND_DATAW VAR_17;
 HANDLE VAR_18;
 HANDLE VAR_19;

 WCHAR VAR_20[VAR_8], *VAR_21;
 for(VAR_21=VAR_20; *VAR_12; )
  *VAR_21++ = *VAR_12++;

 *VAR_21++ = '\\';
 VAR_21[0] = '*';
 VAR_21[1] = '\0';

 VAR_18 = FUNC_3(VAR_20, &VAR_17);

 if (VAR_18 != VAR_7) {
  do {
   VAR_15 = FUNC_6();

   if (!VAR_13)
    VAR_13 = VAR_15;

   if (VAR_14)
    VAR_14->next = VAR_15;

   FUNC_8(&VAR_15->data, &VAR_17, sizeof(WIN32_FIND_DATAW));
   VAR_15->down = ((void*)0);
   VAR_15->up = VAR_11;
   VAR_15->expanded = VAR_1;
   VAR_15->scanned = VAR_1;
   VAR_15->level = VAR_16;
   VAR_15->etype = VAR_0;
   VAR_15->bhfi_valid = VAR_1;

   FUNC_7(VAR_21, VAR_15->data.cFileName);

   VAR_19 = FUNC_1(VAR_20, VAR_6, VAR_4|VAR_5|VAR_3,
        0, VAR_9, VAR_2, 0);

   if (VAR_19 != VAR_7) {
    if (FUNC_5(VAR_19, &VAR_15->bhfi))
     VAR_15->bhfi_valid = VAR_10;

    FUNC_0(VAR_19);
   }

   VAR_14 = VAR_15;
  } while(FUNC_4(VAR_18, &VAR_17));

  if (VAR_14)
   VAR_14->next = ((void*)0);

  FUNC_2(VAR_18);
 }

 VAR_11->down = VAR_13;
 VAR_11->scanned = VAR_10;
}
