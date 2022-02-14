
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct io_data {size_t size; int * buffer; int member_2; int member_1; int * member_0; } ;
struct TYPE_4__ {int info_ptr; int png_ptr; } ;
typedef TYPE_1__* PNGWriteInfoRef ;
typedef int * MMBitmapRef ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct io_data*,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int *) ;

uint8_t *FUNC_5(MMBitmapRef VAR_2, size_t *VAR_3)
{
 PNGWriteInfoRef VAR_4 = ((void*)0);
 struct io_data VAR_5 = {((void*)0), 0, 0};

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 if ((VAR_4 = FUNC_1(VAR_2)) == ((void*)0)) return ((void*)0);

 FUNC_3(VAR_4->png_ptr, &VAR_5, &VAR_1, ((void*)0));
 FUNC_4(VAR_4->png_ptr, VAR_4->info_ptr, VAR_0, ((void*)0));

 FUNC_2(VAR_4);

 *VAR_3 = VAR_5.size;
 return VAR_5.buffer;
}
