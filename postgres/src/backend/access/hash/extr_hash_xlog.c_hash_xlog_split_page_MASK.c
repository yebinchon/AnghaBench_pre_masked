
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int XLogReaderState ;
typedef int Buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(XLogReaderState *VAR_2)
{
 Buffer VAR_3;

 if (FUNC_1(VAR_2, 0, &VAR_3) != VAR_0)
  FUNC_2(VAR_1, "Hash split record did not contain a full-page image");

 FUNC_0(VAR_3);
}
