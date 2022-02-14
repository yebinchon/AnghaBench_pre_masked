
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
typedef int uint16 ;
struct TYPE_6__ {int channel; } ;
struct TYPE_7__ {TYPE_1__ cliprdr; } ;
typedef int STREAM ;
typedef TYPE_2__ RDPCLIENT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(RDPCLIENT * VAR_0, uint16 VAR_1, uint16 VAR_2, uint8 * VAR_3, uint32 VAR_4)
{
 STREAM VAR_5;

 FUNC_0(("CLIPRDR send: type=%d, status=%d, length=%d\n", VAR_1, VAR_2, VAR_4));

 VAR_5 = FUNC_1(VAR_0, VAR_0->cliprdr.channel, VAR_4 + 12);
 FUNC_3(VAR_5, VAR_1);
 FUNC_3(VAR_5, VAR_2);
 FUNC_5(VAR_5, VAR_4);
 FUNC_6(VAR_5, VAR_3, VAR_4);
 FUNC_4(VAR_5, 0);
 FUNC_7(VAR_5);
 FUNC_2(VAR_0, VAR_5, VAR_0->cliprdr.channel);
}
