
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct jpeg_source_mgr {unsigned char* next_input_byte; int bytes_in_buffer; } ;
typedef TYPE_1__* j_decompress_ptr ;
typedef int boolean ;
struct TYPE_3__ {struct jpeg_source_mgr* src; } ;




__attribute__((used)) static boolean FUNC_0(j_decompress_ptr VAR_0)
{
 static unsigned char VAR_1[2] = { 0xFF, 128 };
 struct jpeg_source_mgr *VAR_2 = VAR_0->src;
 VAR_2->next_input_byte = VAR_1;
 VAR_2->bytes_in_buffer = 2;
 return 1;
}
