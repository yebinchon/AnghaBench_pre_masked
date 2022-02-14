
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ TCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__*,int ,scalar_t__*,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int ,int ,int *,int*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (scalar_t__*,int) ;
 scalar_t__* FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;
 void* VAR_14 ;
 void* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 size_t VAR_20 ;
 scalar_t__ VAR_21 ;
 int * VAR_22 ;
 int FUNC_7 (scalar_t__,scalar_t__*) ;
 int FUNC_8 (int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_9 (scalar_t__*) ;
 scalar_t__* FUNC_10 (int) ;

void FUNC_11()
{
 HKEY VAR_23;
 LONG VAR_24;
 ULONG VAR_25;
 TCHAR *VAR_26 = FUNC_10(4096);
 TCHAR *VAR_27 = VAR_26;

 if(VAR_26 == 0)
  return;

 FUNC_3(VAR_26, 4096);

 FUNC_1(VAR_6, FUNC_4("Software\\Catch22\\Matrix Screen Saver"), 0,
  FUNC_4(""), 0, VAR_7, ((void*)0), &VAR_23, ((void*)0));

 VAR_25 = sizeof VAR_24;
 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("MessageSpeed"), 0, 0, (BYTE *)&VAR_24, &VAR_25))
 {
  if(VAR_24 >= VAR_10 && VAR_24 <= VAR_9)
   VAR_19 = VAR_24;
 }

 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("MatrixSpeed"), 0, 0, (BYTE *)&VAR_24, &VAR_25))
 {
  if(VAR_24 >= VAR_12 && VAR_24 <= VAR_11)
   VAR_18 = VAR_24;
 }

 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("Density"), 0, 0, (BYTE *)&VAR_24, &VAR_25))
 {
  if(VAR_24 >= VAR_1 && VAR_24 <= VAR_0)
   VAR_16 = VAR_24;
 }

 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("FontSize"), 0, 0, (BYTE *)&VAR_24, &VAR_25))
 {
  if(VAR_24 >= VAR_5 && VAR_24 <= VAR_4)
   VAR_17 = VAR_24;
 }

 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("FontBold"), 0, 0, (BYTE *)&VAR_24, &VAR_25))
  VAR_14 = (VAR_24 == 0 ? VAR_3 : VAR_13);

 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("Randomize"), 0, 0, (BYTE *)&VAR_24, &VAR_25))
  VAR_15 = (VAR_24 == 0 ? VAR_3 : VAR_13);

 VAR_25 = 512;
 if(FUNC_2(VAR_23, FUNC_4("FontName"), 0, 0, (BYTE *)VAR_21, &VAR_25) != VAR_2)
  FUNC_7(VAR_21, FUNC_4("Arial"));

 VAR_25 = 4096;

 if(VAR_2 == FUNC_2(VAR_23, FUNC_4("Messages"), 0, 0 , (BYTE *)VAR_26, &VAR_25))
 {
  while(VAR_25 > 0 && *VAR_27 && FUNC_5(*VAR_27))
  {
   if(FUNC_9(VAR_27) > 0)
   {
    FUNC_8(VAR_22[VAR_20], VAR_27, VAR_8);
    ++VAR_20;
    VAR_27 += FUNC_9(VAR_27) + 1;
   }
  }
 }
 else
 {

  FUNC_8(VAR_22[0], FUNC_4("ReactOS"), VAR_8);
  ++VAR_20;
 }

 FUNC_0(VAR_23);
 FUNC_6(VAR_26);
}
