
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nimpinfos; } ;
struct TYPE_11__ {int ** typelib_segment_data; TYPE_1__ typelib_header; TYPE_2__* typelib_segdir; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_12__ {int flags; } ;
struct TYPE_10__ {int length; } ;
typedef TYPE_4__ MSFT_ImpInfo ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t,int,int ) ;
 int FUNC_1 (int *,TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_2(
        msft_typelib_t *VAR_1,
        MSFT_ImpInfo *VAR_2)
{
    int VAR_3;
    MSFT_ImpInfo *VAR_4;

    for (VAR_3 = 0;
  VAR_3 < VAR_1->typelib_segdir[VAR_0].length;
  VAR_3 += sizeof(MSFT_ImpInfo)) {
 if (!FUNC_1(&(VAR_1->typelib_segment_data[VAR_0][VAR_3]),
      VAR_2, sizeof(MSFT_ImpInfo))) {
     return VAR_3;
 }
    }

    VAR_2->flags |= VAR_1->typelib_header.nimpinfos++;

    VAR_3 = FUNC_0(VAR_1, VAR_0, sizeof(MSFT_ImpInfo), 0);

    VAR_4 = (void *)(VAR_1->typelib_segment_data[VAR_0] + VAR_3);
    *VAR_4 = *VAR_2;

    return VAR_3;
}
