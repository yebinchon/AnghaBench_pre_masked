
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dump_context {int dummy; } ;
typedef int ULONG64 ;
struct TYPE_3__ {int Rip; scalar_t__ ContextFlags; } ;
typedef TYPE_1__ CONTEXT ;
typedef int BOOL ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct dump_context*,int,int,int ) ;

__attribute__((used)) static BOOL FUNC_1(struct dump_context* VAR_2, unsigned VAR_3, unsigned VAR_4, const CONTEXT* VAR_5)
{
    if (VAR_5->ContextFlags && (VAR_4 & VAR_1))
    {


        ULONG64 VAR_6 = VAR_5->Rip <= 0x80 ? 0 : VAR_5->Rip - 0x80;
        FUNC_0(VAR_2, VAR_6, VAR_5->Rip + 0x80 - VAR_6, 0);

    }

    return VAR_0;
}
