
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int host; int mailbox; int adl; int personal; struct TYPE_3__* next; } ;
typedef TYPE_1__ ADDRESS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1 (ADDRESS *VAR_1)
{
 ADDRESS *VAR_2;
 int VAR_3=0, VAR_4=0;

 VAR_2 = VAR_1;

 if (VAR_2) do {
  VAR_3 += FUNC_0(VAR_2->personal);
  VAR_3 += FUNC_0(VAR_2->adl);
  VAR_3 += FUNC_0(VAR_2->mailbox);
  VAR_3 += FUNC_0(VAR_2->host);
  VAR_4++;
 } while ((VAR_2 = VAR_2->next));






 VAR_3 += (VAR_3) ? VAR_4*VAR_0 : 0;

 return VAR_3;
}
