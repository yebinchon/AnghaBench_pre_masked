
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ ginxlogSplit ;
typedef int XLogReaderState ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(XLogReaderState *VAR_4)
{
 ginxlogSplit *VAR_5 = (ginxlogSplit *) FUNC_2(VAR_4);
 Buffer VAR_6,
    VAR_7,
    VAR_8;
 bool VAR_9 = (VAR_5->flags & VAR_2) != 0;
 bool VAR_10 = (VAR_5->flags & VAR_3) != 0;





 if (!VAR_9)
  FUNC_4(VAR_4, 3);

 if (FUNC_1(VAR_4, 0, &VAR_6) != VAR_0)
  FUNC_3(VAR_1, "GIN split record did not contain a full-page image of left page");

 if (FUNC_1(VAR_4, 1, &VAR_7) != VAR_0)
  FUNC_3(VAR_1, "GIN split record did not contain a full-page image of right page");

 if (VAR_10)
 {
  if (FUNC_1(VAR_4, 2, &VAR_8) != VAR_0)
   FUNC_3(VAR_1, "GIN split record did not contain a full-page image of root page");
  FUNC_0(VAR_8);
 }

 FUNC_0(VAR_7);
 FUNC_0(VAR_6);
}
