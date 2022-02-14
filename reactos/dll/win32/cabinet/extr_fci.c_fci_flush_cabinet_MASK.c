
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ cab_ULONG ;
struct TYPE_11__ {scalar_t__ cbReserveCFFolder; scalar_t__ cb; scalar_t__ cbFolderThresh; int szDisk; int szCab; int iCab; } ;
struct TYPE_12__ {scalar_t__ files_size; scalar_t__ fNextCab; scalar_t__ folders_size; scalar_t__ placed_files_size; scalar_t__ pending_data_size; scalar_t__ folders_data_size; scalar_t__ fGetNextCabInVain; scalar_t__ cCompressedBytesInFolder; scalar_t__ fNewPrevious; TYPE_1__ ccab; int pv; int estimatedCabinetSize; TYPE_1__* pccab; int statusFolderTotal; int szPrevDisk; int szPrevCab; scalar_t__ fPrevCab; scalar_t__ fSplitFolder; } ;
typedef int PFNFCISTATUS ;
typedef int (* PFNFCIGETNEXTCABINET ) (TYPE_1__*,int ,int ) ;
typedef TYPE_2__ FCI_Int ;
typedef int CFFOLDER ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__,int (*) (TYPE_1__*,int ,int ),int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ) ;

__attribute__((used)) static BOOL FUNC_7( FCI_Int *VAR_7,
 BOOL VAR_8,
 PFNFCIGETNEXTCABINET VAR_9,
 PFNFCISTATUS VAR_10)
{
  cab_ULONG VAR_11=0;
  BOOL VAR_12=VAR_4;




  if( VAR_7->files_size==0 && VAR_8 ) {
    VAR_12=VAR_6;
  }

  if (!FUNC_0(VAR_7,VAR_8,VAR_9,VAR_10)){

    return VAR_4;
  }

  if(VAR_12) return VAR_6;

  if ( (VAR_7->fSplitFolder && VAR_7->fNextCab==VAR_4)||
       (VAR_7->folders_size==0 &&
         (VAR_7->files_size!=0 ||
          VAR_7->placed_files_size!=0 )
     ) )
  {

      FUNC_3( VAR_7, VAR_5, VAR_3 );
      return VAR_4;
  }


  if (!FUNC_6( VAR_7, VAR_10 )) return VAR_4;

  VAR_7->fPrevCab=VAR_6;



  if (VAR_7->fNextCab) {
    VAR_7->fNextCab=VAR_4;

    if (VAR_7->files_size==0 && VAR_7->pending_data_size!=0) {


      FUNC_3( VAR_7, VAR_5, VAR_3 );
      return VAR_4;
    }

    if( VAR_7->fNewPrevious ) {
      FUNC_2(VAR_7->szPrevCab, VAR_7->ccab.szCab,
        VAR_0);
      FUNC_2(VAR_7->szPrevDisk, VAR_7->ccab.szDisk,
        VAR_1);
      VAR_7->fNewPrevious=VAR_4;
    }
    VAR_7->ccab = *VAR_7->pccab;


    VAR_11=FUNC_1( VAR_7 );
    if(VAR_7->files_size!=0) {
        VAR_11+=VAR_7->ccab.cbReserveCFFolder;
    }
    VAR_11+= VAR_7->pending_data_size +
      VAR_7->files_size + VAR_7->folders_data_size +
      VAR_7->placed_files_size + VAR_7->folders_size +
      sizeof(CFFOLDER);


    if( VAR_7->fGetNextCabInVain==VAR_4 &&
        VAR_7->ccab.cb < VAR_11 ) {
      return FUNC_7( VAR_7, VAR_4, VAR_9, VAR_10);
    }







    if (VAR_7->fGetNextCabInVain==VAR_4 && (
      VAR_7->ccab.cb < VAR_11 +
      VAR_0 + VAR_1
    )) {

      ++(VAR_7->pccab->iCab);

      VAR_7->estimatedCabinetSize=VAR_7->statusFolderTotal;
      if (!(*VAR_9)(VAR_7->pccab,
          VAR_7->estimatedCabinetSize,
          VAR_7->pv)) {

        FUNC_3( VAR_7, VAR_5, VAR_2 );
        return VAR_4;
      }

      VAR_7->fGetNextCabInVain=VAR_6;
    }


    if (VAR_7->fGetNextCabInVain && (
        VAR_7->ccab.cb < VAR_11 +
        FUNC_4(VAR_7->ccab.szCab)+1+
        FUNC_4(VAR_7->ccab.szDisk)+1
    )) {
      VAR_7->fGetNextCabInVain=VAR_4;
      VAR_7->fNextCab=VAR_6;
      return FUNC_7( VAR_7, VAR_4, VAR_9, VAR_10);
    }


    if (VAR_7->cCompressedBytesInFolder >= VAR_7->ccab.cbFolderThresh)
        return FUNC_0(VAR_7, VAR_4, VAR_9, VAR_10);

    if( VAR_7->files_size>0 ) {
      if( !FUNC_0(VAR_7, VAR_4, VAR_9, VAR_10) ) return VAR_4;
      VAR_7->fNewPrevious=VAR_6;
    }
  } else {
    VAR_7->fNewPrevious=VAR_4;
    if( VAR_7->files_size>0 || VAR_7->pending_data_size) {


      FUNC_3( VAR_7, VAR_5, VAR_3 );
      return VAR_4;
    }
  }

  return VAR_6;
}
