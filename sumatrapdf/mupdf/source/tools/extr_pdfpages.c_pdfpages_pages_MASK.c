
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_document ;
typedef int fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (int *,int *,char*,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int *,int *,char*) ;

__attribute__((used)) static int
FUNC_8(fz_context *VAR_1, fz_output *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5[], int VAR_6)
{
 enum { NO_FILE_OPENED, NO_INFO_GATHERED, INFO_SHOWN } VAR_7;
 int VAR_8 = 0;
 pdf_document *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 VAR_7 = NO_FILE_OPENED;
 while (VAR_8 < VAR_6)
 {
  if (VAR_7 == NO_FILE_OPENED || !FUNC_0(VAR_1, VAR_5[VAR_8]))
  {
   if (VAR_7 == NO_INFO_GATHERED)
   {
    FUNC_7(VAR_1, VAR_9, VAR_2, "1-N");
   }

   FUNC_4(VAR_1, VAR_9);

   VAR_3 = VAR_5[VAR_8];
   FUNC_2(VAR_1, VAR_2, "%s:\n", VAR_3);
   VAR_9 = FUNC_6(VAR_1, VAR_3);
   if (FUNC_5(VAR_1, VAR_9))
    if (!FUNC_3(VAR_1, VAR_9, VAR_4))
     FUNC_1(VAR_1, VAR_0, "cannot authenticate password: %s", VAR_3);

   VAR_7 = NO_INFO_GATHERED;
  }
  else
  {
   VAR_10 |= FUNC_7(VAR_1, VAR_9, VAR_2, VAR_5[VAR_8]);
   VAR_7 = INFO_SHOWN;
  }

  VAR_8++;
 }

 if (VAR_7 == NO_INFO_GATHERED)
  FUNC_7(VAR_1, VAR_9, VAR_2, "1-N");

 FUNC_4(VAR_1, VAR_9);

 return VAR_10;
}
