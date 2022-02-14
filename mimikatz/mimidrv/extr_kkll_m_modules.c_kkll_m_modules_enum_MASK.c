
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int (* PKKLL_M_MODULE_CALLBACK ) (int ,int ,int ,int *,int ,scalar_t__*) ;
typedef int PKIWI_BUFFER ;
typedef int * PAUX_MODULE_EXTENDED_INFO ;
typedef int NTSTATUS ;
typedef scalar_t__ BOOLEAN ;
typedef int AUX_MODULE_EXTENDED_INFO ;


 int FUNC_0 (int*,int,int *) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

NTSTATUS FUNC_4(SIZE_T VAR_4, PVOID VAR_5, PKIWI_BUFFER VAR_6, PKKLL_M_MODULE_CALLBACK VAR_7, PVOID VAR_8)
{
 NTSTATUS VAR_9 = VAR_2;
 ULONG VAR_10, VAR_11, VAR_12;
 PAUX_MODULE_EXTENDED_INFO VAR_13;
 BOOLEAN VAR_14 = VAR_3;

 VAR_9 = FUNC_0(&VAR_11, sizeof(AUX_MODULE_EXTENDED_INFO), ((void*)0));
 if(FUNC_3(VAR_9) && VAR_11)
 {
  if((VAR_13 = (PAUX_MODULE_EXTENDED_INFO) FUNC_1(VAR_1, VAR_11, VAR_0)))
  {
   VAR_12 = VAR_11 / sizeof(AUX_MODULE_EXTENDED_INFO);
   VAR_9 = FUNC_0(&VAR_11, sizeof(AUX_MODULE_EXTENDED_INFO), VAR_13);
   for(VAR_10 = 0; FUNC_3(VAR_9) && VAR_14 && (VAR_10 < VAR_12); VAR_10++)
    VAR_9 = VAR_7(VAR_4, VAR_5, VAR_6, VAR_13 + VAR_10, VAR_8, &VAR_14);
   FUNC_2(VAR_13, VAR_0);
  }
 }
 return VAR_9;
}
