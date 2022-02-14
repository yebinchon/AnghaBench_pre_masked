
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdb {int fd; scalar_t__ loop; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int ) ;

void FUNC_1(struct cdb *VAR_1) {
 VAR_1->loop = 0;

 if (VAR_1->fd != -1) {
  FUNC_0 (VAR_1->fd, 0, VAR_0);
 }

}
