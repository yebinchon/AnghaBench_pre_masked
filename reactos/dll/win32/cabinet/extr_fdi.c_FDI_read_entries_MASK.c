
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int cab_UBYTE ;
typedef int USHORT ;
struct TYPE_13__ {scalar_t__ (* read ) (int ,int*,scalar_t__) ;int (* seek ) (int ,int,int ) ;int (* free ) (char*) ;} ;
struct TYPE_12__ {int cbCabinet; int cFolders; int cFiles; int setID; int iCabinet; int fReserve; int hasprev; int hasnext; } ;
struct TYPE_11__ {int header_resv; int folder_resv; int block_resv; char* prevname; char* previnfo; char* nextname; char* nextinfo; int hasnext; } ;
typedef TYPE_1__* PMORE_ISCAB_INFO ;
typedef TYPE_2__* PFDICABINETINFO ;
typedef int LONG ;
typedef int INT_PTR ;
typedef TYPE_3__ FDI_Int ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (TYPE_3__*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (char*,TYPE_3__*,int ,TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int*,scalar_t__) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static BOOL FUNC_16(
        FDI_Int *VAR_23,
        INT_PTR VAR_24,
        PFDICABINETINFO VAR_25,
        PMORE_ISCAB_INFO VAR_26)
{
  int VAR_27, VAR_28, VAR_29, VAR_30 = 0;
  LONG VAR_31;
  USHORT VAR_32, VAR_33, VAR_34;
  cab_UBYTE VAR_35[64], VAR_36;
  char *VAR_37 = ((void*)0), *VAR_38 = ((void*)0), *VAR_39 = ((void*)0), *VAR_40 = ((void*)0);

  FUNC_4("(fdi == ^%p, hf == %ld, pfdici == ^%p)\n", VAR_23, VAR_24, VAR_25);


  if (VAR_23->read(VAR_24, VAR_35, VAR_16) != VAR_16) {
    if (VAR_26) FUNC_6( VAR_23, VAR_2, 0 );
    return VAR_0;
  }


  if (FUNC_2(VAR_35+VAR_18) != 0x4643534d) {
    if (VAR_26) FUNC_6( VAR_23, VAR_2, 0 );
    return VAR_0;
  }


  VAR_31 = FUNC_2(VAR_35+VAR_10);


  VAR_27 = FUNC_1(VAR_35+VAR_15);


  VAR_28 = FUNC_1(VAR_35+VAR_14);


  VAR_32 = FUNC_1(VAR_35+VAR_17);


  VAR_33 = FUNC_1(VAR_35+VAR_9);


  if ((VAR_35[VAR_12] > 1) ||
      (VAR_35[VAR_12] == 1 && VAR_35[VAR_13] > 3))
  {
    FUNC_5("cabinet format version > 1.3\n");
    if (VAR_26) FUNC_6( VAR_23, VAR_3, 0 );
    return VAR_0;
  }


  VAR_34 = FUNC_1(VAR_35+VAR_11);


  if (VAR_34 & VAR_8) {
    if (VAR_23->read(VAR_24, VAR_35, VAR_22) != VAR_22) {
      FUNC_0("bunk reserve-sizes?\n");
      if (VAR_26) FUNC_6( VAR_23, VAR_1, 0 );
      return VAR_0;
    }

    VAR_29 = FUNC_1(VAR_35+VAR_21);
    if (VAR_26) VAR_26->header_resv = VAR_29;
    VAR_30 = VAR_35[VAR_20];
    if (VAR_26) VAR_26->folder_resv = VAR_30;
    VAR_36 = VAR_35[VAR_19];
    if (VAR_26) VAR_26->block_resv = VAR_36;

    if (VAR_29 > 60000) {
      FUNC_5("WARNING; header reserved space > 60000\n");
    }


    if ((VAR_29) && (VAR_23->seek(VAR_24, VAR_29, VAR_4) == -1)) {
      FUNC_0("seek failure: header_resv\n");
      if (VAR_26) FUNC_6( VAR_23, VAR_1, 0 );
      return VAR_0;
    }
  }

  if (VAR_34 & VAR_7) {
    VAR_37 = FUNC_3(VAR_23, VAR_24, VAR_31);
    if (!VAR_37) {
      if (VAR_26) FUNC_6( VAR_23, VAR_1, 0 );
      return VAR_0;
    } else
      if (VAR_26)
        VAR_26->prevname = VAR_37;
      else
        VAR_23->free(VAR_37);
    VAR_38 = FUNC_3(VAR_23, VAR_24, VAR_31);
    if (VAR_38) {
      if (VAR_26)
        VAR_26->previnfo = VAR_38;
      else
        VAR_23->free(VAR_38);
    }
  }

  if (VAR_34 & VAR_6) {
    if (VAR_26)
      VAR_26->hasnext = VAR_5;
    VAR_39 = FUNC_3(VAR_23, VAR_24, VAR_31);
    if (!VAR_39) {
      if ((VAR_34 & VAR_7) && VAR_26) {
        if (VAR_26->prevname) VAR_23->free(VAR_37);
        if (VAR_26->previnfo) VAR_23->free(VAR_38);
      }
      FUNC_6( VAR_23, VAR_1, 0 );
      return VAR_0;
    } else
      if (VAR_26)
        VAR_26->nextname = VAR_39;
      else
        VAR_23->free(VAR_39);
    VAR_40 = FUNC_3(VAR_23, VAR_24, VAR_31);
    if (VAR_40) {
      if (VAR_26)
        VAR_26->nextinfo = VAR_40;
      else
        VAR_23->free(VAR_40);
    }
  }



  VAR_25->cbCabinet = VAR_31;
  VAR_25->cFolders = VAR_27;
  VAR_25->cFiles = VAR_28;
  VAR_25->setID = VAR_32;
  VAR_25->iCabinet = VAR_33;
  VAR_25->fReserve = (VAR_34 & VAR_8) != 0;
  VAR_25->hasprev = (VAR_34 & VAR_7) != 0;
  VAR_25->hasnext = (VAR_34 & VAR_6) != 0;
  return VAR_5;
}
