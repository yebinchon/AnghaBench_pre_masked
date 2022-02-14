
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct KeynameKeeper {int buf; int keyLen; int keyName; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct KeynameKeeper *VAR_0)
{
    VAR_0->keyName = VAR_0->buf;
    VAR_0->keyLen = FUNC_0(VAR_0->buf);
}
