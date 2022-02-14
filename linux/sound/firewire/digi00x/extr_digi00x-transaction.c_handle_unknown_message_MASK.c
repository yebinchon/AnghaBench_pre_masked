
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dg00x {int hwdep_wait; int lock; int msg; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_dg00x *VAR_0,
       unsigned long long VAR_1, __be32 *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0->lock, VAR_3);
 VAR_0->msg = FUNC_0(*VAR_2);
 FUNC_2(&VAR_0->lock, VAR_3);

 FUNC_3(&VAR_0->hwdep_wait);
}
