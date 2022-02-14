
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct folder {int dummy; } ;
typedef scalar_t__ cab_ULONG ;
struct TYPE_13__ {scalar_t__ cbReserveCFFolder; scalar_t__ cb; } ;
struct TYPE_15__ {scalar_t__ fGetNextCabInVain; scalar_t__ fNextCab; scalar_t__ files_size; scalar_t__ pending_data_size; scalar_t__ placed_files_size; scalar_t__ folders_data_size; scalar_t__ folders_size; scalar_t__ cCompressedBytesInFolder; scalar_t__ cDataBlocks; scalar_t__ fSplitFolder; TYPE_2__* pccab; TYPE_1__ ccab; int pv; scalar_t__ estimatedCabinetSize; scalar_t__ statusFolderTotal; scalar_t__ statusFolderCopied; } ;
struct TYPE_14__ {int szDisk; int szCab; int iCab; } ;
typedef int (* PFNFCISTATUS ) (int ,scalar_t__,scalar_t__,int ) ;
typedef int (* PFNFCIGETNEXTCABINET ) (TYPE_2__*,scalar_t__,int ) ;
typedef TYPE_3__ FCI_Int ;
typedef int CFFOLDER ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*,int (*) (int ,scalar_t__,scalar_t__,int )) ;
 int FUNC_1 (TYPE_3__*,struct folder*,scalar_t__*,int (*) (int ,scalar_t__,scalar_t__,int )) ;
 int FUNC_2 (TYPE_3__*,struct folder*,scalar_t__) ;
 struct folder* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_8 (TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static BOOL FUNC_9( FCI_Int *VAR_10,
 BOOL VAR_11,
 PFNFCIGETNEXTCABINET VAR_12,
 PFNFCISTATUS VAR_13)
{
  cab_ULONG VAR_14;
  cab_ULONG VAR_15;
  struct folder *VAR_16;

  if ((!VAR_12) || (!VAR_13)) {
    FUNC_5( VAR_10, VAR_6, VAR_2 );
    return VAR_5;
  }

  if( VAR_10->fGetNextCabInVain &&
      VAR_10->fNextCab ){

    FUNC_5( VAR_10, VAR_6, VAR_4 );
    return VAR_5;
  }



  if( VAR_10->files_size == 0 ) {
    if ( VAR_10->pending_data_size != 0 ) {

      FUNC_5( VAR_10, VAR_6, VAR_4 );
      return VAR_5;
    }
    return VAR_8;
  }


  if (VAR_10->fSplitFolder && VAR_10->placed_files_size!=0) {
    return VAR_8;
  }



  VAR_10->fSplitFolder=VAR_5;


  if (!FUNC_0( VAR_10, VAR_13 )) return VAR_5;



  VAR_10->cDataBlocks=0;

  VAR_10->statusFolderTotal = FUNC_4( VAR_10 ) +
      sizeof(CFFOLDER) + VAR_10->ccab.cbReserveCFFolder +
      VAR_10->placed_files_size+
      VAR_10->folders_data_size + VAR_10->files_size+
      VAR_10->pending_data_size + VAR_10->folders_size;
  VAR_10->statusFolderCopied = 0;


  if( (*VAR_13)(VAR_9, VAR_10->statusFolderCopied,
      VAR_10->statusFolderTotal,
      VAR_10->pv) == -1) {
    FUNC_5( VAR_10, VAR_7, 0 );
    return VAR_5;
  }


  VAR_15 = FUNC_4( VAR_10 ) + VAR_10->folders_data_size +
      VAR_10->placed_files_size + VAR_10->folders_size;

  if(VAR_10->files_size!=0) {
    VAR_15+= sizeof(CFFOLDER)+VAR_10->ccab.cbReserveCFFolder;
  }
  if( VAR_10->fGetNextCabInVain==VAR_5 &&
      VAR_10->fNextCab==VAR_5 &&
      (
        (
          VAR_10->ccab.cb < VAR_15 +
          VAR_10->pending_data_size +
          VAR_10->files_size +
          VAR_0 +
          VAR_1
        ) || VAR_11
      )
  ) {

    ++(VAR_10->pccab->iCab);

    VAR_10->estimatedCabinetSize=VAR_10->statusFolderTotal;
    if (!(*VAR_12)(VAR_10->pccab,
        VAR_10->estimatedCabinetSize,
        VAR_10->pv)) {
      FUNC_5( VAR_10, VAR_6, VAR_3 );
      return VAR_5;
    }


    VAR_10->fGetNextCabInVain=VAR_8;
  }


  if( (VAR_10->fGetNextCabInVain ||
        VAR_10->fNextCab ) &&
      (
        (
          VAR_10->ccab.cb < VAR_15 +
          VAR_10->pending_data_size +
          VAR_10->files_size +
          FUNC_6(VAR_10->pccab->szCab)+1 +
          FUNC_6(VAR_10->pccab->szDisk)+1
        ) || VAR_11
      )
  ) {
    VAR_10->fGetNextCabInVain=VAR_5;
    VAR_10->fNextCab=VAR_8;



    if (VAR_10->ccab.cb <=
        VAR_10->files_size +
        VAR_15 +
        FUNC_6(VAR_10->pccab->szCab)+1 +
        FUNC_6(VAR_10->pccab->szDisk)+1
    ) {

      return VAR_5;
    }


    VAR_10->fSplitFolder=VAR_8;

  } else {

    if (VAR_10->fNextCab) {

      FUNC_5( VAR_10, VAR_6, VAR_4 );
      return VAR_5;
    }
  }

  if (!(VAR_16 = FUNC_3( VAR_10 ))) return VAR_5;
  if (!FUNC_1( VAR_10, VAR_16, &VAR_14, VAR_13 )) return VAR_5;
  if (!FUNC_2( VAR_10, VAR_16, VAR_14 )) return VAR_5;


  VAR_10->cDataBlocks=0;
  VAR_10->cCompressedBytesInFolder=0;

  return VAR_8;
}
