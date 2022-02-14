
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_11__ {int offset; int lfn_offset; scalar_t__ lfn; } ;
struct TYPE_10__ {scalar_t__ data_clusters; } ;
typedef TYPE_1__ DOS_FS ;
typedef TYPE_2__ DOS_FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_5(DOS_FS * VAR_3, DOS_FILE * VAR_4)
{
    uint32_t VAR_5;

    FUNC_1(VAR_4, VAR_2[0], VAR_0);
    if (VAR_4->lfn)
 FUNC_2(VAR_4->lfn_offset, VAR_4->offset);
    for (VAR_5 = FUNC_0(VAR_4, VAR_3); VAR_5 > 0 && VAR_5 <
  VAR_3->data_clusters + 2; VAR_5 = FUNC_3(VAR_3, VAR_5))
 FUNC_4(VAR_3, VAR_5, ((void*)0));
    --VAR_1;
}
