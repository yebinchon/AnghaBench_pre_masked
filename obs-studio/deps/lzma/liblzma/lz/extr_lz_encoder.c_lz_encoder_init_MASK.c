
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {size_t const size; int write_pos; size_t hash_size_sum; size_t sons_count; int action; int (* skip ) (TYPE_1__*,int) ;int * buffer; int * hash; scalar_t__ cyclic_pos; int son; scalar_t__ pending; scalar_t__ read_limit; scalar_t__ read_ahead; scalar_t__ read_pos; int cyclic_size; int offset; } ;
typedef TYPE_1__ lzma_mf ;
struct TYPE_7__ {scalar_t__ preset_dict_size; int * preset_dict; } ;
typedef TYPE_2__ lzma_lz_options ;
typedef int lzma_allocator ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t const,int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,size_t) ;
 int FUNC_3 (scalar_t__,size_t const) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static bool
FUNC_5(lzma_mf *VAR_3, lzma_allocator *VAR_4,
  const lzma_lz_options *VAR_5)
{

 if (VAR_3->buffer == ((void*)0)) {
  VAR_3->buffer = FUNC_0(VAR_3->size, VAR_4);
  if (VAR_3->buffer == ((void*)0))
   return 1;
 }





 VAR_3->offset = VAR_3->cyclic_size;
 VAR_3->read_pos = 0;
 VAR_3->read_ahead = 0;
 VAR_3->read_limit = 0;
 VAR_3->write_pos = 0;
 VAR_3->pending = 0;


 const size_t VAR_6 = VAR_3->hash_size_sum + VAR_3->sons_count;




 if (VAR_6 > VAR_2 / sizeof(uint32_t))
  return 1;


 if (VAR_3->hash == ((void*)0)) {
  VAR_3->hash = FUNC_0(VAR_6 * sizeof(uint32_t),
    VAR_4);
  if (VAR_3->hash == ((void*)0))
   return 1;
 }

 VAR_3->son = *(VAR_3->hash + VAR_3->hash_size_sum);
 VAR_3->cyclic_pos = 0;







 FUNC_2(VAR_3->hash, (size_t)(VAR_3->hash_size_sum) * sizeof(uint32_t));
 if (VAR_5->preset_dict != ((void*)0)
   && VAR_5->preset_dict_size > 0) {


  VAR_3->write_pos = FUNC_3(VAR_5->preset_dict_size, VAR_3->size);
  FUNC_1(VAR_3->buffer, VAR_5->preset_dict
    + VAR_5->preset_dict_size - VAR_3->write_pos,
    VAR_3->write_pos);
  VAR_3->action = VAR_1;
  VAR_3->skip(VAR_3, VAR_3->write_pos);
 }

 VAR_3->action = VAR_0;

 return 0;
}
