
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_8__ {int tmPitchAndFamily; } ;
struct TYPE_6__ {int bProportion; int bWeight; int bSerifStyle; int bFamilyType; } ;
struct TYPE_7__ {TYPE_1__ panose; } ;
typedef TYPE_2__ TT_OS2_V4 ;
typedef TYPE_3__ TEXTMETRICA ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,char const*,int,int,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(const TEXTMETRICA *VAR_1, const TT_OS2_V4 *VAR_2, WORD VAR_3, const char *VAR_4)
{
    FUNC_3((VAR_1->tmPitchAndFamily & 0xf0) == VAR_3 ||
       FUNC_2(FUNC_1(FUNC_0()) != VAR_0),
       "%s: expected family %02x got %02x. panose %d-%d-%d-%d-...\n",
       VAR_4, VAR_3, VAR_1->tmPitchAndFamily, VAR_2->panose.bFamilyType, VAR_2->panose.bSerifStyle,
       VAR_2->panose.bWeight, VAR_2->panose.bProportion);
}
