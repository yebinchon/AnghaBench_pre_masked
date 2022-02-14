
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_io_buffer {int type; int readbuf_size; int writebuf_size; struct tomoyo_io_buffer* read_buf; void* write_buf; int * write; int * poll; int * read; int io_sem; } ;
struct file {int f_mode; struct tomoyo_io_buffer* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct tomoyo_io_buffer*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tomoyo_io_buffer*,int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;
 int * VAR_22 ;

int FUNC_5(const u8 VAR_23, struct file *VAR_24)
{
 struct tomoyo_io_buffer *VAR_25 = FUNC_2(sizeof(*VAR_25), VAR_3);

 if (!VAR_25)
  return -VAR_0;
 FUNC_3(&VAR_25->io_sem);
 VAR_25->type = VAR_23;
 switch (VAR_23) {
 case 135:

  VAR_25->write = VAR_17;
  VAR_25->read = VAR_7;
  break;
 case 134:

  VAR_25->write = VAR_18;
  VAR_25->read = VAR_8;
  break;
 case 136:

  VAR_25->poll = VAR_4;
  VAR_25->read = VAR_9;
  break;
 case 132:

  VAR_25->write = VAR_20;
  VAR_25->read = VAR_11;
  break;
 case 128:

  VAR_25->read = VAR_15;
  VAR_25->readbuf_size = 128;
  break;
 case 129:

  VAR_25->write = VAR_22;
  VAR_25->read = VAR_14;
  VAR_25->readbuf_size = 1024;
  break;
 case 131:

  VAR_25->write = VAR_21;
  VAR_25->read = VAR_12;
  break;
 case 130:
  VAR_25->poll = VAR_5;
  VAR_25->write = VAR_16;
  VAR_25->read = VAR_13;
  break;
 case 133:

  VAR_25->write = VAR_19;
  VAR_25->read = VAR_10;
  break;
 }
 if (!(VAR_24->f_mode & VAR_1)) {




  VAR_25->read = ((void*)0);
  VAR_25->poll = ((void*)0);
 } else if (!VAR_25->poll) {

  if (!VAR_25->readbuf_size)
   VAR_25->readbuf_size = 4096 * 2;
  VAR_25->read_buf = FUNC_2(VAR_25->readbuf_size, VAR_3);
  if (!VAR_25->read_buf) {
   FUNC_1(VAR_25);
   return -VAR_0;
  }
 }
 if (!(VAR_24->f_mode & VAR_2)) {




  VAR_25->write = ((void*)0);
 } else if (VAR_25->write) {
  VAR_25->writebuf_size = 4096 * 2;
  VAR_25->write_buf = FUNC_2(VAR_25->writebuf_size, VAR_3);
  if (!VAR_25->write_buf) {
   FUNC_1(VAR_25->read_buf);
   FUNC_1(VAR_25);
   return -VAR_0;
  }
 }






 if (VAR_23 == 130)
  FUNC_0(&VAR_6);
 VAR_24->private_data = VAR_25;
 FUNC_4(VAR_25, 1);
 return 0;
}
