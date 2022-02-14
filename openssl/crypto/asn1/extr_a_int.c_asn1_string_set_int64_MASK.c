
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int tbuf ;
typedef int r ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int type; } ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (TYPE_1__*,unsigned char*,int) ;
 int VAR_0 ;
 size_t FUNC_1 (unsigned char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(ASN1_STRING *VAR_1, int64_t VAR_2, int VAR_3)
{
    unsigned char VAR_4[sizeof(VAR_2)];
    size_t VAR_5;

    VAR_1->type = VAR_3;
    if (VAR_2 < 0) {





        VAR_5 = FUNC_1(VAR_4, 0 - (uint64_t)VAR_2);
        VAR_1->type |= VAR_0;
    } else {
        VAR_5 = FUNC_1(VAR_4, VAR_2);
        VAR_1->type &= ~VAR_0;
    }
    return FUNC_0(VAR_1, VAR_4 + VAR_5, sizeof(VAR_4) - VAR_5);
}
