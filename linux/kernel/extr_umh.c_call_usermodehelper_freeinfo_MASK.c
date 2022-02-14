
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {int (* cleanup ) (struct subprocess_info*) ;} ;


 int FUNC_0 (struct subprocess_info*) ;
 int FUNC_1 (struct subprocess_info*) ;

__attribute__((used)) static void FUNC_2(struct subprocess_info *VAR_0)
{
 if (VAR_0->cleanup)
  (*VAR_0->cleanup)(VAR_0);
 FUNC_0(VAR_0);
}
