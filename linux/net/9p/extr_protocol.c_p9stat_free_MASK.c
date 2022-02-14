
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_wstat {int * extension; int * muid; int * gid; int * uid; int * name; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct p9_wstat *VAR_0)
{
 FUNC_0(VAR_0->name);
 VAR_0->name = ((void*)0);
 FUNC_0(VAR_0->uid);
 VAR_0->uid = ((void*)0);
 FUNC_0(VAR_0->gid);
 VAR_0->gid = ((void*)0);
 FUNC_0(VAR_0->muid);
 VAR_0->muid = ((void*)0);
 FUNC_0(VAR_0->extension);
 VAR_0->extension = ((void*)0);
}
