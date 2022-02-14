
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ioeventfd {int list; int eventfd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct _ioeventfd*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct _ioeventfd *VAR_0)
{
 FUNC_0(VAR_0->eventfd);
 FUNC_2(&VAR_0->list);
 FUNC_1(VAR_0);
}
