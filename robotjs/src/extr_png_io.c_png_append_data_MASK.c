
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_data {int size; int allocedSize; int * buffer; } ;
typedef int png_struct ;
typedef int png_size_t ;
typedef int png_byte ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 struct io_data* FUNC_2 (int *) ;
 int * FUNC_3 (int *,int) ;
 int * FUNC_4 (int *,int) ;

void FUNC_5(png_struct *VAR_0,
                     png_byte *VAR_1,
                     png_size_t VAR_2)
{
 struct io_data *VAR_3 = FUNC_2(VAR_0);
 VAR_3->size += VAR_2;


 if (VAR_3->buffer == ((void*)0)) {
  VAR_3->allocedSize = VAR_3->size;
  VAR_3->buffer = FUNC_3(VAR_0, VAR_3->allocedSize);
  FUNC_0(VAR_3->buffer != ((void*)0));
 } else if (VAR_3->allocedSize < VAR_3->size) {
  do {

   VAR_3->allocedSize <<= 1;
  } while (VAR_3->allocedSize < VAR_3->size);

  VAR_3->buffer = FUNC_4(VAR_3->buffer, VAR_3->allocedSize);
 }


 FUNC_1(VAR_3->buffer + VAR_3->size - VAR_2, VAR_1, VAR_2);
}
