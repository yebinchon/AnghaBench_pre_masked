
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ SxactGlobalXmin; int SxactGlobalXminCount; } ;
struct TYPE_9__ {scalar_t__ xmin; } ;
typedef TYPE_1__ SERIALIZABLEXACT ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (scalar_t__) ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_10(void)
{
 SERIALIZABLEXACT *VAR_4;

 FUNC_0(FUNC_2(VAR_3));

 VAR_2->SxactGlobalXmin = VAR_0;
 VAR_2->SxactGlobalXminCount = 0;

 for (VAR_4 = FUNC_1(); VAR_4 != ((void*)0); VAR_4 = FUNC_3(VAR_4))
 {
  if (!FUNC_6(VAR_4)
   && !FUNC_5(VAR_4)
   && VAR_4 != VAR_1)
  {
   FUNC_0(VAR_4->xmin != VAR_0);
   if (!FUNC_8(VAR_2->SxactGlobalXmin)
    || FUNC_9(VAR_4->xmin,
           VAR_2->SxactGlobalXmin))
   {
    VAR_2->SxactGlobalXmin = VAR_4->xmin;
    VAR_2->SxactGlobalXminCount = 1;
   }
   else if (FUNC_7(VAR_4->xmin,
           VAR_2->SxactGlobalXmin))
    VAR_2->SxactGlobalXminCount++;
  }
 }

 FUNC_4(VAR_2->SxactGlobalXmin);
}
