
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vringh {int (* notify ) (struct vringh*) ;} ;


 int FUNC_0 (struct vringh*) ;

__attribute__((used)) static inline void FUNC_1(struct vringh *VAR_0)
{
 if (VAR_0->notify)
  VAR_0->notify(VAR_0);
}
