
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_data {int flags; int (* r_read_handle ) (int ,void*,size_t) ;int (* read ) (int ,void*,size_t) ;int filept; int iohandle; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,size_t) ;
 int FUNC_1 (int ,void*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(struct reader_data *VAR_1, void *VAR_2, size_t VAR_3)
{
 if(VAR_1->flags & VAR_0)
 {
  if(VAR_1->r_read_handle != ((void*)0))
  {
   return VAR_1->r_read_handle(VAR_1->iohandle, VAR_2, VAR_3);
  }
  else return -1;
 }
 else
 return VAR_1->read(VAR_1->filept, VAR_2, VAR_3);
}
