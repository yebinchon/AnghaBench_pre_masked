
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xform ;
typedef int rectangle ;
struct TYPE_3__ {double member_0; double member_3; int member_5; int member_4; int member_2; int member_1; } ;
typedef TYPE_1__ XFORM ;
struct TYPE_4__ {int member_2; int member_3; int member_1; int member_0; } ;
typedef TYPE_2__ RECTL ;
typedef int GpStatus ;
typedef int GpMetafile ;
typedef int EmfPlusRecordType ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int,void*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(GpMetafile* VAR_3, EmfPlusRecordType VAR_4,
    unsigned int VAR_5, unsigned int VAR_6, const unsigned char *VAR_7)
{
    static const XFORM VAR_8 = {0.5, 0, 0, 0.5, 0, 0};
    static const RECTL VAR_9 = {0,0,100,100};
    GpStatus VAR_10;

    VAR_10 = FUNC_0(VAR_3, VAR_1, 0, sizeof(VAR_8), (void*)&VAR_8);
    FUNC_1(VAR_2, VAR_10);

    VAR_10 = FUNC_0(VAR_3, VAR_0, 0, sizeof(VAR_9), (void*)&VAR_9);
    FUNC_1(VAR_2, VAR_10);
}
