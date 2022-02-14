
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cleanup_s {int type; int arg; int (* cleanup ) (int,int ) ;} ;
struct TYPE_4__ {int used; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct cleanup_s* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ) ;

void FUNC_3(int VAR_1)
{
 struct cleanup_s *VAR_2 = FUNC_1(&VAR_0);
 int VAR_3 = VAR_0.used;

 for ( ; VAR_3--; VAR_2--) {
  if (VAR_2->type & VAR_1) {
   VAR_2->cleanup(VAR_1, VAR_2->arg);
  }
 }

 FUNC_0(&VAR_0);
}
