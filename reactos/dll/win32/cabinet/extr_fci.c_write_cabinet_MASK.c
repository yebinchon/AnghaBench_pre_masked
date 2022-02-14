
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int cab_UWORD ;
typedef int cab_ULONG ;
typedef scalar_t__ cab_UBYTE ;
struct TYPE_19__ {int versionMinor; int versionMajor; struct TYPE_19__* signature; void* iCabinet; void* setID; void* flags; void* cFiles; void* cFolders; void* coffFiles; void* cbCabinet; } ;
struct TYPE_17__ {int cbReserveCFHeader; int setID; int iCab; int szCab; int szCabPath; scalar_t__ cbReserveCFData; scalar_t__ cbReserveCFFolder; } ;
struct TYPE_18__ {int folders_size; int placed_files_size; int folders_data_size; int cFolders; int cFiles; int (* open ) (char*,int,int,int*,int ) ;int (* write ) (int,TYPE_4__*,int,int*,int ) ;scalar_t__ (* seek ) (int,int ,int ,int*,int ) ;int pv; int (* delete ) (char*,int*,int ) ;int (* close ) (int,int*,int ) ;int estimatedCabinetSize; TYPE_2__ ccab; TYPE_1__* pccab; int szPrevDisk; int szPrevCab; scalar_t__ fNextCab; scalar_t__ fPrevCab; scalar_t__ data_out; } ;
struct TYPE_16__ {int szDisk; int szCab; } ;
typedef int (* PFNFCISTATUS ) (int ,int ,int,int ) ;
typedef int INT_PTR ;
typedef TYPE_3__ FCI_Int ;
typedef TYPE_4__ CFHEADER ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_4__*,char*,int) ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int VAR_15 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (char*,int,int,int*,int ) ;
 int FUNC_12 (int,TYPE_4__*,int,int*,int ) ;
 scalar_t__ FUNC_13 (int,int ,int ,int*,int ) ;
 int FUNC_14 (int,TYPE_4__*,int,int*,int ) ;
 int FUNC_15 (int,int*,int ) ;
 int FUNC_16 (int,int*,int ) ;
 int FUNC_17 (char*,int*,int ) ;
 int FUNC_18 (TYPE_3__*,int,int (*) (int ,int ,int,int )) ;
 int FUNC_19 (TYPE_3__*,int,int (*) (int ,int ,int,int )) ;
 int FUNC_20 (TYPE_3__*,int,int,int (*) (int ,int ,int,int )) ;

__attribute__((used)) static BOOL FUNC_21( FCI_Int *VAR_16, PFNFCISTATUS VAR_17 )
{
    char VAR_18[VAR_1 + VAR_0];
    int VAR_19;
    char *VAR_20;
    INT_PTR VAR_21;
    CFHEADER *VAR_22 = (CFHEADER *)VAR_16->data_out;
    cab_UWORD VAR_23 = 0;
    cab_ULONG VAR_24 = FUNC_3( VAR_16 );
    cab_ULONG VAR_25 = VAR_24 + VAR_16->folders_size +
                           VAR_16->placed_files_size + VAR_16->folders_data_size;

    FUNC_0( VAR_24 <= sizeof(VAR_16->data_out) );
    FUNC_5( VAR_22, 0, VAR_24 );

    if (VAR_16->fPrevCab) VAR_23 |= VAR_13;
    if (VAR_16->fNextCab) VAR_23 |= VAR_12;
    if (VAR_16->ccab.cbReserveCFHeader || VAR_16->ccab.cbReserveCFFolder || VAR_16->ccab.cbReserveCFData)
      VAR_23 |= VAR_14;

    FUNC_4( VAR_22->signature, "!CAB", 4 );
    VAR_22->cbCabinet = FUNC_1( VAR_25 );
    VAR_22->coffFiles = FUNC_1( VAR_24 + VAR_16->folders_size );
    VAR_22->versionMinor = 3;
    VAR_22->versionMajor = 1;
    VAR_22->cFolders = FUNC_2( VAR_16->cFolders );
    VAR_22->cFiles = FUNC_2( VAR_16->cFiles );
    VAR_22->flags = FUNC_2( VAR_23 );
    VAR_22->setID = FUNC_2( VAR_16->ccab.setID );
    VAR_22->iCabinet = FUNC_2( VAR_16->ccab.iCab );
    VAR_20 = (char *)(VAR_22 + 1);

    if (VAR_23 & VAR_14)
    {
        struct
        {
            cab_UWORD cbCFHeader;
            cab_UBYTE cbCFFolder;
            cab_UBYTE cbCFData;
        } *VAR_26 = (void *)VAR_20;

        VAR_26->cbCFHeader = FUNC_2( VAR_16->ccab.cbReserveCFHeader );
        VAR_26->cbCFFolder = VAR_16->ccab.cbReserveCFFolder;
        VAR_26->cbCFData = VAR_16->ccab.cbReserveCFData;
        VAR_20 = (char *)(VAR_26 + 1);
    }
    VAR_20 += VAR_16->ccab.cbReserveCFHeader;

    if (VAR_23 & VAR_13)
    {
        FUNC_9( VAR_20, VAR_16->szPrevCab );
        VAR_20 += FUNC_10( VAR_20 ) + 1;
        FUNC_9( VAR_20, VAR_16->szPrevDisk );
        VAR_20 += FUNC_10( VAR_20 ) + 1;
    }

    if (VAR_23 & VAR_12)
    {
        FUNC_9( VAR_20, VAR_16->pccab->szCab );
        VAR_20 += FUNC_10( VAR_20 ) + 1;
        FUNC_9( VAR_20, VAR_16->pccab->szDisk );
        VAR_20 += FUNC_10( VAR_20 ) + 1;
    }

    FUNC_0( VAR_20 - (char *)VAR_22 == VAR_24 );

    FUNC_9( VAR_18, VAR_16->ccab.szCabPath );
    FUNC_8( VAR_18, VAR_16->ccab.szCab );

    if ((VAR_21 = VAR_16->open( VAR_18, VAR_8 | VAR_7 | VAR_9 | VAR_6,
                             VAR_10 | VAR_11, &VAR_19, VAR_16->pv )) == -1)
    {
        FUNC_7( VAR_16, VAR_3, VAR_19 );
        return VAR_2;
    }

    if (VAR_16->write( VAR_21, VAR_22, VAR_24, &VAR_19, VAR_16->pv ) != VAR_24)
    {
        FUNC_7( VAR_16, VAR_3, VAR_19 );
        goto failed;
    }


    VAR_24 += VAR_16->placed_files_size + VAR_16->folders_size;
    if (!FUNC_20( VAR_16, VAR_21, VAR_24, VAR_17 )) goto failed;
    if (!FUNC_19( VAR_16, VAR_21, VAR_17 )) goto failed;
    if (!FUNC_18( VAR_16, VAR_21, VAR_17 )) goto failed;


    if (VAR_16->seek( VAR_21, 0, VAR_4, &VAR_19, VAR_16->pv ) != 0 )
    {
        FUNC_7( VAR_16, VAR_3, VAR_19 );
        goto failed;
    }
    FUNC_4( VAR_22->signature, "MSCF", 4 );
    if (VAR_16->write( VAR_21, VAR_22->signature, 4, &VAR_19, VAR_16->pv ) != 4)
    {
        FUNC_7( VAR_16, VAR_3, VAR_19 );
        goto failed;
    }
    VAR_16->close( VAR_21, &VAR_19, VAR_16->pv );

    FUNC_6( VAR_16 );
    VAR_17( VAR_15, VAR_16->estimatedCabinetSize, VAR_25, VAR_16->pv );
    return VAR_5;

failed:
    VAR_16->close( VAR_21, &VAR_19, VAR_16->pv );
    VAR_16->delete( VAR_18, &VAR_19, VAR_16->pv );
    return VAR_2;
}
