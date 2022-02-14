
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

void
FUNC_2(XLogReaderState *VAR_3)
{
 uint8 VAR_4 = FUNC_0(VAR_3) & ~VAR_2;

 if (VAR_4 != VAR_1)
  FUNC_1(VAR_0, "logicalmsg_redo: unknown op code %u", VAR_4);


}
