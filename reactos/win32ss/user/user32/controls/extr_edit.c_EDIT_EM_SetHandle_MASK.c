
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_12__ {int style; void* hloc32A; void* hloc32W; int buffer_size; int flags; scalar_t__ selection_end; scalar_t__ selection_start; scalar_t__ y_offset; scalar_t__ x_offset; int * hlocapp; scalar_t__ is_unicode; } ;
typedef int INT ;
typedef void* HLOCAL ;
typedef TYPE_1__ EDITSTATE ;
typedef int CHAR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_8 (int,int) ;
 int FUNC_9 (void*) ;
 void* FUNC_10 (void*) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,int ,int *,int,int *,int) ;
 int VAR_6 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_17(EDITSTATE *VAR_7, HLOCAL VAR_8)
{
 if (!(VAR_7->style & VAR_3))
  return;

 if (!VAR_8) {
  FUNC_14("called with NULL handle\n");
  return;
 }

 FUNC_4(VAR_7, VAR_6);

 if(VAR_7->is_unicode)
 {
     if(VAR_7->hloc32A)
     {
  FUNC_9(VAR_7->hloc32A);
  VAR_7->hloc32A = ((void*)0);
     }
     VAR_7->hloc32W = VAR_8;
 }
 else
 {
     INT VAR_9, VAR_10;
     HLOCAL VAR_11;
     WCHAR *VAR_12;
     CHAR *VAR_13;

     VAR_10 = FUNC_11(VAR_8);
     VAR_13 = FUNC_10(VAR_8);
     VAR_9 = FUNC_13(VAR_0, 0, VAR_13, VAR_10, ((void*)0), 0);
     if(!(VAR_11 = FUNC_8(VAR_4 | VAR_5, VAR_9 * sizeof(WCHAR))))
     {
  FUNC_7("Could not allocate new unicode buffer\n");
  return;
     }
     VAR_12 = FUNC_10(VAR_11);
     FUNC_13(VAR_0, 0, VAR_13, VAR_10, VAR_12, VAR_9);
     FUNC_12(VAR_11);
     FUNC_12(VAR_8);

     if(VAR_7->hloc32W)
  FUNC_9(VAR_7->hloc32W);

     VAR_7->hloc32W = VAR_11;
     VAR_7->hloc32A = VAR_8;
 }

 VAR_7->buffer_size = FUNC_11(VAR_7->hloc32W)/sizeof(WCHAR) - 1;


        VAR_7->hlocapp = ((void*)0);

 FUNC_3(VAR_7);
        FUNC_16(VAR_7);

 VAR_7->x_offset = VAR_7->y_offset = 0;
 VAR_7->selection_start = VAR_7->selection_end = 0;
 FUNC_1(VAR_7);
 VAR_7->flags &= ~VAR_1;
 VAR_7->flags &= ~VAR_2;
 FUNC_0(VAR_7, 0, FUNC_15(VAR_7), 0, ((void*)0));
 FUNC_6(VAR_7, ((void*)0), VAR_6);
 FUNC_2(VAR_7);

 FUNC_5(VAR_7);
}
