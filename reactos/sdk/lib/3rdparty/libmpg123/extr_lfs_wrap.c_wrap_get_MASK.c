
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wrap_data {int fd; int my_fd; int * h_cleanup; int * r_h_lseek; int * r_h_read; int * handle; int * r_lseek; int * r_read; scalar_t__ iotype; int * indextable; } ;
struct TYPE_3__ {struct wrap_data* wrapperdata; int wrapperclean; int err; } ;
typedef TYPE_1__ mpg123_handle ;


 int VAR_0 ;
 struct wrap_data* FUNC_0 (int) ;
 int VAR_1 ;

__attribute__((used)) static struct wrap_data* FUNC_1(mpg123_handle *VAR_2)
{
 struct wrap_data* VAR_3;
 if(VAR_2 == ((void*)0)) return ((void*)0);



 if(VAR_2->wrapperdata == ((void*)0))
 {

  VAR_2->wrapperdata = FUNC_0(sizeof(struct wrap_data));
  if(VAR_2->wrapperdata == ((void*)0))
  {
   VAR_2->err = VAR_0;
   return ((void*)0);
  }

  VAR_2->wrapperclean = VAR_1;

  VAR_3 = VAR_2->wrapperdata;
  VAR_3->indextable = ((void*)0);
  VAR_3->iotype = 0;
  VAR_3->fd = -1;
  VAR_3->my_fd = -1;
  VAR_3->r_read = ((void*)0);
  VAR_3->r_lseek = ((void*)0);
  VAR_3->handle = ((void*)0);
  VAR_3->r_h_read = ((void*)0);
  VAR_3->r_h_lseek = ((void*)0);
  VAR_3->h_cleanup = ((void*)0);
 }
 else VAR_3 = VAR_2->wrapperdata;

 return VAR_3;
}
