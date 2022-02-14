
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned char** typelib_segment_data; int* typelib_segment_block_length; TYPE_1__* typelib_segdir; TYPE_3__* typeinfos; } ;
typedef TYPE_2__ msft_typelib_t ;
struct TYPE_7__ {void* typeinfo; struct TYPE_7__* next_typeinfo; } ;
typedef TYPE_3__ msft_typeinfo_t ;
typedef enum MSFT_segment_index { ____Placeholder_MSFT_segment_index } MSFT_segment_index ;
struct TYPE_5__ {int length; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int,int) ;
 unsigned char* FUNC_1 (int) ;
 unsigned char* FUNC_2 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(
 msft_typelib_t *VAR_1,
 enum MSFT_segment_index VAR_2,
 int VAR_3,
 int VAR_4)
{
    int VAR_5;

    if(!VAR_1->typelib_segment_data[VAR_2]) {
 if (!VAR_4) VAR_4 = 0x2000;

 VAR_1->typelib_segment_block_length[VAR_2] = VAR_4;
 VAR_1->typelib_segment_data[VAR_2] = FUNC_1(VAR_4);
 if (!VAR_1->typelib_segment_data[VAR_2]) return -1;
 FUNC_0(VAR_1->typelib_segment_data[VAR_2], 0x57, VAR_4);
    }

    while ((VAR_1->typelib_segdir[VAR_2].length + VAR_3) > VAR_1->typelib_segment_block_length[VAR_2]) {
 unsigned char *VAR_6;

 VAR_4 = VAR_1->typelib_segment_block_length[VAR_2];
 VAR_6 = FUNC_2(VAR_1->typelib_segment_data[VAR_2], VAR_4 << 1);

 if (VAR_2 == VAR_0) {

     msft_typeinfo_t *VAR_7;

     for (VAR_7 = VAR_1->typeinfos; VAR_7; VAR_7 = VAR_7->next_typeinfo) {
  VAR_7->typeinfo = (void *)&VAR_6[((unsigned char *)VAR_7->typeinfo) - VAR_1->typelib_segment_data[VAR_2]];
     }
 }

 FUNC_0(VAR_6 + VAR_4, 0x57, VAR_4);
 VAR_1->typelib_segment_block_length[VAR_2] = VAR_4 << 1;
 VAR_1->typelib_segment_data[VAR_2] = VAR_6;
    }

    VAR_5 = VAR_1->typelib_segdir[VAR_2].length;
    VAR_1->typelib_segdir[VAR_2].length += VAR_3;

    return VAR_5;
}
