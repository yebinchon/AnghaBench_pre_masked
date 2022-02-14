
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {int * dentry; int * mnt; } ;
struct TYPE_2__ {int ** data; } ;
struct key {TYPE_1__ payload; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct path*) ;

void FUNC_2(struct key *VAR_4)
{
 size_t VAR_5 = (size_t)VAR_4->payload.data[VAR_2];

 if (VAR_5 > VAR_0) {
  struct path *VAR_6 = (struct path *)&VAR_4->payload.data[VAR_3];

  FUNC_1(VAR_6);
  VAR_6->mnt = ((void*)0);
  VAR_6->dentry = ((void*)0);
 }
 FUNC_0(VAR_4->payload.data[VAR_1]);
 VAR_4->payload.data[VAR_1] = ((void*)0);
}
