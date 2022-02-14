
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_5__ {int channel; } ;
struct TYPE_6__ {TYPE_1__ rdpsnd; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static STREAM
FUNC_2(RDPCLIENT * VAR_0, uint16 VAR_1, uint16 VAR_2)
{
 STREAM VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_0->rdpsnd.channel, VAR_2 + 4);
 FUNC_1(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_2);
 return VAR_3;
}
