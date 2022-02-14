
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tbuf ;
typedef int r ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 size_t FUNC_1 (unsigned char*,int ) ;

__attribute__((used)) static int FUNC_2(ASN1_STRING *VAR_0, uint64_t VAR_1, int VAR_2)
{
    unsigned char VAR_3[sizeof(VAR_1)];
    size_t VAR_4;

    VAR_0->type = VAR_2;
    VAR_4 = FUNC_1(VAR_3, VAR_1);
    return FUNC_0(VAR_0, VAR_3 + VAR_4, sizeof(VAR_3) - VAR_4);
}
