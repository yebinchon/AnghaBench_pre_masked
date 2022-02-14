
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigqueue {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sigqueue* FUNC_0 (int,int ,int ,int ) ;
 int VAR_2 ;

struct sigqueue *FUNC_1(void)
{
 struct sigqueue *VAR_3 = FUNC_0(-1, VAR_2, VAR_0, 0);

 if (VAR_3)
  VAR_3->flags |= VAR_1;

 return VAR_3;
}
