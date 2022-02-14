
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_4__ {int * read; } ;
struct TYPE_5__ {int * img_buffer_original_end; int * img_buffer_end; int * img_buffer_original; int * img_buffer; scalar_t__ read_from_callbacks; TYPE_1__ io; } ;
typedef TYPE_2__ stbi__context ;



__attribute__((used)) static void FUNC_0(stbi__context *VAR_0, stbi_uc const *VAR_1, int VAR_2)
{
   VAR_0->io.read = ((void*)0);
   VAR_0->read_from_callbacks = 0;
   VAR_0->img_buffer = VAR_0->img_buffer_original = (stbi_uc *) VAR_1;
   VAR_0->img_buffer_end = VAR_0->img_buffer_original_end = (stbi_uc *) VAR_1+VAR_2;
}
