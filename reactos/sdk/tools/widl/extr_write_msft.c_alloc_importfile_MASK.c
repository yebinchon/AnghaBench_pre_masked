
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lcid2; } ;
struct TYPE_9__ {int** typelib_segment_data; TYPE_2__ typelib_header; TYPE_1__* typelib_segdir; } ;
typedef TYPE_3__ msft_typelib_t ;
struct TYPE_10__ {int guid; int version; int filename; int lcid; } ;
struct TYPE_7__ {int length; } ;
typedef TYPE_4__ MSFT_ImpFile ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*,size_t,int,int ) ;
 int FUNC_1 (char const*,char**) ;
 int FUNC_2 (char*,int*,int) ;
 int FUNC_3 (int *,char*,int) ;

__attribute__((used)) static int FUNC_4(
        msft_typelib_t *VAR_1,
        int VAR_2,
        int VAR_3,
        int VAR_4,
        const char *VAR_5)
{
    int VAR_6;
    int VAR_7;
    MSFT_ImpFile *VAR_8;
    char *VAR_9;

    VAR_6 = FUNC_1(VAR_5, &VAR_9);

    VAR_9[0] <<= 2;
    VAR_9[0] |= 1;

    for (VAR_7 = 0; VAR_7 < VAR_1->typelib_segdir[VAR_0].length;
  VAR_7 += (((VAR_1->typelib_segment_data[VAR_0][VAR_7 + 0xd] << 8) |
               VAR_1->typelib_segment_data[VAR_0][VAR_7 + 0xc]) >> 2) + 0xc) {
 if (!FUNC_2(VAR_9, VAR_1->typelib_segment_data[VAR_0] + VAR_7 + 0xc, VAR_6)) return VAR_7;
    }

    VAR_7 = FUNC_0(VAR_1, VAR_0, VAR_6 + 0xc, 0);

    VAR_8 = (MSFT_ImpFile *)&VAR_1->typelib_segment_data[VAR_0][VAR_7];
    VAR_8->guid = VAR_2;
    VAR_8->lcid = VAR_1->typelib_header.lcid2;
    VAR_8->version = VAR_3 | (VAR_4 << 16);
    FUNC_3(&VAR_8->filename, VAR_9, VAR_6);

    return VAR_7;
}
