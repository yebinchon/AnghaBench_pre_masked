
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtype ;



__attribute__((used)) static int FUNC_0(rtype VAR_0)
{

    struct IEEEdp {
    unsigned manl:32;
    unsigned manh:20;
    unsigned exp:11;
    unsigned sign:1;
    } *VAR_1;
    VAR_1 = (struct IEEEdp *)&VAR_0;
    return (VAR_1->exp != 0x7ff);
}
