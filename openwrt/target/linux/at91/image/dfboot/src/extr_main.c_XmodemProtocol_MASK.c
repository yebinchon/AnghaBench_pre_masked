
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int (* Start ) (TYPE_5__*,int,int ,int ,int ) ;} ;
struct TYPE_9__ {TYPE_5__ tempo; int pUsart; } ;
struct TYPE_8__ {TYPE_1__* pBuffer; } ;
struct TYPE_7__ {scalar_t__ szRdBuffer; } ;
struct TYPE_6__ {int pChild; } ;
typedef int AT91S_PipeStatus ;
typedef int AT91PS_USART ;
typedef TYPE_2__* AT91PS_SBuffer ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int,int ,int ,int ) ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_1(AT91S_PipeStatus VAR_3, void *VAR_4)
{
 AT91PS_SBuffer VAR_5 = (AT91PS_SBuffer) VAR_2.pBuffer->pChild;
 AT91PS_USART VAR_6 = VAR_1.pUsart;

 if (VAR_5->szRdBuffer == 0) {

  VAR_1.tempo.Start(&(VAR_1.tempo), 10, 0, VAR_0, VAR_6);
 }
}
