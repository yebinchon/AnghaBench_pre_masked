
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ,int ,int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__* VAR_13 ;
 int FUNC_6 (int *,scalar_t__,int) ;
 int FUNC_7 (scalar_t__) ;
 int * FUNC_8 (int) ;

void FUNC_9()
{
 HKEY VAR_14;
 TCHAR *VAR_15 = FUNC_8(4096 * sizeof(TCHAR));
 TCHAR *VAR_16 = VAR_15;
 int VAR_17 = 0;
 int VAR_18,VAR_19;
 LONG VAR_20;

 if(VAR_15 == 0)
  return;

 FUNC_3(VAR_15, 4096 * sizeof(TCHAR));
 VAR_16 = VAR_15;

 FUNC_1(VAR_0, FUNC_4("Software\\Catch22\\Matrix Screen Saver"), 0,
  FUNC_4(""), 0, VAR_1, ((void*)0), &VAR_14, ((void*)0));

 VAR_20 = VAR_10;
 FUNC_2(VAR_14, FUNC_4("MessageSpeed"), 0, VAR_2, (BYTE *)&VAR_20, sizeof VAR_20);

 VAR_20 = VAR_9;
 FUNC_2(VAR_14, FUNC_4("MatrixSpeed"), 0, VAR_2, (BYTE *)&VAR_20, sizeof VAR_20);

 VAR_20 = VAR_7;
 FUNC_2(VAR_14, FUNC_4("Density"), 0, VAR_2, (BYTE *)&VAR_20, sizeof VAR_20);

 VAR_20 = VAR_8;
 FUNC_2(VAR_14, FUNC_4("FontSize"), 0, VAR_2, (BYTE *)&VAR_20, sizeof VAR_20);

 VAR_20 = VAR_6;
 FUNC_2(VAR_14, FUNC_4("Randomize"), 0, VAR_2, (BYTE *)&VAR_20, sizeof VAR_20);

 VAR_20 = VAR_5;
 FUNC_2(VAR_14, FUNC_4("FontBold"), 0, VAR_2, (BYTE *)&VAR_20, sizeof VAR_20);

 FUNC_2(VAR_14, FUNC_4("FontName"), 0, VAR_4, (BYTE *)VAR_12, FUNC_7(VAR_12) * sizeof(TCHAR));

 for(VAR_18 = 0; VAR_18 < VAR_11; VAR_18++)
 {
  VAR_19 = FUNC_7(VAR_13[VAR_18]);

  if(VAR_19 > 0 && VAR_17+VAR_19 < 4096)
  {
   FUNC_6(VAR_16, VAR_13[VAR_18], 4096-VAR_17);
   VAR_17 += VAR_19 + 1;
   VAR_16 += VAR_19 + 1;
  }
 }


 VAR_17++;

 FUNC_2(VAR_14, FUNC_4("Messages"), 0, VAR_3, (BYTE *)VAR_15, VAR_17 * sizeof(TCHAR));
 FUNC_0(VAR_14);

 FUNC_5(VAR_15);
}
