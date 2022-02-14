
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct event*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

int FUNC_3(struct event *VAR_1)
{
 int VAR_2;


 FUNC_2();

 VAR_2 = FUNC_1(VAR_1->fd, VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1);


 FUNC_2();

 return VAR_2;
}
