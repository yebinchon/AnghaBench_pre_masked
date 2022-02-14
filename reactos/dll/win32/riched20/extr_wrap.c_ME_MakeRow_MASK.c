
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nHeight; int nBaseline; int nWidth; } ;
struct TYPE_7__ {TYPE_1__ row; } ;
struct TYPE_8__ {TYPE_2__ member; } ;
typedef TYPE_3__ ME_DisplayItem ;


 TYPE_3__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static ME_DisplayItem *FUNC_1(int VAR_1, int VAR_2, int VAR_3)
{
  ME_DisplayItem *VAR_4 = FUNC_0(VAR_0);

  VAR_4->member.row.nHeight = VAR_1;
  VAR_4->member.row.nBaseline = VAR_2;
  VAR_4->member.row.nWidth = VAR_3;
  return VAR_4;
}
