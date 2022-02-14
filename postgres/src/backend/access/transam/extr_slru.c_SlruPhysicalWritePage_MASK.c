
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int off_t ;
typedef scalar_t__ XLogRecPtr ;
struct TYPE_9__ {scalar_t__ do_fsync; TYPE_1__* shared; } ;
struct TYPE_8__ {int num_files; int* segno; int* fd; } ;
struct TYPE_7__ {scalar_t__* group_lsn; int lsn_groups_per_page; int * page_buffer; } ;
typedef TYPE_1__* SlruShared ;
typedef TYPE_2__* SlruFlush ;
typedef TYPE_3__* SlruCtl ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*,char*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_11 (int,int ,int) ;

__attribute__((used)) static bool
FUNC_12(SlruCtl VAR_19, int VAR_20, int VAR_21, SlruFlush VAR_22)
{
 SlruShared VAR_23 = VAR_19->shared;
 int VAR_24 = VAR_20 / VAR_11;
 int VAR_25 = VAR_20 % VAR_11;
 int VAR_26 = VAR_25 * VAR_0;
 char VAR_27[VAR_2];
 int VAR_28 = -1;






 if (VAR_23->group_lsn != ((void*)0))
 {







  XLogRecPtr VAR_29;
  int VAR_30,
     VAR_31;

  VAR_30 = VAR_21 * VAR_23->lsn_groups_per_page;
  VAR_29 = VAR_23->group_lsn[VAR_30++];
  for (VAR_31 = 1; VAR_31 < VAR_23->lsn_groups_per_page; VAR_31++)
  {
   XLogRecPtr VAR_32 = VAR_23->group_lsn[VAR_30++];

   if (VAR_29 < VAR_32)
    VAR_29 = VAR_32;
  }

  if (!FUNC_6(VAR_29))
  {






   FUNC_3();
   FUNC_5(VAR_29);
   FUNC_1();
  }
 }




 if (VAR_22)
 {
  int VAR_33;

  for (VAR_33 = 0; VAR_33 < VAR_22->num_files; VAR_33++)
  {
   if (VAR_22->segno[VAR_33] == VAR_24)
   {
    VAR_28 = VAR_22->fd[VAR_33];
    break;
   }
  }
 }

 if (VAR_28 < 0)
 {
  FUNC_4(VAR_19, VAR_27, VAR_24);
  VAR_28 = FUNC_2(VAR_27, VAR_5 | VAR_4 | VAR_6);
  if (VAR_28 < 0)
  {
   VAR_17 = VAR_10;
   VAR_18 = VAR_16;
   return 0;
  }

  if (VAR_22)
  {
   if (VAR_22->num_files < VAR_3)
   {
    VAR_22->fd[VAR_22->num_files] = VAR_28;
    VAR_22->segno[VAR_22->num_files] = VAR_24;
    VAR_22->num_files++;
   }
   else
   {




    VAR_22 = ((void*)0);
   }
  }
 }

 if (FUNC_7(VAR_28, (off_t) VAR_26, VAR_7) < 0)
 {
  VAR_17 = VAR_12;
  VAR_18 = VAR_16;
  if (!VAR_22)
   FUNC_0(VAR_28);
  return 0;
 }

 VAR_16 = 0;
 FUNC_10(VAR_15);
 if (FUNC_11(VAR_28, VAR_23->page_buffer[VAR_21], VAR_0) != VAR_0)
 {
  FUNC_9();

  if (VAR_16 == 0)
   VAR_16 = VAR_1;
  VAR_17 = VAR_13;
  VAR_18 = VAR_16;
  if (!VAR_22)
   FUNC_0(VAR_28);
  return 0;
 }
 FUNC_9();





 if (!VAR_22)
 {
  FUNC_10(VAR_14);
  if (VAR_19->do_fsync && FUNC_8(VAR_28) != 0)
  {
   FUNC_9();
   VAR_17 = VAR_9;
   VAR_18 = VAR_16;
   FUNC_0(VAR_28);
   return 0;
  }
  FUNC_9();

  if (FUNC_0(VAR_28) != 0)
  {
   VAR_17 = VAR_8;
   VAR_18 = VAR_16;
   return 0;
  }
 }

 return 1;
}
