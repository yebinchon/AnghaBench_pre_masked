
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_callback {int (* done ) (struct netlink_callback*) ;} ;


 int FUNC_0 (struct netlink_callback*) ;
 int FUNC_1 (struct netlink_callback*) ;

__attribute__((used)) static int FUNC_2(struct netlink_callback *VAR_0)
{
 FUNC_0(VAR_0);
 return VAR_0->done ? VAR_0->done(VAR_0) : 0;
}
