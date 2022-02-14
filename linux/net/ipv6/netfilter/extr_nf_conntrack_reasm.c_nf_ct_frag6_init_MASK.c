
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct frag_queue {int dummy; } ;
struct TYPE_4__ {int qsize; int rhash_params; int frags_cache_name; int frag_expire; int * destructor; int constructor; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;

int FUNC_3(void)
{
 int VAR_6 = 0;

 VAR_3.constructor = VAR_0;
 VAR_3.destructor = ((void*)0);
 VAR_3.qsize = sizeof(struct frag_queue);
 VAR_3.frag_expire = VAR_1;
 VAR_3.frags_cache_name = VAR_4;
 VAR_3.rhash_params = VAR_5;
 VAR_6 = FUNC_1(&VAR_3);
 if (VAR_6)
  goto out;
 VAR_6 = FUNC_2(&VAR_2);
 if (VAR_6)
  FUNC_0(&VAR_3);

out:
 return VAR_6;
}
