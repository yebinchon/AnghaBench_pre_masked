
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_bytep ;
struct TYPE_4__ {scalar_t__ pass; int row_number; int (* row_fn ) (TYPE_1__*,int ,int ,int) ;} ;


 int FUNC_0 (TYPE_1__*,int ,int ,int) ;

void
FUNC_1(png_structp VAR_0, png_bytep VAR_1)
{
   if (VAR_0->row_fn != ((void*)0))
      (*(VAR_0->row_fn))(VAR_0, VAR_1, VAR_0->row_number,
         (int)VAR_0->pass);
}
