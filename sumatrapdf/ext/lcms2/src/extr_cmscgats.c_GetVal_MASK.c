
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cmsUInt32Number ;
struct TYPE_4__ {int sy; int inum; char* DoubleFormatter; int dnum; int str; int id; } ;
typedef TYPE_1__ cmsIT8 ;
typedef int cmsContext ;
typedef int cmsBool ;







 int FUNC_0 (int ,TYPE_1__*,char*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static
cmsBool FUNC_3(cmsContext VAR_1, cmsIT8* VAR_2, char* VAR_3, cmsUInt32Number VAR_4, const char* VAR_5)
{
    switch (VAR_2->sy) {

    case 131:
                  VAR_3[0]=0;
                  break;
    case 130: FUNC_2(VAR_3, VAR_2->id, VAR_4);
                  VAR_3[VAR_4-1]=0;
                  break;
    case 129: FUNC_1(VAR_3, VAR_4, "%d", VAR_2 -> inum); break;
    case 132: FUNC_1(VAR_3, VAR_4, VAR_2->DoubleFormatter, VAR_2 -> dnum); break;
    case 128: FUNC_2(VAR_3, VAR_2->str, VAR_4);
                  VAR_3[VAR_4-1] = 0;
                  break;


    default:
         return FUNC_0(VAR_1, VAR_2, "%s", VAR_5);
    }

    VAR_3[VAR_4] = 0;
    return VAR_0;
}
