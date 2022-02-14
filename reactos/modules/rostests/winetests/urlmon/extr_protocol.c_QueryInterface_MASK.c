
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct TYPE_9__ {int member_0; int member_1; int member_2; TYPE_1__ member_3; } ;
typedef int REFIID ;
typedef TYPE_2__ IID ;
typedef int HRESULT ;


 int VAR_0 ;
 TYPE_2__ const VAR_1 ;
 TYPE_2__ const VAR_2 ;
 TYPE_2__ const VAR_3 ;
 TYPE_2__ const VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(REFIID VAR_8, void **VAR_9)
{
    static const IID VAR_10 = {0x58DFC7D0,0x5381,0x43E5,{0x9D,0x72,0x4C,0xDD,0xE4,0xCB,0x0F,0x1A}};
    static const IID VAR_11 = {0xc28722e5,0xbc1a,0x4c55,{0xa6,0x8d,0x33,0x21,0x9f,0x69,0x89,0x10}};

    *VAR_9 = ((void*)0);

    if(FUNC_0(&VAR_3, VAR_8) || FUNC_0(&VAR_1, VAR_8))
        *VAR_9 = &VAR_6;
    if(FUNC_0(&VAR_2, VAR_8))
        *VAR_9 = &VAR_7;
    if(FUNC_0(&VAR_4, VAR_8))
        return VAR_0;


    if(FUNC_0(&VAR_10, VAR_8))
        return VAR_0;

    if(FUNC_0(&VAR_11, VAR_8))
        return VAR_0;

    if(*VAR_9)
        return VAR_5;

    FUNC_1(0, "unexpected call %s\n", FUNC_2(VAR_8));
    return VAR_0;
}
