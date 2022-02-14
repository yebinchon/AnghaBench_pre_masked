
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ XLogRecPtr ;
struct TYPE_4__ {scalar_t__ currTLI; int nextTLI; int currTLIValidUntil; } ;
typedef TYPE_1__ XLogReaderState ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__,int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(XLogReaderState *VAR_7, XLogRecPtr VAR_8, int VAR_9,
        XLogRecPtr VAR_10, char *VAR_11)
{
 XLogRecPtr VAR_12;
 int VAR_13;

 FUNC_2(VAR_7, VAR_8, VAR_9);
 VAR_4 = (VAR_7->currTLI != VAR_0);
 VAR_3 = VAR_7->currTLI;
 VAR_6 = VAR_7->currTLIValidUntil;
 VAR_5 = VAR_7->nextTLI;


 VAR_12 = FUNC_0(VAR_8 + VAR_9);


 if (VAR_12 < VAR_8 + VAR_9)
  return -1;

 if (VAR_8 + VAR_1 <= VAR_12)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_12 - VAR_8;


 FUNC_1(VAR_2, VAR_11, VAR_8, VAR_1);

 return VAR_13;
}
