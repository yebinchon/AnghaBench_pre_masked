
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_size_t ;
typedef int png_bytep ;
struct TYPE_5__ {int (* write_data_fn ) (TYPE_1__*,int ,int ) ;} ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

void
FUNC_2(png_structp VAR_0, png_bytep VAR_1, png_size_t VAR_2)
{
   if (VAR_0->write_data_fn != ((void*)0) )
      (*(VAR_0->write_data_fn))(VAR_0, VAR_1, VAR_2);
   else
      FUNC_0(VAR_0, "Call to NULL write function");
}
