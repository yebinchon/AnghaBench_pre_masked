
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* bytes ) (unsigned char*,int) ;} ;


 int FUNC_0 (int,int ) ;
 unsigned char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(unsigned char *VAR_4, int VAR_5)
{
    int VAR_6;

    if (VAR_0 == ((void*)0))
        return VAR_3->bytes(VAR_4, VAR_5);

    if (!FUNC_0(VAR_1 + VAR_5, VAR_2))
        return 0;

    for (VAR_6 = 0; VAR_6 != VAR_5; ++VAR_6)
        VAR_4[VAR_6] = VAR_0[VAR_1 + VAR_6];
    VAR_1 += VAR_5;
    return 1;
}
