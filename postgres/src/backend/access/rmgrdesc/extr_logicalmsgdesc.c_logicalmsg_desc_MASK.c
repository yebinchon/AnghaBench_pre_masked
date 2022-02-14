
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int message_size; scalar_t__ transactional; } ;
typedef TYPE_1__ xl_logical_message ;
typedef scalar_t__ uint8 ;
typedef int XLogReaderState ;
typedef int StringInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char*,int ) ;

void
FUNC_3(StringInfo VAR_2, XLogReaderState *VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_3);
 uint8 VAR_5 = FUNC_1(VAR_3) & ~VAR_1;

 if (VAR_5 == VAR_0)
 {
  xl_logical_message *VAR_6 = (xl_logical_message *) VAR_4;

  FUNC_2(VAR_2, "%s message size %zu bytes",
       VAR_6->transactional ? "transactional" : "nontransactional",
       VAR_6->message_size);
 }
}
