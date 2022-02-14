
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reader_data {int flags; int (* r_lseek_handle ) (int ,int,int) ;int (* lseek ) (int ,int,int) ;int filept; int iohandle; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static off_t FUNC_2(struct reader_data *VAR_1, off_t VAR_2, int VAR_3)
{
 if(VAR_1->flags & VAR_0)
 {
  if(VAR_1->r_lseek_handle != ((void*)0))
  {
   return VAR_1->r_lseek_handle(VAR_1->iohandle, VAR_2, VAR_3);
  }
  else return -1;
 }
 else
 return VAR_1->lseek(VAR_1->filept, VAR_2, VAR_3);
}
