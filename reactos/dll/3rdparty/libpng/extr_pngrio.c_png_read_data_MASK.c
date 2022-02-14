
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* png_structrp ;
typedef int png_bytep ;
struct TYPE_5__ {int (* read_data_fn ) (TYPE_1__*,int ,size_t) ;} ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ,size_t) ;

void
FUNC_3(png_structrp VAR_0, png_bytep VAR_1, size_t VAR_2)
{
   FUNC_0(4, "reading %d bytes", (int)VAR_2);

   if (VAR_0->read_data_fn != ((void*)0))
      (*(VAR_0->read_data_fn))(VAR_0, VAR_1, VAR_2);

   else
      FUNC_1(VAR_0, "Call to NULL read function");
}
