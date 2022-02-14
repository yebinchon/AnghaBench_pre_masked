
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ read_ahead; size_t read_pos; scalar_t__ buffer; } ;
typedef TYPE_1__ lzma_mf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,scalar_t__,size_t const) ;
 size_t FUNC_2 (size_t const,size_t) ;

__attribute__((used)) static inline void
FUNC_3(lzma_mf *VAR_0, uint8_t *VAR_1, size_t *VAR_2, size_t VAR_3,
  size_t *VAR_4)
{
 const size_t VAR_5 = VAR_3 - *VAR_2;
 const size_t VAR_6 = FUNC_2(VAR_5, *VAR_4);

 FUNC_0(VAR_0->read_ahead == 0);
 FUNC_0(VAR_0->read_pos >= *VAR_4);

 FUNC_1(VAR_1 + *VAR_2, VAR_0->buffer + VAR_0->read_pos - *VAR_4,
   VAR_6);

 *VAR_2 += VAR_6;
 *VAR_4 -= VAR_6;
 return;
}
