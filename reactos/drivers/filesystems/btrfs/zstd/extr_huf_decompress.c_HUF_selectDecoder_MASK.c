
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_2__ {int tableTime; int const decode256Time; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (int) ;

U32 FUNC_1 (size_t VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_1 > 0);
    FUNC_0(VAR_1 <= 128*1024);

    { U32 const VAR_3 = (VAR_2 >= VAR_1) ? 15 : (U32)(VAR_2 * 16 / VAR_1);
        U32 const VAR_4 = (U32)(VAR_1 >> 8);
        U32 const VAR_5 = VAR_0[VAR_3][0].tableTime + (VAR_0[VAR_3][0].decode256Time * VAR_4);
        U32 VAR_6 = VAR_0[VAR_3][1].tableTime + (VAR_0[VAR_3][1].decode256Time * VAR_4);
        VAR_6 += VAR_6 >> 3;
        return VAR_6 < VAR_5;
} }
