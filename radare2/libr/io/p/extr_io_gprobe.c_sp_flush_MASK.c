
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gport {int fd; int hdl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct gport*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3 (struct gport *VAR_2) {
 if (FUNC_2 (VAR_2->fd, VAR_1) < 0) {
  return -1;
 }


 return 0;
}
