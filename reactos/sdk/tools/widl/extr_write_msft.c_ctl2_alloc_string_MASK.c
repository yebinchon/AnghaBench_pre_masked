
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int** typelib_segment_data; TYPE_1__* typelib_segdir; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_5__ {int length; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*,size_t,int,int ) ;
 int FUNC_1 (char const*,char**) ;
 int FUNC_2 (char*,int*,int) ;
 int FUNC_3 (unsigned char*,char*,int) ;

__attribute__((used)) static int FUNC_4(
 msft_typelib_t *VAR_1,
 const char *VAR_2)
{
    int VAR_3;
    int VAR_4;
    unsigned char *VAR_5;
    char *VAR_6;

    VAR_3 = FUNC_1(VAR_2, &VAR_6);

    for (VAR_4 = 0; VAR_4 < VAR_1->typelib_segdir[VAR_0].length;
  VAR_4 += (((VAR_1->typelib_segment_data[VAR_0][VAR_4 + 1] << 8) |
       VAR_1->typelib_segment_data[VAR_0][VAR_4 + 0]) + 5) & ~3) {
 if (!FUNC_2(VAR_6, VAR_1->typelib_segment_data[VAR_0] + VAR_4, VAR_3)) return VAR_4;
    }

    VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_3, 0);

    VAR_5 = VAR_1->typelib_segment_data[VAR_0] + VAR_4;
    FUNC_3(VAR_5, VAR_6, VAR_3);

    return VAR_4;
}
