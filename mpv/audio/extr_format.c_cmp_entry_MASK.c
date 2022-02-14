
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int score; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{

    return -(((struct entry *)VAR_0)->score > ((struct entry *)VAR_1)->score ? 1 : (((struct entry *)VAR_0)->score < ((struct entry *)VAR_1)->score ? -1 : 0));
}
