
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rm_lastRevmapPage; int rm_currBuf; int rm_irel; } ;
typedef int Buffer ;
typedef TYPE_1__ BrinRevmap ;
typedef scalar_t__ BlockNumber ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static Buffer
FUNC_6(BrinRevmap *VAR_4, BlockNumber VAR_5)
{
 BlockNumber VAR_6;


 VAR_6 = FUNC_5(VAR_4, VAR_5);

 if (VAR_6 == VAR_2)
  FUNC_4(VAR_1, "revmap does not cover heap block %u", VAR_5);


 FUNC_0(VAR_6 != VAR_0 &&
     VAR_6 <= VAR_4->rm_lastRevmapPage);






 if (VAR_4->rm_currBuf == VAR_3 ||
  VAR_6 != FUNC_1(VAR_4->rm_currBuf))
 {
  if (VAR_4->rm_currBuf != VAR_3)
   FUNC_3(VAR_4->rm_currBuf);

  VAR_4->rm_currBuf = FUNC_2(VAR_4->rm_irel, VAR_6);
 }

 return VAR_4->rm_currBuf;
}
