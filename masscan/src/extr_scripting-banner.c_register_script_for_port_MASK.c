
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ProtocolParserStream {int dummy; } ;
struct TYPE_2__ {struct ProtocolParserStream** tcp; } ;
struct Banner1 {TYPE_1__ payloads; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct Banner1 *VAR_1, int VAR_2)
{
    FUNC_0(0, "SCRIPTING: using port %d\n", VAR_2);
    VAR_1->payloads.tcp[VAR_2] = (struct ProtocolParserStream *)&VAR_0;
}
