
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int gdImagePtr ;
typedef int gdIOCtx ;
struct TYPE_5__ {int * bitmap; } ;
typedef TYPE_1__ Wbmp ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_7(gdImagePtr VAR_3, int VAR_4, gdIOCtx *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 Wbmp *VAR_9;


 if ((VAR_9 = FUNC_0 (FUNC_3 (VAR_3), FUNC_4 (VAR_3), VAR_1)) == ((void*)0)) {
  FUNC_5("Could not create WBMP");
  return 1;
 }


 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_3); VAR_7++) {
  for (VAR_6 = 0; VAR_6 < FUNC_3(VAR_3); VAR_6++) {
   if (FUNC_2 (VAR_3, VAR_6, VAR_7) == VAR_4) {
    VAR_9->bitmap[VAR_8] = VAR_0;
   }
   VAR_8++;
  }
 }


 if (FUNC_6 (VAR_9, &VAR_2, VAR_5)) {
  FUNC_1(VAR_9);
  FUNC_5("Could not save WBMP");
  return 1;
 }


 FUNC_1(VAR_9);

 return 0;
}
