
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct status_line {int read_fd; int write_fd; TYPE_1__* bar; } ;
struct TYPE_2__ {int eventloop; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct status_line *VAR_0) {
 if (VAR_0->read_fd != -1) {
  FUNC_1(VAR_0->bar->eventloop, VAR_0->read_fd);
  FUNC_0(VAR_0->read_fd);
  VAR_0->read_fd = -1;
 }
 if (VAR_0->write_fd != -1) {
  FUNC_0(VAR_0->write_fd);
  VAR_0->write_fd = -1;
 }
}
