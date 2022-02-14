
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* png_structp ;
typedef int png_infop ;
struct TYPE_4__ {int (* end_fn ) (TYPE_1__*,int ) ;} ;


 int FUNC_0 (TYPE_1__*,int ) ;

void
FUNC_1(png_structp VAR_0, png_infop VAR_1)
{
   if (VAR_0->end_fn != ((void*)0))
      (*(VAR_0->end_fn))(VAR_0, VAR_1);
}
