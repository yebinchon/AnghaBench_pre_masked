
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_3__ {int name; } ;
typedef size_t* PULONG ;
typedef int LPSTR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (TYPE_1__**) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,int ,int ) ;
 int VAR_2 ;
 TYPE_1__** VAR_3 ;

BOOLEAN FUNC_5(LPSTR VAR_4,PULONG VAR_5)
{
    ULONG VAR_6;
 char VAR_7[VAR_0];

    for(VAR_6=0;VAR_6<FUNC_1(VAR_3);VAR_6++)
    {
        if(VAR_3[VAR_6])
        {
   FUNC_0(VAR_7,VAR_3[VAR_6]->name);
            if(FUNC_2(VAR_4,VAR_7)==0)
            {
                *VAR_5 = (ULONG)VAR_3[VAR_6];
                return VAR_2;
            }
        }
    }

    for(VAR_6=0;VAR_6<FUNC_1(VAR_3);VAR_6++)
    {
        if(VAR_3[VAR_6])
        {
   FUNC_0(VAR_7,VAR_3[VAR_6]->name);
            if(FUNC_4(VAR_7,VAR_4,FUNC_3(VAR_4))==0)
            {
                *VAR_5 = (ULONG)VAR_3[VAR_6];
                return VAR_2;
            }
        }
    }

 return VAR_1;
}
