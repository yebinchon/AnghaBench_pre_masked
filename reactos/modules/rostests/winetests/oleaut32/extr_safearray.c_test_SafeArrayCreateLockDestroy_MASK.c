
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int sab ;
typedef size_t VARTYPE ;
typedef size_t UINT ;
struct TYPE_17__ {int fFeatures; } ;
struct TYPE_16__ {int cElements; scalar_t__ lLbound; } ;
typedef TYPE_1__ SAFEARRAYBOUND ;
typedef TYPE_2__ SAFEARRAY ;
typedef int HRESULT ;
typedef int DWORD ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (size_t) ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (size_t,size_t,TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 size_t FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 int FUNC_11 (TYPE_1__*,int ,int) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (TYPE_2__*,size_t*) ;

__attribute__((used)) static void FUNC_14(void)
{
  SAFEARRAYBOUND VAR_13[4];
  SAFEARRAY *VAR_14;
  HRESULT VAR_15;
  VARTYPE VAR_16;
  UINT VAR_17;

  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++)
  {
    VAR_13[VAR_17].lLbound = 0;
    VAR_13[VAR_17].cElements = 8;
  }






  VAR_14 = FUNC_2(VAR_11, 65536, VAR_13);
  FUNC_12(!VAR_14, "Max bounds didn't fail\n");

  FUNC_11(VAR_13, 0, sizeof(VAR_13));



  for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_13); VAR_17++)
    VAR_13[VAR_17].cElements = 8;


  for (VAR_17 = 1; VAR_17 < 4; VAR_17++)
  {
    for (VAR_16 = VAR_8; VAR_16 < VAR_6; VAR_16++)
    {
      DWORD VAR_18 = FUNC_1(VAR_16);

      VAR_14 = FUNC_2(VAR_16, VAR_17, VAR_13);

      if (VAR_18)
        FUNC_12(VAR_14 != ((void*)0), "VARTYPE %d (@%d dimensions) failed\n", VAR_16, VAR_17);
      else
        FUNC_12(VAR_14 == ((void*)0) || VAR_16 == VAR_9,
           "VARTYPE %d (@%d dimensions) succeeded!\n", VAR_16, VAR_17);

      if (VAR_14)
      {
        FUNC_12(FUNC_6(VAR_14) == VAR_17,
           "VARTYPE %d (@%d dimensions) cDims is %d, expected %d\n",
           VAR_16, VAR_17, FUNC_6(VAR_14), VAR_17);
        FUNC_12(FUNC_7(VAR_14) == VAR_18 || VAR_16 == VAR_9,
           "VARTYPE %d (@%d dimensions) cbElements is %d, expected %d\n",
           VAR_16, VAR_17, FUNC_7(VAR_14), VAR_18);

        if (VAR_16 != VAR_12 && VAR_16 != VAR_7)
        {
          FUNC_12((VAR_14->fFeatures & VAR_2) == 0,
             "Non interface type should not have FADF_HAVEIID\n");
          VAR_15 = FUNC_9(VAR_14, &VAR_4);
          FUNC_12(VAR_15 == VAR_1, "Unexpected ret value %#x.\n", VAR_15);
          if (VAR_16 != VAR_10)
          {
            VARTYPE VAR_19;

            FUNC_12(VAR_14->fFeatures & VAR_3,
               "Non interface type should have FADF_HAVEVARTYPE\n");
            if (&FUNC_13)
            {
              VAR_15 = FUNC_13(VAR_14, &VAR_19);
              FUNC_12(VAR_15 == VAR_5 && VAR_19 == VAR_16,
                 "Non interface type %d: bad type %d, hres %x\n", VAR_16, VAR_19, VAR_15);
            }
          }
        }
        else
        {
          FUNC_12(VAR_14->fFeatures & VAR_2, "Interface type should have FADF_HAVEIID\n");
          VAR_15 = FUNC_9(VAR_14, &VAR_4);
          FUNC_12(VAR_15 == VAR_5, "Failed to set array IID, hres %#x.\n", VAR_15);
          FUNC_12((VAR_14->fFeatures & VAR_3) == 0,
             "Interface type %d should not have FADF_HAVEVARTYPE\n", VAR_16);
        }

        VAR_15 = FUNC_8(VAR_14);
        FUNC_12(VAR_15 == VAR_5, "Lock VARTYPE %d (@%d dimensions) failed; hres 0x%x\n",
           VAR_16, VAR_17, VAR_15);

        if (VAR_15 == VAR_5)
        {
          VAR_15 = FUNC_3(VAR_14);
          FUNC_12(VAR_15 == VAR_0,"Destroy() got hres %x\n", VAR_15);

          VAR_15 = FUNC_4(VAR_14);
          FUNC_12(VAR_15 == VAR_0,"DestroyData() got hres %x\n", VAR_15);

          VAR_15 = FUNC_5(VAR_14);
          FUNC_12(VAR_15 == VAR_0,"DestroyDescriptor() got hres %x\n", VAR_15);

          VAR_15 = FUNC_10(VAR_14);
          FUNC_12(VAR_15 == VAR_5, "Unlock VARTYPE %d (@%d dims) hres 0x%x\n",
             VAR_16, VAR_17, VAR_15);

          VAR_15 = FUNC_3(VAR_14);
          FUNC_12(VAR_15 == VAR_5, "destroy VARTYPE %d (@%d dims) hres 0x%x\n",
             VAR_16, VAR_17, VAR_15);
        }
      }
    }
  }
}
