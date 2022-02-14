
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int fd; int * buf; int filename; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 struct thread* VAR_4 ;
 int FUNC_4 (char*,int ,int) ;

__attribute__((used)) static void FUNC_5(void *VAR_5)
{
 struct thread *VAR_6 = VAR_5;
 int VAR_7, VAR_8;

 VAR_8 = VAR_6->fd;
 if (VAR_6->fd < 0)
  return;
 VAR_6->fd = -1;


 if (VAR_6 != VAR_4) {
  VAR_7 = FUNC_3(VAR_8, VAR_2);
  if (VAR_7 < 0) {

   if (VAR_3 != VAR_0)
    FUNC_1("%s: get fifo status", VAR_6->filename);
  } else if (VAR_7) {
   FUNC_4("%s: unclaimed = %d\n", VAR_6->filename, VAR_7);
   if (FUNC_3(VAR_8, VAR_1) < 0)
    FUNC_1("%s: fifo flush", VAR_6->filename);
  }
 }

 if (FUNC_0(VAR_8) < 0)
  FUNC_1("%s: close", VAR_6->filename);

 FUNC_2(VAR_6->buf);
 VAR_6->buf = ((void*)0);
}
