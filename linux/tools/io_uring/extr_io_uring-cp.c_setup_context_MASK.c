
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_uring {int dummy; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (unsigned int,struct io_uring*,int ) ;
 int VAR_0 ;
 char* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_1, struct io_uring *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
 if (VAR_3 < 0) {
  FUNC_0(VAR_0, "queue_init: %s\n", FUNC_2(-VAR_3));
  return -1;
 }

 return 0;
}
