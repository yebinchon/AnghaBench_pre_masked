
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ data; } ;
typedef TYPE_1__ BUF_MEM ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,unsigned char const*,long) ;

__attribute__((used)) static int FUNC_3(BUF_MEM *VAR_2, const unsigned char **VAR_3, long VAR_4)
{
    int VAR_5;
    if (VAR_2) {
        VAR_5 = VAR_2->length;
        if (!FUNC_1(VAR_2, VAR_5 + VAR_4)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        FUNC_2(VAR_2->data + VAR_5, *VAR_3, VAR_4);
    }
    *VAR_3 += VAR_4;
    return 1;
}
