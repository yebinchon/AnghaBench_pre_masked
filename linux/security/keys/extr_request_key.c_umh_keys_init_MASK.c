
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_info {struct key* data; } ;
struct key {int dummy; } ;
struct cred {int dummy; } ;


 int FUNC_0 (struct cred*,struct key*) ;

__attribute__((used)) static int FUNC_1(struct subprocess_info *VAR_0, struct cred *VAR_1)
{
 struct key *VAR_2 = VAR_0->data;

 return FUNC_0(VAR_1, VAR_2);
}
