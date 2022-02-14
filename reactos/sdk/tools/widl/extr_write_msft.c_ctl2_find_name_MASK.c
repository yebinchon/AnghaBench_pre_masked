
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* typelib_namehash_segment; int ** typelib_segment_data; } ;
typedef TYPE_1__ msft_typelib_t ;


 size_t VAR_0 ;
 int FUNC_0 (char*,void*,char) ;

__attribute__((used)) static int FUNC_1(
 msft_typelib_t *VAR_1,
 char *VAR_2)
{
    int VAR_3;
    int *VAR_4;

    VAR_3 = VAR_1->typelib_namehash_segment[VAR_2[2] & 0x7f];
    while (VAR_3 != -1) {
 VAR_4 = (int *)&VAR_1->typelib_segment_data[VAR_0][VAR_3];

 if (!((VAR_4[2] ^ *((int *)VAR_2)) & 0xffff00ff)) {

     if (!FUNC_0(VAR_2+4, (void *)(VAR_4+3), VAR_2[0])) break;
 }


 VAR_3 = VAR_4[1];
    }

    return VAR_3;
}
