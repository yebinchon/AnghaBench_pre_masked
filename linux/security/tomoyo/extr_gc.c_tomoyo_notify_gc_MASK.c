
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tomoyo_io_buffer {int users; struct tomoyo_io_buffer* write_buf; struct tomoyo_io_buffer* read_buf; int list; } ;


 int FUNC_0 (struct tomoyo_io_buffer*) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_6(struct tomoyo_io_buffer *VAR_3, const bool VAR_4)
{
 bool VAR_5 = 0;

 FUNC_4(&VAR_2);
 if (VAR_4) {
  VAR_3->users = 1;
  FUNC_2(&VAR_3->list, &VAR_1);
 } else {
  VAR_5 = VAR_3->write_buf != ((void*)0);
  if (!--VAR_3->users) {
   FUNC_3(&VAR_3->list);
   FUNC_0(VAR_3->read_buf);
   FUNC_0(VAR_3->write_buf);
   FUNC_0(VAR_3);
  }
 }
 FUNC_5(&VAR_2);
 if (VAR_5)
  FUNC_1(VAR_0, ((void*)0), "GC for TOMOYO");
}
