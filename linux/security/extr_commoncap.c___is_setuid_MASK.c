
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int uid; int euid; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct cred *VAR_0, const struct cred *VAR_1)
{ return !FUNC_0(VAR_0->euid, VAR_1->uid); }
