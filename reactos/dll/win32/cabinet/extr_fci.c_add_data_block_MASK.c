
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct data_block {scalar_t__ compressed; scalar_t__ uncompressed; int entry; } ;
struct TYPE_10__ {int handle; } ;
struct TYPE_8__ {scalar_t__ cbReserveCFData; } ;
struct TYPE_9__ {scalar_t__ (* compress ) (TYPE_2__*) ;scalar_t__ (* write ) (int,int ,scalar_t__,int*,int ) ;int pv; int blocks_list; int cDataBlocks; int cCompressedBytesInFolder; TYPE_1__ ccab; int pending_data_size; scalar_t__ cdata_in; int (* free ) (struct data_block*) ;int data_out; TYPE_6__ data; struct data_block* (* alloc ) (int) ;} ;
typedef int (* PFNFCISTATUS ) (int ,scalar_t__,scalar_t__,int ) ;
typedef TYPE_2__ FCI_Int ;
typedef int CFDATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int VAR_6 ;
 struct data_block* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,int*,int ) ;
 int FUNC_6 (struct data_block*) ;

__attribute__((used)) static BOOL FUNC_7( FCI_Int *VAR_7, PFNFCISTATUS VAR_8 )
{
    int VAR_9;
    struct data_block *VAR_10;

    if (!VAR_7->cdata_in) return VAR_5;

    if (VAR_7->data.handle == -1 && !FUNC_0( VAR_7, &VAR_7->data )) return VAR_1;

    if (!(VAR_10 = VAR_7->alloc( sizeof(*VAR_10) )))
    {
        FUNC_2( VAR_7, VAR_2, VAR_0 );
        return VAR_1;
    }
    VAR_10->uncompressed = VAR_7->cdata_in;
    VAR_10->compressed = VAR_7->compress( VAR_7 );

    if (VAR_7->write( VAR_7->data.handle, VAR_7->data_out,
                    VAR_10->compressed, &VAR_9, VAR_7->pv ) != VAR_10->compressed)
    {
        FUNC_2( VAR_7, VAR_3, VAR_9 );
        VAR_7->free( VAR_10 );
        return VAR_1;
    }

    VAR_7->cdata_in = 0;
    VAR_7->pending_data_size += sizeof(CFDATA) + VAR_7->ccab.cbReserveCFData + VAR_10->compressed;
    VAR_7->cCompressedBytesInFolder += VAR_10->compressed;
    VAR_7->cDataBlocks++;
    FUNC_1( &VAR_7->blocks_list, &VAR_10->entry );

    if (VAR_8( VAR_6, VAR_10->compressed, VAR_10->uncompressed, VAR_7->pv ) == -1)
    {
        FUNC_2( VAR_7, VAR_4, 0 );
        return VAR_1;
    }
    return VAR_5;
}
