
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {scalar_t__ fd; int filename; int buf; int buf_size; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct thread *VAR_1)
{
 VAR_1->buf = FUNC_1(VAR_1->buf_size);
 FUNC_0(!VAR_1->buf, "malloc");

 VAR_1->fd = FUNC_2(VAR_1->filename, VAR_0);
 FUNC_0(VAR_1->fd < 0, "%s", VAR_1->filename);
}
