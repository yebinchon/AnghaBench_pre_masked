
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_6__ {scalar_t__ Type; } ;
typedef TYPE_1__ cmsGDBPoint ;
struct TYPE_7__ {TYPE_1__** Gamut; } ;
typedef TYPE_2__ cmsGDB ;
struct TYPE_8__ {int AdvX; int AdvY; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

__attribute__((used)) static
int FUNC_0(cmsGDB* VAR_4, int VAR_5, int VAR_6, cmsGDBPoint* VAR_7[])
{
    int VAR_8 = 0;
    int VAR_9, VAR_10;
    cmsUInt32Number VAR_11;
    cmsGDBPoint* VAR_12;

    for (VAR_11=0; VAR_11 < VAR_1; VAR_11++) {

        VAR_9 = VAR_5 + VAR_3[VAR_11].AdvX;
        VAR_10 = VAR_6 + VAR_3[VAR_11].AdvY;


        VAR_9 %= VAR_2;
        VAR_10 %= VAR_2;


        if (VAR_9 < 0) VAR_9 = VAR_2 + VAR_9;
        if (VAR_10 < 0) VAR_10 = VAR_2 + VAR_10;

        VAR_12 = &VAR_4 ->Gamut[VAR_10][VAR_9];

        if (VAR_12 -> Type != VAR_0) {

            VAR_7[VAR_8++] = VAR_12;
        }
    }

    return VAR_8;
}
